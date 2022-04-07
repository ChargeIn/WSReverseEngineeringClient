//
// Created by flop on 05.04.22.
//



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402001d0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402001f2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_GameFormula_140a6a408, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c638ac == 0) {
        iVar1 = FUN_1401fffc0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020021c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64c58 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140200220(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140200249. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_GameFormula_140a6a408, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c638ac == 0) {
        iVar1 = FUN_1401fffc0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140200277. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64c58 + 0x18))(DAT_140c64c58, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140200280(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402002a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_GameFormula_140a6a408, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c638ac == 0) {
        iVar1 = FUN_1401fffc0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402002d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64c58 + 0x20))(DAT_140c64c58, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140200400(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c654c0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"GenericMap"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63cc4 != 0) {
                iVar2 = _DAT_140c64c30;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_GenericMap_140a72618;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\GenericMap.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_GenericMap_140a72618;
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
                plVar3[3] = (longlong) & PTR_u_GenericMap_140a72618;
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
        DAT_140c654c0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64898 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140200610(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140200632. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_GenericMap_140a6a440, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64898 == 0) {
        iVar1 = FUN_140200400();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020065c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c654c0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140200660(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140200689. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_GenericMap_140a6a440, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64898 == 0) {
        iVar1 = FUN_140200400();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402006b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c654c0 + 0x18))(DAT_140c654c0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402006c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402006e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_GenericMap_140a6a440, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64898 == 0) {
        iVar1 = FUN_140200400();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140200717. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c654c0 + 0x20))(DAT_140c654c0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140200840(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64460 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"GenericMapNode"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c6510c != 0) {
                iVar2 = _DAT_140c65510;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_GenericMapNode_140ad1c30;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\GenericMapNode.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_GenericMapNode_140ad1c30;
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
                plVar3[3] = (longlong) & PTR_u_GenericMapNode_140ad1c30;
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
        DAT_140c64460 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c642f8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140200a50(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140200a72. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_GenericMapNode_140a6a478, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c642f8 == 0) {
        iVar1 = FUN_140200840();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140200a9c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64460 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140200aa0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140200ac9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_GenericMapNode_140a6a478, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c642f8 == 0) {
        iVar1 = FUN_140200840();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140200af7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64460 + 0x18))(DAT_140c64460, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140200b00(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140200b29. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_GenericMapNode_140a6a478, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c642f8 == 0) {
        iVar1 = FUN_140200840();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140200b57. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64460 + 0x20))(DAT_140c64460, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140200c80(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63a28 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"GenericStringGroups"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64984 != 0) {
                iVar2 = _DAT_140c6485c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_GenericStringGroups_140a70fc0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\GenericStringGroups.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_GenericStringGroups_140a70fc0;
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
                plVar3[3] = (longlong) & PTR_u_GenericStringGroups_140a70fc0;
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
        DAT_140c63a28 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63fa0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140200e90(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140200eb2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_GenericStringGroups_140a6a4b0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63fa0 == 0) {
        iVar1 = FUN_140200c80();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140200edc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63a28 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140200ee0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140200f09. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_GenericStringGroups_140a6a4b0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63fa0 == 0) {
        iVar1 = FUN_140200c80();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140200f37. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63a28 + 0x18))(DAT_140c63a28, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140200f40(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140200f69. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_GenericStringGroups_140a6a4b0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63fa0 == 0) {
        iVar1 = FUN_140200c80();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140200f97. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63a28 + 0x20))(DAT_140c63a28, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402010c0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64e50 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"GenericUnlockEntry"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64de0 != 0) {
                iVar2 = _DAT_140c6415c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_GenericUnlockEntry_140a5b710;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\GenericUnlockEntry.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_GenericUnlockEntry_140a5b710;
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
                plVar3[3] = (longlong) & PTR_u_GenericUnlockEntry_140a5b710;
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
        DAT_140c64e50 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64c20 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402012d0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402012f2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_GenericUnlockEntry_140a6a4e8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64c20 == 0) {
        iVar1 = FUN_1402010c0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020131c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64e50 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140201320(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140201349. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_GenericUnlockEntry_140a6a4e8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64c20 == 0) {
        iVar1 = FUN_1402010c0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140201377. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64e50 + 0x18))(DAT_140c64e50, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140201380(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402013a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_GenericUnlockEntry_140a6a4e8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64c20 == 0) {
        iVar1 = FUN_1402010c0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402013d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64e50 + 0x20))(DAT_140c64e50, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140201500(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64490 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"GenericUnlockSet"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c650ac != 0) {
                iVar2 = _DAT_140c65538;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_GenericUnlockSet_140acc968;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\GenericUnlockSet.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_GenericUnlockSet_140acc968;
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
                plVar3[3] = (longlong) & PTR_u_GenericUnlockSet_140acc968;
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
        DAT_140c64490 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64c64 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140201710(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140201732. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_GenericUnlockSet_140a6a520, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64c64 == 0) {
        iVar1 = FUN_140201500();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020175c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64490 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140201760(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140201789. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_GenericUnlockSet_140a6a520, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64c64 == 0) {
        iVar1 = FUN_140201500();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402017b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64490 + 0x18))(DAT_140c64490, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402017c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402017e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_GenericUnlockSet_140a6a520, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64c64 == 0) {
        iVar1 = FUN_140201500();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140201817. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64490 + 0x20))(DAT_140c64490, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140201940(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63ed8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"GossipEntry"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c650dc != 0) {
                iVar2 = _DAT_140c64108;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_GossipEntry_140a7e938;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\GossipEntry.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_GossipEntry_140a7e938;
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
                plVar3[3] = (longlong) & PTR_u_GossipEntry_140a7e938;
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
        DAT_140c63ed8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64744 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140201b50(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140201b72. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_GossipEntry_140a6a558, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64744 == 0) {
        iVar1 = FUN_140201940();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140201b9c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63ed8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140201c00(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140201c29. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_GossipEntry_140a6a558, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64744 == 0) {
        iVar1 = FUN_140201940();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140201c57. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63ed8 + 0x20))(DAT_140c63ed8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140201d80(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63ba8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"GossipSet"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63dcc != 0) {
                iVar2 = _DAT_140c64280;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_GossipSet_140acae18;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\GossipSet.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_GossipSet_140acae18;
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
                plVar3[3] = (longlong) & PTR_u_GossipSet_140acae18;
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
        DAT_140c63ba8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63cf0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140201f90(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140201fb2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_GossipSet_140a6a590, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63cf0 == 0) {
        iVar1 = FUN_140201d80();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140201fdc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63ba8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140201fe0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140202009. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_GossipSet_140a6a590, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63cf0 == 0) {
        iVar1 = FUN_140201d80();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140202037. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63ba8 + 0x18))(DAT_140c63ba8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140202040(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140202069. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_GossipSet_140a6a590, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63cf0 == 0) {
        iVar1 = FUN_140201d80();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140202097. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63ba8 + 0x20))(DAT_140c63ba8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402021c0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c648c8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"GuildPermission"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63f14 != 0) {
                iVar2 = _DAT_140c65260;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_GuildPermission_140a84410;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\GuildPermission.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_GuildPermission_140a84410;
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
                plVar3[3] = (longlong) & PTR_u_GuildPermission_140a84410;
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
        DAT_140c648c8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63bb0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402023d0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402023f2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_GuildPermission_140a6a5c8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63bb0 == 0) {
        iVar1 = FUN_1402021c0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020241c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c648c8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140202480(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402024a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_GuildPermission_140a6a5c8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63bb0 == 0) {
        iVar1 = FUN_1402021c0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402024d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c648c8 + 0x20))(DAT_140c648c8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140202600(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64aa0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"GuildStandardPart"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64ae0 != 0) {
                iVar2 = _DAT_140c63ae8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_GuildStandardPart_140acfc90;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\GuildStandardPart.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_GuildStandardPart_140acfc90;
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
                plVar3[3] = (longlong) & PTR_u_GuildStandardPart_140acfc90;
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
        DAT_140c64aa0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63b20 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140202810(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140202832. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_GuildStandardPart_140a6a600, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63b20 == 0) {
        iVar1 = FUN_140202600();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020285c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64aa0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140202860(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140202889. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_GuildStandardPart_140a6a600, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63b20 == 0) {
        iVar1 = FUN_140202600();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402028b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64aa0 + 0x18))(DAT_140c64aa0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402028c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402028e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_GuildStandardPart_140a6a600, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63b20 == 0) {
        iVar1 = FUN_140202600();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140202917. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64aa0 + 0x20))(DAT_140c64aa0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140202a40(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c646b0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"GuildPerk"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64c08 != 0) {
                iVar2 = _DAT_140c64364;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_GuildPerk_140a83a98;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\GuildPerk.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_GuildPerk_140a83a98;
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
                plVar3[3] = (longlong) & PTR_u_GuildPerk_140a83a98;
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
        DAT_140c646b0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c655d0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140202c50(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140202c72. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_GuildPerk_140a6a638, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c655d0 == 0) {
        iVar1 = FUN_140202a40();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140202c9c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c646b0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140202ca0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140202cc9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_GuildPerk_140a6a638, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c655d0 == 0) {
        iVar1 = FUN_140202a40();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140202cf7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c646b0 + 0x18))(DAT_140c646b0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140202d00(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140202d29. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_GuildPerk_140a6a638, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c655d0 == 0) {
        iVar1 = FUN_140202a40();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140202d57. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c646b0 + 0x20))(DAT_140c646b0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140202e80(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65030 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"Hazard"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c639c8 != 0) {
                iVar2 = _DAT_140c63d74;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Hazard_140a884c8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Hazard.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Hazard_140a884c8;
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
                plVar3[3] = (longlong) & PTR_u_Hazard_140a884c8;
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
        DAT_140c65030 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63b5c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140203090(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402030b2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Hazard_140a6a670, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63b5c == 0) {
        iVar1 = FUN_140202e80();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402030dc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65030 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402030e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140203109. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Hazard_140a6a670, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63b5c == 0) {
        iVar1 = FUN_140202e80();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140203137. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65030 + 0x18))(DAT_140c65030, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140203140(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140203169. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Hazard_140a6a670, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63b5c == 0) {
        iVar1 = FUN_140202e80();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140203197. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65030 + 0x20))(DAT_140c65030, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402032c0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64dc0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"HookAsset"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64dcc != 0) {
                iVar2 = _DAT_140c64194;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_HookAsset_140a83360;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\HookAsset.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_HookAsset_140a83360;
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
                plVar3[3] = (longlong) & PTR_u_HookAsset_140a83360;
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
        DAT_140c64dc0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65654 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402034d0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402034f2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_HookAsset_140a6a6a8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65654 == 0) {
        iVar1 = FUN_1402032c0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020351c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64dc0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140203520(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140203549. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_HookAsset_140a6a6a8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65654 == 0) {
        iVar1 = FUN_1402032c0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140203577. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64dc0 + 0x18))(DAT_140c64dc0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140203580(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402035a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_HookAsset_140a6a6a8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65654 == 0) {
        iVar1 = FUN_1402032c0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402035d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64dc0 + 0x20))(DAT_140c64dc0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140203700(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64a10 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"HookType"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65344 != 0) {
                iVar2 = _DAT_140c643e4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_HookType_140a62168;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\HookType.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_HookType_140a62168;
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
                plVar3[3] = (longlong) & PTR_u_HookType_140a62168;
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
        DAT_140c64a10 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64eb8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140203910(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140203932. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_HookType_140a6a6e0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64eb8 == 0) {
        iVar1 = FUN_140203700();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020395c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64a10 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402039c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402039e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_HookType_140a6a6e0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64eb8 == 0) {
        iVar1 = FUN_140203700();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140203a17. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64a10 + 0x20))(DAT_140c64a10, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140203b40(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65008 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"HousingDecorInfo"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64ac4 != 0) {
                iVar2 = _DAT_140c65250;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingDecorInfo_140acb5f8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\HousingDecorInfo.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingDecorInfo_140acb5f8;
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
                plVar3[3] = (longlong) & PTR_u_HousingDecorInfo_140acb5f8;
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
        DAT_140c65008 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c646a8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140203d50(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140203d72. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_HousingDecorInfo_140a6a718, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c646a8 == 0) {
        iVar1 = FUN_140203b40();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140203d9c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65008 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140203da0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140203dc9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_HousingDecorInfo_140a6a718, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c646a8 == 0) {
        iVar1 = FUN_140203b40();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140203df7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65008 + 0x18))(DAT_140c65008, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140203e00(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140203e29. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_HousingDecorInfo_140a6a718, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c646a8 == 0) {
        iVar1 = FUN_140203b40();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140203e57. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65008 + 0x20))(DAT_140c65008, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140203f80(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63db8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"HousingDecorLimitCategory"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63d28 != 0) {
                iVar2 = _DAT_140c63da8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingDecorLimitCategory_140a76ad0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\HousingDecorLimitCategory.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingDecorLimitCategory_140a76ad0;
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
                plVar3[3] = (longlong) & PTR_u_HousingDecorLimitCategory_140a76ad0;
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
        DAT_140c63db8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63f10 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140204190(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402041b2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_HousingDecorLimitCategory_140a6a750, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63f10 == 0) {
        iVar1 = FUN_140203f80();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402041dc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63db8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402041e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140204209. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_HousingDecorLimitCategory_140a6a750, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63f10 == 0) {
        iVar1 = FUN_140203f80();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140204237. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63db8 + 0x18))(DAT_140c63db8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140204240(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140204269. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_HousingDecorLimitCategory_140a6a750, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63f10 == 0) {
        iVar1 = FUN_140203f80();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140204297. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63db8 + 0x20))(DAT_140c63db8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402043c0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63998 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"HousingDecorType"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64960 != 0) {
                iVar2 = _DAT_140c63ee4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingDecorType_140a7aab0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\HousingDecorType.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingDecorType_140a7aab0;
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
                plVar3[3] = (longlong) & PTR_u_HousingDecorType_140a7aab0;
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
        DAT_140c63998 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64db4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402045d0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402045f2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_HousingDecorType_140a6a788, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64db4 == 0) {
        iVar1 = FUN_1402043c0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020461c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63998 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140204680(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402046a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_HousingDecorType_140a6a788, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64db4 == 0) {
        iVar1 = FUN_1402043c0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402046d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63998 + 0x20))(DAT_140c63998, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140204800(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63a70 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"HousingContributionType"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63d24 != 0) {
                iVar2 = _DAT_140c64af0;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingContributionType_140acc278;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\HousingContributionType.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingContributionType_140acc278;
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
                plVar3[3] = (longlong) & PTR_u_HousingContributionType_140acc278;
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
        DAT_140c63a70 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c639d4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140204a10(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140204a32. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_HousingContributionType_140a6a7c0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c639d4 == 0) {
        iVar1 = FUN_140204800();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140204a5c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63a70 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140204ac0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140204ae9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_HousingContributionType_140a6a7c0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c639d4 == 0) {
        iVar1 = FUN_140204800();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140204b17. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63a70 + 0x20))(DAT_140c63a70, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140204c40(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64c88 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"HousingContributionInfo"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c641cc != 0) {
                iVar2 = _DAT_140c63e70;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingContributionInfo_140acbdf8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\HousingContributionInfo.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingContributionInfo_140acbdf8;
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
                plVar3[3] = (longlong) & PTR_u_HousingContributionInfo_140acbdf8;
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
        DAT_140c64c88 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63e00 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140204e50(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140204e72. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_HousingContributionInfo_140a6a7f8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63e00 == 0) {
        iVar1 = FUN_140204c40();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140204e9c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64c88 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140204ea0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140204ec9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_HousingContributionInfo_140a6a7f8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63e00 == 0) {
        iVar1 = FUN_140204c40();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140204ef7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64c88 + 0x18))(DAT_140c64c88, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140204f00(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140204f29. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_HousingContributionInfo_140a6a7f8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63e00 == 0) {
        iVar1 = FUN_140204c40();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140204f57. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64c88 + 0x20))(DAT_140c64c88, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140205080(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c646e8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"HousingMannequinPose"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63944 != 0) {
                iVar2 = _DAT_140c640ac;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingMannequinPose_140ad45e8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\HousingMannequinPose.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingMannequinPose_140ad45e8;
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
                plVar3[3] = (longlong) & PTR_u_HousingMannequinPose_140ad45e8;
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
        DAT_140c646e8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c639f8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140205290(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402052b2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_HousingMannequinPose_140a6a830, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c639f8 == 0) {
        iVar1 = FUN_140205080();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402052dc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c646e8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402052e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140205309. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_HousingMannequinPose_140a6a830, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c639f8 == 0) {
        iVar1 = FUN_140205080();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140205337. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c646e8 + 0x18))(DAT_140c646e8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140205340(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140205369. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_HousingMannequinPose_140a6a830, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c639f8 == 0) {
        iVar1 = FUN_140205080();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140205397. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c646e8 + 0x20))(DAT_140c646e8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402054c0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63938 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"HousingMapInfo"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64448 != 0) {
                iVar2 = _DAT_140c655dc;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingMapInfo_140a80250;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\HousingMapInfo.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingMapInfo_140a80250;
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
                plVar3[3] = (longlong) & PTR_u_HousingMapInfo_140a80250;
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
        DAT_140c63938 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c648bc = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402056d0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402056f2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_HousingMapInfo_140a6a868, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c648bc == 0) {
        iVar1 = FUN_1402054c0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020571c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63938 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140205780(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402057a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_HousingMapInfo_140a6a868, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c648bc == 0) {
        iVar1 = FUN_1402054c0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402057d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63938 + 0x20))(DAT_140c63938, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140205900(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63c90 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"HousingNeighborhoodInfo"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65000 != 0) {
                iVar2 = _DAT_140c6555c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingNeighborhoodInfo_140ad7958;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\HousingNeighborhoodInfo.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingNeighborhoodInfo_140ad7958;
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
                plVar3[3] = (longlong) & PTR_u_HousingNeighborhoodInfo_140ad7958;
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
        DAT_140c63c90 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64fc0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140205b10(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140205b32. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_HousingNeighborhoodInfo_140a6a8a0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64fc0 == 0) {
        iVar1 = FUN_140205900();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140205b5c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63c90 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140205b60(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140205b89. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_HousingNeighborhoodInfo_140a6a8a0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64fc0 == 0) {
        iVar1 = FUN_140205900();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140205bb7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63c90 + 0x18))(DAT_140c63c90, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140205bc0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140205be9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_HousingNeighborhoodInfo_140a6a8a0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64fc0 == 0) {
        iVar1 = FUN_140205900();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140205c17. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63c90 + 0x20))(DAT_140c63c90, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140205d40(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63c30 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"HousingPlotInfo"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64978 != 0) {
                iVar2 = _DAT_140c64268;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingPlotInfo_140ad6f20;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\HousingPlotInfo.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingPlotInfo_140ad6f20;
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
                plVar3[3] = (longlong) & PTR_u_HousingPlotInfo_140ad6f20;
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
        DAT_140c63c30 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65340 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140205f50(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140205f72. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_HousingPlotInfo_140a6a8d8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65340 == 0) {
        iVar1 = FUN_140205d40();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140205f9c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63c30 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140205fa0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140205fc9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_HousingPlotInfo_140a6a8d8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65340 == 0) {
        iVar1 = FUN_140205d40();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140205ff7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63c30 + 0x18))(DAT_140c63c30, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140206000(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140206029. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_HousingPlotInfo_140a6a8d8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65340 == 0) {
        iVar1 = FUN_140205d40();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140206057. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63c30 + 0x20))(DAT_140c63c30, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140206180(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65528 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"HousingPlotType"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c655ac != 0) {
                iVar2 = _DAT_140c6426c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingPlotType_140acfdc8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\HousingPlotType.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingPlotType_140acfdc8;
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
                plVar3[3] = (longlong) & PTR_u_HousingPlotType_140acfdc8;
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
        DAT_140c65528 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64f30 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140206390(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402063b2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_HousingPlotType_140a6a910, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64f30 == 0) {
        iVar1 = FUN_140206180();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402063dc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65528 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140206440(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140206469. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_HousingPlotType_140a6a910, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64f30 == 0) {
        iVar1 = FUN_140206180();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140206497. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65528 + 0x20))(DAT_140c65528, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402065c0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63c60 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"HousingBuild"), iVar2 == 0)
                ) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63b88 != 0) {
                iVar2 = _DAT_140c64924;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingBuild_140adc700;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\HousingBuild.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingBuild_140adc700;
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
                plVar3[3] = (longlong) & PTR_u_HousingBuild_140adc700;
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
        DAT_140c63c60 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c646dc = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402067d0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402067f2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_HousingBuild_140a6a948, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c646dc == 0) {
        iVar1 = FUN_1402065c0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020681c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63c60 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140206820(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140206849. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_HousingBuild_140a6a948, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c646dc == 0) {
        iVar1 = FUN_1402065c0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140206877. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63c60 + 0x18))(DAT_140c63c60, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140206880(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402068a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_HousingBuild_140a6a948, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c646dc == 0) {
        iVar1 = FUN_1402065c0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402068d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63c60 + 0x20))(DAT_140c63c60, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140206a00(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64258 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"HousingPlugItem"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65268 != 0) {
                iVar2 = _DAT_140c65618;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingPlugItem_140ad7478;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\HousingPlugItem.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingPlugItem_140ad7478;
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
                plVar3[3] = (longlong) & PTR_u_HousingPlugItem_140ad7478;
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
        DAT_140c64258 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65068 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140206c10(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140206c32. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_HousingPlugItem_140a6a980, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65068 == 0) {
        iVar1 = FUN_140206a00();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140206c5c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64258 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140206c60(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140206c89. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_HousingPlugItem_140a6a980, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65068 == 0) {
        iVar1 = FUN_140206a00();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140206cb7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64258 + 0x18))(DAT_140c64258, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140206cc0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140206ce9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_HousingPlugItem_140a6a980, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65068 == 0) {
        iVar1 = FUN_140206a00();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140206d17. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64258 + 0x20))(DAT_140c64258, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140206e40(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64de8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"HousingPropertyInfo"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64a8c != 0) {
                iVar2 = _DAT_140c63874;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingPropertyInfo_140a76fb0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\HousingPropertyInfo.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingPropertyInfo_140a76fb0;
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
                plVar3[3] = (longlong) & PTR_u_HousingPropertyInfo_140a76fb0;
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
        DAT_140c64de8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64b88 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140207050(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140207072. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_HousingPropertyInfo_140a6a9b8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64b88 == 0) {
        iVar1 = FUN_140206e40();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020709c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64de8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402070a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402070c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_HousingPropertyInfo_140a6a9b8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64b88 == 0) {
        iVar1 = FUN_140206e40();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402070f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64de8 + 0x18))(DAT_140c64de8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140207100(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140207129. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_HousingPropertyInfo_140a6a9b8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64b88 == 0) {
        iVar1 = FUN_140206e40();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140207157. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64de8 + 0x20))(DAT_140c64de8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140207280(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64488 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"HousingResidenceInfo"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64bc4 != 0) {
                iVar2 = _DAT_140c63e3c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingResidenceInfo_140ade138;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\HousingResidenceInfo.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingResidenceInfo_140ade138;
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
                plVar3[3] = (longlong) & PTR_u_HousingResidenceInfo_140ade138;
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
        DAT_140c64488 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c643e0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140207490(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402074b2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_HousingResidenceInfo_140a6a9f0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c643e0 == 0) {
        iVar1 = FUN_140207280();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402074dc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64488 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402074e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140207509. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_HousingResidenceInfo_140a6a9f0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c643e0 == 0) {
        iVar1 = FUN_140207280();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140207537. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64488 + 0x18))(DAT_140c64488, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140207540(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140207569. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_HousingResidenceInfo_140a6a9f0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c643e0 == 0) {
        iVar1 = FUN_140207280();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140207597. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64488 + 0x20))(DAT_140c64488, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402076c0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64e88 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"HousingResource"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c650a8 != 0) {
                iVar2 = _DAT_140c64858;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingResource_140a73d60;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\HousingResource.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingResource_140a73d60;
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
                plVar3[3] = (longlong) & PTR_u_HousingResource_140a73d60;
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
        DAT_140c64e88 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c6542c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402078d0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402078f2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_HousingResource_140a6aa28, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6542c == 0) {
        iVar1 = FUN_1402076c0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020791c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64e88 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140207980(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402079a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_HousingResource_140a6aa28, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6542c == 0) {
        iVar1 = FUN_1402076c0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402079d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64e88 + 0x20))(DAT_140c64e88, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140207b00(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63e68 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"HousingWallpaperInfo"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64850 != 0) {
                iVar2 = _DAT_140c6403c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingWallpaperInfo_140ad1c68;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\HousingWallpaperInfo.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingWallpaperInfo_140ad1c68;
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
                plVar3[3] = (longlong) & PTR_u_HousingWallpaperInfo_140ad1c68;
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
        DAT_140c63e68 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63a64 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140207d10(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140207d32. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_HousingWallpaperInfo_140a6aa60, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63a64 == 0) {
        iVar1 = FUN_140207b00();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140207d5c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63e68 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140207d60(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140207d89. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_HousingWallpaperInfo_140a6aa60, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63a64 == 0) {
        iVar1 = FUN_140207b00();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140207db7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63e68 + 0x18))(DAT_140c63e68, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140207dc0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140207de9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_HousingWallpaperInfo_140a6aa60, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63a64 == 0) {
        iVar1 = FUN_140207b00();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140207e17. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63e68 + 0x20))(DAT_140c63e68, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140207f40(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64a00 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"HousingWarplotPlugInfo"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63984 != 0) {
                iVar2 = _DAT_140c63d40;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingWarplotPlugInfo_140ad1d88;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\HousingWarplotPlugInfo.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingWarplotPlugInfo_140ad1d88;
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
                plVar3[3] = (longlong) & PTR_u_HousingWarplotPlugInfo_140ad1d88;
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
        DAT_140c64a00 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64a48 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140208150(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140208172. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_HousingWarplotPlugInfo_140a6aa98, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64a48 == 0) {
        iVar1 = FUN_140207f40();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020819c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64a00 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402081a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402081c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_HousingWarplotPlugInfo_140a6aa98, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64a48 == 0) {
        iVar1 = FUN_140207f40();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402081f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64a00 + 0x18))(DAT_140c64a00, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140208200(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140208229. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_HousingWarplotPlugInfo_140a6aa98, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64a48 == 0) {
        iVar1 = FUN_140207f40();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140208257. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64a00 + 0x20))(DAT_140c64a00, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140208380(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c638d8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"HousingWarplotBossToken"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c651fc != 0) {
                iVar2 = _DAT_140c6557c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingWarplotBossToken_140a64a48;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\HousingWarplotBossToken.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_HousingWarplotBossToken_140a64a48;
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
                plVar3[3] = (longlong) & PTR_u_HousingWarplotBossToken_140a64a48;
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
        DAT_140c638d8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65488 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140208590(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402085b2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_HousingWarplotBossToken_140a6aad0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65488 == 0) {
        iVar1 = FUN_140208380();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402085dc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c638d8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402085e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140208609. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_HousingWarplotBossToken_140a6aad0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65488 == 0) {
        iVar1 = FUN_140208380();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140208637. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c638d8 + 0x18))(DAT_140c638d8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140208640(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140208669. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_HousingWarplotBossToken_140a6aad0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65488 == 0) {
        iVar1 = FUN_140208380();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140208697. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c638d8 + 0x20))(DAT_140c638d8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402087c0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64350 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"InputAction"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65578 != 0) {
                iVar2 = _DAT_140c65248;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_InputAction_140acfcc8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\InputAction.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_InputAction_140acfcc8;
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
                plVar3[3] = (longlong) & PTR_u_InputAction_140acfcc8;
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
        DAT_140c64350 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64954 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402089d0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402089f2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_InputAction_140a6ab08, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64954 == 0) {
        iVar1 = FUN_1402087c0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140208a1c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64350 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140208a20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140208a49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_InputAction_140a6ab08, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64954 == 0) {
        iVar1 = FUN_1402087c0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140208a77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64350 + 0x18))(DAT_140c64350, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140208a80(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140208aa9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_InputAction_140a6ab08, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64954 == 0) {
        iVar1 = FUN_1402087c0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140208ad7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64350 + 0x20))(DAT_140c64350, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140208c00(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c644f8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"InputActionCategory"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c655c4 != 0) {
                iVar2 = _DAT_140c64404;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_InputActionCategory_140ad0a30;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\InputActionCategory.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_InputActionCategory_140ad0a30;
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
                plVar3[3] = (longlong) & PTR_u_InputActionCategory_140ad0a30;
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
        DAT_140c644f8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c639ac = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140208e10(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140208e32. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_InputActionCategory_140a6ab40, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c639ac == 0) {
        iVar1 = FUN_140208c00();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140208e5c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c644f8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140208ec0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140208ee9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_InputActionCategory_140a6ab40, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c639ac == 0) {
        iVar1 = FUN_140208c00();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140208f17. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c644f8 + 0x20))(DAT_140c644f8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140209040(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63ca0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"InstancePortal"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64678 != 0) {
                iVar2 = _DAT_140c643b8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_InstancePortal_140a80340;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\InstancePortal.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_InstancePortal_140a80340;
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
                plVar3[3] = (longlong) & PTR_u_InstancePortal_140a80340;
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
        DAT_140c63ca0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c643a8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140209250(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140209272. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_InstancePortal_140a6ab78, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c643a8 == 0) {
        iVar1 = FUN_140209040();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020929c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63ca0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402092a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402092c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_InstancePortal_140a6ab78, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c643a8 == 0) {
        iVar1 = FUN_140209040();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402092f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63ca0 + 0x18))(DAT_140c63ca0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140209300(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140209329. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_InstancePortal_140a6ab78, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c643a8 == 0) {
        iVar1 = FUN_140209040();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140209357. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63ca0 + 0x20))(DAT_140c63ca0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140209480(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c640e8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"Item2"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64c14 != 0) {
                iVar2 = _DAT_140c63bb8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Item2_140adb218;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Item2.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Item2_140adb218;
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
                plVar3[3] = (longlong) & PTR_u_Item2_140adb218;
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
        DAT_140c640e8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    DAT_140c649fc = 0;
    return 0;
}


undefined8 FUN_140209690(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402096b2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Item2_140a6abb0, DAT_140c63858);
        return uVar2;
    }
    if (DAT_140c649fc == 0) {
        iVar1 = FUN_140209480();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402096dc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c640e8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}


undefined8 FUN_1402096e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140209709. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Item2_140a6abb0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (DAT_140c649fc == 0) {
        iVar1 = FUN_140209480();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140209737. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c640e8 + 0x18))(DAT_140c640e8, param_1);
            return uVar2;
        }
    }
    return 0;
}


undefined8 FUN_140209740(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140209769. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Item2_140a6abb0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (DAT_140c649fc == 0) {
        iVar1 = FUN_140209480();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140209797. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c640e8 + 0x20))(DAT_140c640e8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402098c0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64e00 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"Item2Category"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c6505c != 0) {
                iVar2 = _DAT_140c64f28;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Item2Category_140acd118;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Item2Category.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Item2Category_140acd118;
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
                plVar3[3] = (longlong) & PTR_u_Item2Category_140acd118;
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
        DAT_140c64e00 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63eb4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140209ad0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140209af2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Item2Category_140a6abe8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63eb4 == 0) {
        iVar1 = FUN_1402098c0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140209b1c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64e00 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140209b20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140209b49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Item2Category_140a6abe8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63eb4 == 0) {
        iVar1 = FUN_1402098c0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140209b77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64e00 + 0x18))(DAT_140c64e00, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140209b80(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140209ba9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Item2Category_140a6abe8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63eb4 == 0) {
        iVar1 = FUN_1402098c0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140209bd7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64e00 + 0x20))(DAT_140c64e00, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140209d00(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65060 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"Item2Family"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c639c4 != 0) {
                iVar2 = _DAT_140c6547c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Item2Family_140addea8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Item2Family.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Item2Family_140addea8;
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
                plVar3[3] = (longlong) & PTR_u_Item2Family_140addea8;
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
        DAT_140c65060 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63a54 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140209f10(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140209f32. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Item2Family_140a6ac20, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63a54 == 0) {
        iVar1 = FUN_140209d00();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140209f5c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65060 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140209f60(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140209f89. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Item2Family_140a6ac20, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63a54 == 0) {
        iVar1 = FUN_140209d00();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140209fb7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65060 + 0x18))(DAT_140c65060, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140209fc0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140209fe9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Item2Family_140a6ac20, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63a54 == 0) {
        iVar1 = FUN_140209d00();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020a017. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65060 + 0x20))(DAT_140c65060, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14020a140(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64ac8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"Item2Type"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65154 != 0) {
                iVar2 = _DAT_140c64ab4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Item2Type_140ad1490;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Item2Type.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Item2Type_140ad1490;
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
                plVar3[3] = (longlong) & PTR_u_Item2Type_140ad1490;
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
        DAT_140c64ac8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c650d4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020a350(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020a372. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Item2Type_140a6ac58, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c650d4 == 0) {
        iVar1 = FUN_14020a140();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020a39c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64ac8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020a3a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020a3c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Item2Type_140a6ac58, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c650d4 == 0) {
        iVar1 = FUN_14020a140();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020a3f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64ac8 + 0x18))(DAT_140c64ac8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020a400(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020a429. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Item2Type_140a6ac58, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c650d4 == 0) {
        iVar1 = FUN_14020a140();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020a457. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64ac8 + 0x20))(DAT_140c64ac8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14020a580(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c644b0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"ItemBudget"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c638cc != 0) {
                iVar2 = _DAT_140c64234;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemBudget_140a86ca0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ItemBudget.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemBudget_140a86ca0;
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
                plVar3[3] = (longlong) & PTR_u_ItemBudget_140a86ca0;
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
        DAT_140c644b0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c639d8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020a790(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020a7b2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ItemBudget_140a6ac90, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c639d8 == 0) {
        iVar1 = FUN_14020a580();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020a7dc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c644b0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020a7e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020a809. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_ItemBudget_140a6ac90, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c639d8 == 0) {
        iVar1 = FUN_14020a580();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020a837. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c644b0 + 0x18))(DAT_140c644b0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020a840(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020a869. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ItemBudget_140a6ac90, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c639d8 == 0) {
        iVar1 = FUN_14020a580();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020a897. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c644b0 + 0x20))(DAT_140c644b0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14020a9c0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63fd0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"ItemStat"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63d1c != 0) {
                iVar2 = _DAT_140c652b8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemStat_140a87818;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ItemStat.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemStat_140a87818;
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
                plVar3[3] = (longlong) & PTR_u_ItemStat_140a87818;
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
        DAT_140c63fd0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65004 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020abd0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020abf2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ItemStat_140a6acc8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65004 == 0) {
        iVar1 = FUN_14020a9c0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020ac1c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63fd0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020ac20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020ac49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_ItemStat_140a6acc8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65004 == 0) {
        iVar1 = FUN_14020a9c0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020ac77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63fd0 + 0x18))(DAT_140c63fd0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020ac80(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020aca9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ItemStat_140a6acc8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65004 == 0) {
        iVar1 = FUN_14020a9c0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020acd7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63fd0 + 0x20))(DAT_140c63fd0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14020ae00(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65168 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"ItemImbuement"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65144 != 0) {
                iVar2 = _DAT_140c64870;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemImbuement_140a7ea48;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ItemImbuement.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemImbuement_140a7ea48;
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
                plVar3[3] = (longlong) & PTR_u_ItemImbuement_140a7ea48;
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
        DAT_140c65168 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c638c8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020b010(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020b032. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ItemImbuement_140a6ad00, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c638c8 == 0) {
        iVar1 = FUN_14020ae00();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020b05c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65168 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020b060(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020b089. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_ItemImbuement_140a6ad00, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c638c8 == 0) {
        iVar1 = FUN_14020ae00();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020b0b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65168 + 0x18))(DAT_140c65168, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020b0c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020b0e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ItemImbuement_140a6ad00, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c638c8 == 0) {
        iVar1 = FUN_14020ae00();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020b117. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65168 + 0x20))(DAT_140c65168, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14020b240(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c644d8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"ItemImbuementReward"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64248 != 0) {
                iVar2 = _DAT_140c64734;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemImbuementReward_140a77b98;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ItemImbuementReward.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemImbuementReward_140a77b98;
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
                plVar3[3] = (longlong) & PTR_u_ItemImbuementReward_140a77b98;
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
        DAT_140c644d8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c6480c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020b450(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020b472. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ItemImbuementReward_140a6ad38, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6480c == 0) {
        iVar1 = FUN_14020b240();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020b49c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c644d8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020b500(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020b529. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ItemImbuementReward_140a6ad38, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6480c == 0) {
        iVar1 = FUN_14020b240();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020b557. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c644d8 + 0x20))(DAT_140c644d8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14020b680(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64ba8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"ItemColorSet"), iVar2 == 0)
                ) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63f9c != 0) {
                iVar2 = _DAT_140c64818;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemColorSet_140a5ef88;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ItemColorSet.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemColorSet_140a5ef88;
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
                plVar3[3] = (longlong) & PTR_u_ItemColorSet_140a5ef88;
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
        DAT_140c64ba8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63da4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020b890(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020b8b2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ItemColorSet_140a6ad70, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63da4 == 0) {
        iVar1 = FUN_14020b680();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020b8dc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64ba8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020b8e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020b909. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_ItemColorSet_140a6ad70, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63da4 == 0) {
        iVar1 = FUN_14020b680();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020b937. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64ba8 + 0x18))(DAT_140c64ba8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020b940(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020b969. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ItemColorSet_140a6ad70, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63da4 == 0) {
        iVar1 = FUN_14020b680();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020b997. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64ba8 + 0x20))(DAT_140c64ba8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14020bac0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c654e8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"ItemDisplay"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c641ec != 0) {
                iVar2 = _DAT_140c655cc;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemDisplay_140acd150;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ItemDisplay.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemDisplay_140acd150;
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
                plVar3[3] = (longlong) & PTR_u_ItemDisplay_140acd150;
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
        DAT_140c654e8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64f64 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020bcd0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020bcf2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ItemDisplay_140a6ada8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64f64 == 0) {
        iVar1 = FUN_14020bac0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020bd1c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c654e8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020bd20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020bd49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_ItemDisplay_140a6ada8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64f64 == 0) {
        iVar1 = FUN_14020bac0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020bd77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c654e8 + 0x18))(DAT_140c654e8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020bd80(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020bda9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ItemDisplay_140a6ada8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64f64 == 0) {
        iVar1 = FUN_14020bac0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020bdd7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c654e8 + 0x20))(DAT_140c654e8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14020bf00(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65498 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"ItemProficiency"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c6457c != 0) {
                iVar2 = _DAT_140c64428;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemProficiency_140acdeb8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ItemProficiency.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemProficiency_140acdeb8;
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
                plVar3[3] = (longlong) & PTR_u_ItemProficiency_140acdeb8;
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
        DAT_140c65498 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64590 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020c110(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020c132. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ItemProficiency_140a6ade0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64590 == 0) {
        iVar1 = FUN_14020bf00();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020c15c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65498 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020c160(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020c189. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_ItemProficiency_140a6ade0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64590 == 0) {
        iVar1 = FUN_14020bf00();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020c1b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65498 + 0x18))(DAT_140c65498, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020c1c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020c1e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ItemProficiency_140a6ade0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64590 == 0) {
        iVar1 = FUN_14020bf00();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020c217. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65498 + 0x20))(DAT_140c65498, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14020c340(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c653b8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"ItemRandomStat"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65244 != 0) {
                iVar2 = _DAT_140c6449c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemRandomStat_140ae3080;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ItemRandomStat.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemRandomStat_140ae3080;
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
                plVar3[3] = (longlong) & PTR_u_ItemRandomStat_140ae3080;
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
        DAT_140c653b8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63f8c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020c550(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020c572. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ItemRandomStat_140a6ae18, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63f8c == 0) {
        iVar1 = FUN_14020c340();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020c59c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c653b8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020c600(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020c629. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ItemRandomStat_140a6ae18, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63f8c == 0) {
        iVar1 = FUN_14020c340();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020c657. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c653b8 + 0x20))(DAT_140c653b8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14020c780(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63f00 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"ItemRandomStatGroup"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63f98 != 0) {
                iVar2 = _DAT_140c640f4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemRandomStatGroup_140acdcf8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ItemRandomStatGroup.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemRandomStatGroup_140acdcf8;
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
                plVar3[3] = (longlong) & PTR_u_ItemRandomStatGroup_140acdcf8;
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
        DAT_140c63f00 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64868 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020c990(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020c9b2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ItemRandomStatGroup_140a6ae50, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64868 == 0) {
        iVar1 = FUN_14020c780();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020c9dc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63f00 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020c9e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020ca09. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_ItemRandomStatGroup_140a6ae50, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64868 == 0) {
        iVar1 = FUN_14020c780();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020ca37. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63f00 + 0x18))(DAT_140c63f00, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020ca40(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020ca69. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ItemRandomStatGroup_140a6ae50, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64868 == 0) {
        iVar1 = FUN_14020c780();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020ca97. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63f00 + 0x20))(DAT_140c63f00, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14020cbc0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63d38 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"ItemQuality"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64ca0 != 0) {
                iVar2 = _DAT_140c64294;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemQuality_140adb4c8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ItemQuality.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemQuality_140adb4c8;
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
                plVar3[3] = (longlong) & PTR_u_ItemQuality_140adb4c8;
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
        DAT_140c63d38 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64f20 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020cdd0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020cdf2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ItemQuality_140a6ae88, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64f20 == 0) {
        iVar1 = FUN_14020cbc0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020ce1c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63d38 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020ce20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020ce49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_ItemQuality_140a6ae88, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64f20 == 0) {
        iVar1 = FUN_14020cbc0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020ce77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63d38 + 0x18))(DAT_140c63d38, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020ce80(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020cea9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ItemQuality_140a6ae88, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64f20 == 0) {
        iVar1 = FUN_14020cbc0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020ced7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63d38 + 0x20))(DAT_140c63d38, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14020d000(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64608 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"ItemSet"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c642d0 != 0) {
                iVar2 = _DAT_140c64250;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemSet_140a5cc78;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ItemSet.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemSet_140a5cc78;
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
                plVar3[3] = (longlong) & PTR_u_ItemSet_140a5cc78;
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
        DAT_140c64608 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63f84 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020d210(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020d232. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ItemSet_140a6aec0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63f84 == 0) {
        iVar1 = FUN_14020d000();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020d25c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64608 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020d260(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020d289. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_ItemSet_140a6aec0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63f84 == 0) {
        iVar1 = FUN_14020d000();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020d2b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64608 + 0x18))(DAT_140c64608, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020d2c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020d2e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ItemSet_140a6aec0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63f84 == 0) {
        iVar1 = FUN_14020d000();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020d317. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64608 + 0x20))(DAT_140c64608, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14020d440(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65560 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"ItemSetBonus"), iVar2 == 0)
                ) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c640fc != 0) {
                iVar2 = _DAT_140c6508c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemSetBonus_140a5c648;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ItemSetBonus.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemSetBonus_140a5c648;
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
                plVar3[3] = (longlong) & PTR_u_ItemSetBonus_140a5c648;
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
        DAT_140c65560 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c655c0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020d650(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020d672. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ItemSetBonus_140a6aef8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c655c0 == 0) {
        iVar1 = FUN_14020d440();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020d69c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65560 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020d700(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020d729. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ItemSetBonus_140a6aef8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c655c0 == 0) {
        iVar1 = FUN_14020d440();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020d757. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65560 + 0x20))(DAT_140c65560, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14020d880(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63a68 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"ItemDisplaySourceEntry"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63fb4 != 0) {
                iVar2 = _DAT_140c63c50;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemDisplaySourceEntry_140ad3368;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ItemDisplaySourceEntry.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemDisplaySourceEntry_140ad3368;
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
                plVar3[3] = (longlong) & PTR_u_ItemDisplaySourceEntry_140ad3368;
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
        DAT_140c63a68 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63aac = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020da90(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020dab2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ItemDisplaySourceEntry_140a6af30, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63aac == 0) {
        iVar1 = FUN_14020d880();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020dadc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63a68 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020db40(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020db69. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ItemDisplaySourceEntry_140a6af30, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63aac == 0) {
        iVar1 = FUN_14020d880();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020db97. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63a68 + 0x20))(DAT_140c63a68, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14020dcc0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63e18 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"ItemRuneInstance"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63e74 != 0) {
                iVar2 = _DAT_140c65354;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemRuneInstance_140ace878;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ItemRuneInstance.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemRuneInstance_140ace878;
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
                plVar3[3] = (longlong) & PTR_u_ItemRuneInstance_140ace878;
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
        DAT_140c63e18 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c655a0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020ded0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020def2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ItemRuneInstance_140a6af68, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c655a0 == 0) {
        iVar1 = FUN_14020dcc0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020df1c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63e18 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020df20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020df49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_ItemRuneInstance_140a6af68, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c655a0 == 0) {
        iVar1 = FUN_14020dcc0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020df77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63e18 + 0x18))(DAT_140c63e18, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020df80(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020dfa9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ItemRuneInstance_140a6af68, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c655a0 == 0) {
        iVar1 = FUN_14020dcc0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020dfd7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63e18 + 0x20))(DAT_140c63e18, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14020e100(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65040 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"ItemRuneSlotRandomization"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c639ec != 0) {
                iVar2 = _DAT_140c63d44;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemRuneSlotRandomization_140a632a0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ItemRuneSlotRandomization.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemRuneSlotRandomization_140a632a0;
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
                plVar3[3] = (longlong) & PTR_u_ItemRuneSlotRandomization_140a632a0;
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
        DAT_140c65040 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63bec = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020e310(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020e332. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ItemRuneSlotRandomization_140a6afa0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63bec == 0) {
        iVar1 = FUN_14020e100();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020e35c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65040 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020e3c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020e3e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ItemRuneSlotRandomization_140a6afa0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63bec == 0) {
        iVar1 = FUN_14020e100();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020e417. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65040 + 0x20))(DAT_140c65040, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14020e540(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c648e8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"ItemSlot"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64ad4 != 0) {
                iVar2 = _DAT_140c647e0;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemSlot_140a5a0b8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ItemSlot.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemSlot_140a5a0b8;
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
                plVar3[3] = (longlong) & PTR_u_ItemSlot_140a5a0b8;
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
        DAT_140c648e8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c6559c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020e750(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020e772. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ItemSlot_140a6afd8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6559c == 0) {
        iVar1 = FUN_14020e540();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020e79c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c648e8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020e7a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020e7c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_ItemSlot_140a6afd8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6559c == 0) {
        iVar1 = FUN_14020e540();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020e7f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c648e8 + 0x18))(DAT_140c648e8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020e800(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020e829. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ItemSlot_140a6afd8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6559c == 0) {
        iVar1 = FUN_14020e540();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020e857. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c648e8 + 0x20))(DAT_140c648e8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14020e980(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64298 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"ItemSpecial"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65450 != 0) {
                iVar2 = _DAT_140c654b8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemSpecial_140a78e20;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ItemSpecial.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ItemSpecial_140a78e20;
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
                plVar3[3] = (longlong) & PTR_u_ItemSpecial_140a78e20;
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
        DAT_140c64298 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64b2c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020eb90(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020ebb2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ItemSpecial_140a6b010, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64b2c == 0) {
        iVar1 = FUN_14020e980();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020ebdc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64298 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020ebe0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020ec09. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_ItemSpecial_140a6b010, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64b2c == 0) {
        iVar1 = FUN_14020e980();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020ec37. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64298 + 0x18))(DAT_140c64298, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020ec40(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020ec69. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ItemSpecial_140a6b010, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64b2c == 0) {
        iVar1 = FUN_14020e980();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020ec97. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64298 + 0x20))(DAT_140c64298, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14020edc0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64598 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"LevelDifferentialAttribute"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c641d8 != 0) {
                iVar2 = _DAT_140c6512c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_LevelDifferentialAttribute_140ad55a0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\LevelDifferentialAttribute.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_LevelDifferentialAttribute_140ad55a0;
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
                plVar3[3] = (longlong) & PTR_u_LevelDifferentialAttribute_140ad55a0;
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
        DAT_140c64598 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63c40 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020efd0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020eff2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_LevelDifferentialAttribute_140a6b048, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63c40 == 0) {
        iVar1 = FUN_14020edc0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020f01c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64598 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020f080(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020f0a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_LevelDifferentialAttribute_140a6b048, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63c40 == 0) {
        iVar1 = FUN_14020edc0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020f0d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64598 + 0x20))(DAT_140c64598, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14020f200(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c640b8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"LevelUpUnlock"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63bbc != 0) {
                iVar2 = _DAT_140c64700;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_LevelUpUnlock_140a68228;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\LevelUpUnlock.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_LevelUpUnlock_140a68228;
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
                plVar3[3] = (longlong) & PTR_u_LevelUpUnlock_140a68228;
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
        DAT_140c640b8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64784 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020f410(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020f432. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_LevelUpUnlock_140a6b080, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64784 == 0) {
        iVar1 = FUN_14020f200();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020f45c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c640b8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020f4c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020f4e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_LevelUpUnlock_140a6b080, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64784 == 0) {
        iVar1 = FUN_14020f200();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020f517. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c640b8 + 0x20))(DAT_140c640b8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14020f520(void) {
    if (DAT_140c63850 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020f542. Too many branches
        // WARNING: Treating indirect jump as call
        (*DAT_140c63850)(&PTR_u_LevelUpUnlock_140a6b080, DAT_140c63858);
        return;
    }
    if (_DAT_140c64784 == 0) {
        _DAT_140c64784 = 1;
        if (DAT_140c640b8 != (longlong *) 0x0) {
            (**(code * *)(*DAT_140c640b8 + 8))();
            DAT_140c640b8 = (longlong *) 0x0;
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14020f6a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c646f8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"LevelUpUnlockType"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63db0 != 0) {
                iVar2 = _DAT_140c649e8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_LevelUpUnlockType_140ad58d0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\LevelUpUnlockType.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_LevelUpUnlockType_140ad58d0;
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
                plVar3[3] = (longlong) & PTR_u_LevelUpUnlockType_140ad58d0;
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
        DAT_140c646f8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63cd4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020f8b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020f8d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_LevelUpUnlockType_140a6b0b8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63cd4 == 0) {
        iVar1 = FUN_14020f6a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020f8fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c646f8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020f900(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020f929. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_LevelUpUnlockType_140a6b0b8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63cd4 == 0) {
        iVar1 = FUN_14020f6a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020f957. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c646f8 + 0x18))(DAT_140c646f8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020f960(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020f989. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_LevelUpUnlockType_140a6b0b8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63cd4 == 0) {
        iVar1 = FUN_14020f6a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020f9b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c646f8 + 0x20))(DAT_140c646f8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14020fae0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63c10 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"LiveEvent"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63954 != 0) {
                iVar2 = _DAT_140c64124;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_LiveEvent_140a80308;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\LiveEvent.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_LiveEvent_140a80308;
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
                plVar3[3] = (longlong) & PTR_u_LiveEvent_140a80308;
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
        DAT_140c63c10 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64fbc = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020fcf0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020fd12. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_LiveEvent_140a6b0f0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64fbc == 0) {
        iVar1 = FUN_14020fae0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020fd3c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63c10 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020fd40(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020fd69. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_LiveEvent_140a6b0f0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64fbc == 0) {
        iVar1 = FUN_14020fae0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020fd97. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63c10 + 0x18))(DAT_140c63c10, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14020fda0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014020fdc9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_LiveEvent_140a6b0f0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64fbc == 0) {
        iVar1 = FUN_14020fae0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014020fdf7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63c10 + 0x20))(DAT_140c63c10, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14020ff20(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64550 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"LiveEventDisplayItem"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c651d8 != 0) {
                iVar2 = _DAT_140c650c4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_LiveEventDisplayItem_140ad6f58;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\LiveEventDisplayItem.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_LiveEventDisplayItem_140ad6f58;
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
                plVar3[3] = (longlong) & PTR_u_LiveEventDisplayItem_140ad6f58;
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
        DAT_140c64550 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64c54 = 0;
    return 0;
}

