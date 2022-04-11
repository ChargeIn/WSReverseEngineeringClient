//
// Created by flop on 04.04.22.
//
#include "../../include.h"

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140223bb0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140223bd2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathSoldierEvent_140a6c158, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63a10 == 0) {
        iVar1 = FUN_1402239a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140223bfc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c652d8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140223c60(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140223c89. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathSoldierEvent_140a6c158, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63a10 == 0) {
        iVar1 = FUN_1402239a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140223cb7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c652d8 + 0x20))(DAT_140c652d8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140223de0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64548 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PathSoldierEventWave"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63a40 != 0) {
                iVar2 = _DAT_140c643ac;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathSoldierEventWave_140a74a70;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathSoldierEventWave.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathSoldierEventWave_140a74a70;
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
                plVar3[3] = (longlong) & PTR_u_PathSoldierEventWave_140a74a70;
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
        DAT_140c64548 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c648d8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140223ff0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140224012. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathSoldierEventWave_140a6c190, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c648d8 == 0) {
        iVar1 = FUN_140223de0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022403c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64548 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402240a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402240c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathSoldierEventWave_140a6c190, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c648d8 == 0) {
        iVar1 = FUN_140223de0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402240f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64548 + 0x20))(DAT_140c64548, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140224220(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c647f0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PathSoldierSWAT"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64a30 != 0) {
                iVar2 = _DAT_140c65290;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathSoldierSWAT_140adc1a0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathSoldierSWAT.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathSoldierSWAT_140adc1a0;
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
                plVar3[3] = (longlong) & PTR_u_PathSoldierSWAT_140adc1a0;
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
        DAT_140c647f0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63e5c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140224430(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140224452. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathSoldierSWAT_140a6c1c8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63e5c == 0) {
        iVar1 = FUN_140224220();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022447c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c647f0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140224480(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402244a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PathSoldierSWAT_140a6c1c8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63e5c == 0) {
        iVar1 = FUN_140224220();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402244d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c647f0 + 0x18))(DAT_140c647f0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402244e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140224509. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathSoldierSWAT_140a6c1c8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63e5c == 0) {
        iVar1 = FUN_140224220();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140224537. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c647f0 + 0x20))(DAT_140c647f0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// int FUN_140224660(void)
int PathSoldierTowerDefenseHandler(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63b28 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PathSoldierTowerDefense"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c6530c != 0) {
                iVar2 = _DAT_140c6409c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathSoldierTowerDefense_140a655c8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PathSoldierTowerDefense.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PathSoldierTowerDefense_140a655c8;
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
                plVar3[3] = (longlong) & PTR_u_PathSoldierTowerDefense_140a655c8;
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
        DAT_140c63b28 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64284 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140224870(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140224892. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PathSoldierTowerDefense_140a6c200, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64284 == 0) {
        iVar1 = PathSoldierTowerDefenseHandler();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402248bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63b28 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140224920(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140224949. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PathSoldierTowerDefense_140a6c200, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64284 == 0) {
        iVar1 = PathSoldierTowerDefenseHandler();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140224977. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63b28 + 0x20))(DAT_140c63b28, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140224aa0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64a38 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"PetFlair"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64168 != 0) {
                iVar2 = _DAT_140c64e44;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PetFlair_140a64c60;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PetFlair.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PetFlair_140a64c60;
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
                plVar3[3] = (longlong) & PTR_u_PetFlair_140a64c60;
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
        DAT_140c64a38 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65364 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140224cb0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140224cd2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PetFlair_140a6c238, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65364 == 0) {
        iVar1 = FUN_140224aa0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140224cfc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64a38 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140224d00(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140224d29. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PetFlair_140a6c238, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65364 == 0) {
        iVar1 = FUN_140224aa0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140224d57. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64a38 + 0x18))(DAT_140c64a38, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140224d60(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140224d89. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PetFlair_140a6c238, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65364 == 0) {
        iVar1 = FUN_140224aa0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140224db7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64a38 + 0x20))(DAT_140c64a38, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140224ee0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64528 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PlayerNotificationType"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c6486c != 0) {
                iVar2 = _DAT_140c64df8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PlayerNotificationType_140ad73d0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PlayerNotificationType.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PlayerNotificationType_140ad73d0;
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
                plVar3[3] = (longlong) & PTR_u_PlayerNotificationType_140ad73d0;
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
        DAT_140c64528 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64618 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402250f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140225112. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PlayerNotificationType_140a6c270, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64618 == 0) {
        iVar1 = FUN_140224ee0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022513c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64528 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140225140(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140225169. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PlayerNotificationType_140a6c270, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64618 == 0) {
        iVar1 = FUN_140224ee0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140225197. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64528 + 0x18))(DAT_140c64528, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402251a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402251c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PlayerNotificationType_140a6c270, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64618 == 0) {
        iVar1 = FUN_140224ee0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402251f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64528 + 0x20))(DAT_140c64528, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140225320(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64200 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PositionalRequirement"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64384 != 0) {
                iVar2 = _DAT_140c64054;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PositionalRequirement_140a5b5e0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PositionalRequirement.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PositionalRequirement_140a5b5e0;
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
                plVar3[3] = (longlong) & PTR_u_PositionalRequirement_140a5b5e0;
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
        DAT_140c64200 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c646b8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140225530(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140225552. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PositionalRequirement_140a6c2a8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c646b8 == 0) {
        iVar1 = FUN_140225320();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022557c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64200 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140225580(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402255a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PositionalRequirement_140a6c2a8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c646b8 == 0) {
        iVar1 = FUN_140225320();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402255d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64200 + 0x18))(DAT_140c64200, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402255e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140225609. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PositionalRequirement_140a6c2a8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c646b8 == 0) {
        iVar1 = FUN_140225320();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140225637. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64200 + 0x20))(DAT_140c64200, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140225760(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64208 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"Prerequisite"), iVar2 == 0)
                ) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64fcc != 0) {
                iVar2 = _DAT_140c64444;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Prerequisite_140ad14c8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Prerequisite.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Prerequisite_140ad14c8;
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
                plVar3[3] = (longlong) & PTR_u_Prerequisite_140ad14c8;
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
        DAT_140c64208 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c647d0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140225970(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140225992. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Prerequisite_140a6c2e0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c647d0 == 0) {
        iVar1 = FUN_140225760();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402259bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64208 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402259c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402259e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Prerequisite_140a6c2e0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c647d0 == 0) {
        iVar1 = FUN_140225760();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140225a17. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64208 + 0x18))(DAT_140c64208, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140225a20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140225a49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Prerequisite_140a6c2e0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c647d0 == 0) {
        iVar1 = FUN_140225760();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140225a77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64208 + 0x20))(DAT_140c64208, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140225ba0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64758 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PrerequisiteType"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63ff8 != 0) {
                iVar2 = _DAT_140c6563c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PrerequisiteType_140a66a60;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PrerequisiteType.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PrerequisiteType_140a66a60;
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
                plVar3[3] = (longlong) & PTR_u_PrerequisiteType_140a66a60;
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
        DAT_140c64758 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64f10 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140225db0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140225dd2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PrerequisiteType_140a6c318, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64f10 == 0) {
        iVar1 = FUN_140225ba0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140225dfc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64758 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140225e00(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140225e29. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PrerequisiteType_140a6c318, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64f10 == 0) {
        iVar1 = FUN_140225ba0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140225e57. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64758 + 0x18))(DAT_140c64758, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140225e60(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140225e89. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PrerequisiteType_140a6c318, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64f10 == 0) {
        iVar1 = FUN_140225ba0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140225eb7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64758 + 0x20))(DAT_140c64758, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140225fe0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65078 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PrimalMatrixReward"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65084 != 0) {
                iVar2 = _DAT_140c652c0;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PrimalMatrixReward_140a72f18;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PrimalMatrixReward.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PrimalMatrixReward_140a72f18;
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
                plVar3[3] = (longlong) & PTR_u_PrimalMatrixReward_140a72f18;
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
        DAT_140c65078 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64fc4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402261f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140226212. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PrimalMatrixReward_140a6c350, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64fc4 == 0) {
        iVar1 = FUN_140225fe0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022623c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65078 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140226240(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140226269. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PrimalMatrixReward_140a6c350, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64fc4 == 0) {
        iVar1 = FUN_140225fe0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140226297. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65078 + 0x18))(DAT_140c65078, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402262a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402262c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PrimalMatrixReward_140a6c350, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64fc4 == 0) {
        iVar1 = FUN_140225fe0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402262f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65078 + 0x20))(DAT_140c65078, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140226420(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64ad8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PrimalMatrixNode"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c654bc != 0) {
                iVar2 = _DAT_140c64560;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PrimalMatrixNode_140a6f0a8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PrimalMatrixNode.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PrimalMatrixNode_140a6f0a8;
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
                plVar3[3] = (longlong) & PTR_u_PrimalMatrixNode_140a6f0a8;
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
        DAT_140c64ad8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65280 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140226630(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140226652. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PrimalMatrixNode_140a6c388, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65280 == 0) {
        iVar1 = FUN_140226420();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022667c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64ad8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402266e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140226709. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PrimalMatrixNode_140a6c388, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65280 == 0) {
        iVar1 = FUN_140226420();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140226737. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64ad8 + 0x20))(DAT_140c64ad8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140226860(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63b90 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PropAdditionalDetail"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63b8c != 0) {
                iVar2 = _DAT_140c654b0;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PropAdditionalDetail_140a51f18;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PropAdditionalDetail.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PropAdditionalDetail_140a51f18;
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
                plVar3[3] = (longlong) & PTR_u_PropAdditionalDetail_140a51f18;
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
        DAT_140c63b90 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63df0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140226a70(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140226a92. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PropAdditionalDetail_140a6c3c0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63df0 == 0) {
        iVar1 = FUN_140226860();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140226abc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63b90 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140226ac0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140226ae9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PropAdditionalDetail_140a6c3c0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63df0 == 0) {
        iVar1 = FUN_140226860();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140226b17. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63b90 + 0x18))(DAT_140c63b90, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140226b20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140226b49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PropAdditionalDetail_140a6c3c0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63df0 == 0) {
        iVar1 = FUN_140226860();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140226b77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63b90 + 0x20))(DAT_140c63b90, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140226ca0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63be0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"PublicEvent"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c641fc != 0) {
                iVar2 = _DAT_140c641a8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PublicEvent_140acdcc0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PublicEvent.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PublicEvent_140acdcc0;
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
                plVar3[3] = (longlong) & PTR_u_PublicEvent_140acdcc0;
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
        DAT_140c63be0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63e2c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140226eb0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140226ed2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PublicEvent_140a6c3f8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63e2c == 0) {
        iVar1 = FUN_140226ca0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140226efc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63be0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140226f00(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140226f29. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PublicEvent_140a6c3f8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63e2c == 0) {
        iVar1 = FUN_140226ca0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140226f57. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63be0 + 0x18))(DAT_140c63be0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140226f60(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140226f89. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PublicEvent_140a6c3f8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63e2c == 0) {
        iVar1 = FUN_140226ca0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140226fb7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63be0 + 0x20))(DAT_140c63be0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402270e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64738 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PublicEventCustomStat"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63fa8 != 0) {
                iVar2 = _DAT_140c63e4c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PublicEventCustomStat_140ad8150;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PublicEventCustomStat.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PublicEventCustomStat_140ad8150;
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
                plVar3[3] = (longlong) & PTR_u_PublicEventCustomStat_140ad8150;
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
        DAT_140c64738 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63a84 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402272f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140227312. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PublicEventCustomStat_140a6c430, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63a84 == 0) {
        iVar1 = FUN_1402270e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022733c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64738 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402273a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402273c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PublicEventCustomStat_140a6c430, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63a84 == 0) {
        iVar1 = FUN_1402270e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402273f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64738 + 0x20))(DAT_140c64738, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140227520(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64600 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PublicEventStatDisplay"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64b90 != 0) {
                iVar2 = _DAT_140c648d4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PublicEventStatDisplay_140ad3468;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PublicEventStatDisplay.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PublicEventStatDisplay_140ad3468;
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
                plVar3[3] = (longlong) & PTR_u_PublicEventStatDisplay_140ad3468;
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
        DAT_140c64600 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64a4c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140227730(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140227752. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PublicEventStatDisplay_140a6c468, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64a4c == 0) {
        iVar1 = FUN_140227520();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022777c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64600 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402277e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140227809. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PublicEventStatDisplay_140a6c468, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64a4c == 0) {
        iVar1 = FUN_140227520();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140227837. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64600 + 0x20))(DAT_140c64600, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140227960(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64518 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PublicEventDepot"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63a60 != 0) {
                iVar2 = _DAT_140c6416c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PublicEventDepot_140a5c9e0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PublicEventDepot.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PublicEventDepot_140a5c9e0;
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
                plVar3[3] = (longlong) & PTR_u_PublicEventDepot_140a5c9e0;
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
        DAT_140c64518 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64d08 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140227b70(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140227b92. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PublicEventDepot_140a6c4a0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64d08 == 0) {
        iVar1 = FUN_140227960();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140227bbc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64518 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140227bc0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140227be9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PublicEventDepot_140a6c4a0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64d08 == 0) {
        iVar1 = FUN_140227960();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140227c17. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64518 + 0x18))(DAT_140c64518, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140227c20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140227c49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PublicEventDepot_140a6c4a0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64d08 == 0) {
        iVar1 = FUN_140227960();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140227c77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64518 + 0x20))(DAT_140c64518, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140227da0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64e48 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PublicEventVirtualItemDepot"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65638 != 0) {
                iVar2 = _DAT_140c655d4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PublicEventVirtualItemDepot_140ad02f8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PublicEventVirtualItemDepot.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PublicEventVirtualItemDepot_140ad02f8;
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
                plVar3[3] = (longlong) & PTR_u_PublicEventVirtualItemDepot_140ad02f8;
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
        DAT_140c64e48 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65324 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140227fb0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140227fd2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PublicEventVirtualItemDepot_140a6c4d8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65324 == 0) {
        iVar1 = FUN_140227da0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140227ffc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64e48 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140228000(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140228029. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PublicEventVirtualItemDepot_140a6c4d8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65324 == 0) {
        iVar1 = FUN_140227da0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140228057. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64e48 + 0x18))(DAT_140c64e48, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140228060(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140228089. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PublicEventVirtualItemDepot_140a6c4d8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65324 == 0) {
        iVar1 = FUN_140227da0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402280b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64e48 + 0x20))(DAT_140c64e48, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402281e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64890 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PublicEventObjective"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c6533c != 0) {
                iVar2 = _DAT_140c64b80;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PublicEventObjective_140acebc8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PublicEventObjective.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PublicEventObjective_140acebc8;
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
                plVar3[3] = (longlong) & PTR_u_PublicEventObjective_140acebc8;
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
        DAT_140c64890 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c638c4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402283f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140228412. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PublicEventObjective_140a6c510, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c638c4 == 0) {
        iVar1 = FUN_1402281e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022843c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64890 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402284a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402284c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PublicEventObjective_140a6c510, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c638c4 == 0) {
        iVar1 = FUN_1402281e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402284f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64890 + 0x20))(DAT_140c64890, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140228620(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64c68 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PublicEventObjectiveBombDeployment"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c638f4 != 0) {
                iVar2 = _DAT_140c64638;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PublicEventObjectiveBombDeployme_140acb548;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PublicEventObjectiveBombDeployment.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PublicEventObjectiveBombDeployme_140acb548;
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
                plVar3[3] = (longlong) & PTR_u_PublicEventObjectiveBombDeployme_140acb548;
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
        DAT_140c64c68 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c651a4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140228830(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140228852. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PublicEventObjectiveBombDeployme_140a6c548, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c651a4 == 0) {
        iVar1 = FUN_140228620();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022887c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64c68 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402288e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140228909. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PublicEventObjectiveBombDeployme_140a6c548, param_1, DAT_140c63858
        );
        return uVar2;
    }
    if (_DAT_140c651a4 == 0) {
        iVar1 = FUN_140228620();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140228937. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64c68 + 0x20))(DAT_140c64c68, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140228a60(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65378 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PublicEventObjectiveGatherResource"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c651ec != 0) {
                iVar2 = _DAT_140c63efc;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PublicEventObjectiveGatherResour_140a5ce78;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PublicEventObjectiveGatherResource.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PublicEventObjectiveGatherResour_140a5ce78;
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
                plVar3[3] = (longlong) & PTR_u_PublicEventObjectiveGatherResour_140a5ce78;
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
        DAT_140c65378 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c6470c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140228c70(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140228c92. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PublicEventObjectiveGatherResour_140a6c580, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6470c == 0) {
        iVar1 = FUN_140228a60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140228cbc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65378 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140228cc0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140228ce9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PublicEventObjectiveGatherResour_140a6c580, param_1, DAT_140c63858
        );
        return uVar2;
    }
    if (_DAT_140c6470c == 0) {
        iVar1 = FUN_140228a60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140228d17. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65378 + 0x18))(DAT_140c65378, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140228d20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140228d49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PublicEventObjectiveGatherResour_140a6c580, param_1, DAT_140c63858
        );
        return uVar2;
    }
    if (_DAT_140c6470c == 0) {
        iVar1 = FUN_140228a60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140228d77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65378 + 0x20))(DAT_140c65378, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140228ea0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64c98 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PublicEventObjectiveState"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64000 != 0) {
                iVar2 = _DAT_140c63bb4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PublicEventObjectiveState_140a635b0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PublicEventObjectiveState.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PublicEventObjectiveState_140a635b0;
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
                plVar3[3] = (longlong) & PTR_u_PublicEventObjectiveState_140a635b0;
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
        DAT_140c64c98 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63ddc = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402290b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402290d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PublicEventObjectiveState_140a6c5b8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63ddc == 0) {
        iVar1 = FUN_140228ea0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402290fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64c98 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140229100(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140229129. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PublicEventObjectiveState_140a6c5b8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63ddc == 0) {
        iVar1 = FUN_140228ea0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140229157. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64c98 + 0x18))(DAT_140c64c98, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140229160(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140229189. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PublicEventObjectiveState_140a6c5b8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63ddc == 0) {
        iVar1 = FUN_140228ea0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402291b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64c98 + 0x20))(DAT_140c64c98, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402292e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63888 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PublicEventTeam"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63ee0 != 0) {
                iVar2 = _DAT_140c64ec4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PublicEventTeam_140a64fd8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PublicEventTeam.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PublicEventTeam_140a64fd8;
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
                plVar3[3] = (longlong) & PTR_u_PublicEventTeam_140a64fd8;
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
        DAT_140c63888 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64bd8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402294f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140229512. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PublicEventTeam_140a6c5f0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64bd8 == 0) {
        iVar1 = FUN_1402292e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022953c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63888 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140229540(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140229569. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_PublicEventTeam_140a6c5f0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64bd8 == 0) {
        iVar1 = FUN_1402292e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140229597. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63888 + 0x18))(DAT_140c63888, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402295a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402295c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PublicEventTeam_140a6c5f0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64bd8 == 0) {
        iVar1 = FUN_1402292e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402295f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63888 + 0x20))(DAT_140c63888, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140229720(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64da0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PublicEventUnitPropertyModifier"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64da8 != 0) {
                iVar2 = _DAT_140c64bec;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PublicEventUnitPropertyModifier_140a79af0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PublicEventUnitPropertyModifier.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PublicEventUnitPropertyModifier_140a79af0;
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
                plVar3[3] = (longlong) & PTR_u_PublicEventUnitPropertyModifier_140a79af0;
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
        DAT_140c64da0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64efc = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140229930(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140229952. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PublicEventUnitPropertyModifier_140a6c628, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64efc == 0) {
        iVar1 = FUN_140229720();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022997c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64da0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402299e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140229a09. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PublicEventUnitPropertyModifier_140a6c628, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64efc == 0) {
        iVar1 = FUN_140229720();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140229a37. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64da0 + 0x20))(DAT_140c64da0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140229b60(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c649a8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PublicEventRewardModifier"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63b74 != 0) {
                iVar2 = _DAT_140c64d34;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PublicEventRewardModifier_140ad5700;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PublicEventRewardModifier.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PublicEventRewardModifier_140ad5700;
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
                plVar3[3] = (longlong) & PTR_u_PublicEventRewardModifier_140ad5700;
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
        DAT_140c649a8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63d4c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140229d70(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140229d92. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PublicEventRewardModifier_140a6c660, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63d4c == 0) {
        iVar1 = FUN_140229b60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140229dbc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c649a8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140229e20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140229e49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PublicEventRewardModifier_140a6c660, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63d4c == 0) {
        iVar1 = FUN_140229b60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140229e77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c649a8 + 0x20))(DAT_140c649a8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140229fa0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c655b0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PublicEventVote"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63a3c != 0) {
                iVar2 = _DAT_140c64a88;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PublicEventVote_140a88a58;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PublicEventVote.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PublicEventVote_140a88a58;
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
                plVar3[3] = (longlong) & PTR_u_PublicEventVote_140a88a58;
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
        DAT_140c655b0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65308 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022a1b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022a1d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PublicEventVote_140a6c698, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65308 == 0) {
        iVar1 = FUN_140229fa0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022a1fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c655b0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022a260(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022a289. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PublicEventVote_140a6c698, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65308 == 0) {
        iVar1 = FUN_140229fa0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022a2b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c655b0 + 0x20))(DAT_140c655b0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14022a3e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64ee8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"PvPRatingFloor"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c6503c != 0) {
                iVar2 = _DAT_140c648e0;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_PvPRatingFloor_140acc7c8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\PvPRatingFloor.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_PvPRatingFloor_140acc7c8;
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
                plVar3[3] = (longlong) & PTR_u_PvPRatingFloor_140acc7c8;
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
        DAT_140c64ee8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65418 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022a5f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022a612. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_PvPRatingFloor_140a6c6d0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65418 == 0) {
        iVar1 = FUN_14022a3e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022a63c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64ee8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022a6a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022a6c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_PvPRatingFloor_140a6c6d0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65418 == 0) {
        iVar1 = FUN_14022a3e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022a6f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64ee8 + 0x20))(DAT_140c64ee8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14022a820(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c642a8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"Quest2"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c641c8 != 0) {
                iVar2 = _DAT_140c64254;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Quest2_140acd188;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Quest2.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Quest2_140acd188;
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
                plVar3[3] = (longlong) & PTR_u_Quest2_140acd188;
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
        DAT_140c642a8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64d18 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022aa30(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022aa52. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Quest2_140a6c708, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64d18 == 0) {
        iVar1 = FUN_14022a820();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022aa7c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c642a8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022aa80(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022aaa9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Quest2_140a6c708, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64d18 == 0) {
        iVar1 = FUN_14022a820();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022aad7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c642a8 + 0x18))(DAT_140c642a8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022aae0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022ab09. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Quest2_140a6c708, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64d18 == 0) {
        iVar1 = FUN_14022a820();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022ab37. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c642a8 + 0x20))(DAT_140c642a8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14022ac60(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64f70 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"Quest2Difficulty"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c6544c != 0) {
                iVar2 = _DAT_140c65050;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Quest2Difficulty_140ad4a30;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Quest2Difficulty.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Quest2Difficulty_140ad4a30;
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
                plVar3[3] = (longlong) & PTR_u_Quest2Difficulty_140ad4a30;
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
        DAT_140c64f70 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64a1c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022ae70(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022ae92. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Quest2Difficulty_140a6c740, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64a1c == 0) {
        iVar1 = FUN_14022ac60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022aebc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64f70 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022aec0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022aee9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Quest2Difficulty_140a6c740, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64a1c == 0) {
        iVar1 = FUN_14022ac60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022af17. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64f70 + 0x18))(DAT_140c64f70, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022af20(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022af49. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Quest2Difficulty_140a6c740, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64a1c == 0) {
        iVar1 = FUN_14022ac60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022af77. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64f70 + 0x20))(DAT_140c64f70, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14022b0a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63d08 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"QuestCategory"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c638d4 != 0) {
                iVar2 = _DAT_140c639e8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_QuestCategory_140a751a0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\QuestCategory.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_QuestCategory_140a751a0;
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
                plVar3[3] = (longlong) & PTR_u_QuestCategory_140a751a0;
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
        DAT_140c63d08 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c6389c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022b2b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022b2d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_QuestCategory_140a6c778, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6389c == 0) {
        iVar1 = FUN_14022b0a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022b2fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63d08 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022b360(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022b389. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_QuestCategory_140a6c778, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6389c == 0) {
        iVar1 = FUN_14022b0a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022b3b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63d08 + 0x20))(DAT_140c63d08, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14022b4e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64df0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"QuestDirection"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64f90 != 0) {
                iVar2 = _DAT_140c63ff0;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_QuestDirection_140ad0188;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\QuestDirection.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_QuestDirection_140ad0188;
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
                plVar3[3] = (longlong) & PTR_u_QuestDirection_140ad0188;
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
        DAT_140c64df0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c6462c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022b6f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022b712. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_QuestDirection_140a6c7b0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6462c == 0) {
        iVar1 = FUN_14022b4e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022b73c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64df0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022b7a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022b7c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_QuestDirection_140a6c7b0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6462c == 0) {
        iVar1 = FUN_14022b4e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022b7f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64df0 + 0x20))(DAT_140c64df0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14022b920(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63d00 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"QuestDirectionEntry"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64aec != 0) {
                iVar2 = _DAT_140c63c84;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_QuestDirectionEntry_140ada1f8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\QuestDirectionEntry.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_QuestDirectionEntry_140ada1f8;
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
                plVar3[3] = (longlong) & PTR_u_QuestDirectionEntry_140ada1f8;
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
        DAT_140c63d00 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63a18 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022bb30(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022bb52. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_QuestDirectionEntry_140a6c7e8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63a18 == 0) {
        iVar1 = FUN_14022b920();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022bb7c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63d00 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022bbe0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022bc09. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_QuestDirectionEntry_140a6c7e8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63a18 == 0) {
        iVar1 = FUN_14022b920();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022bc37. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63d00 + 0x20))(DAT_140c63d00, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14022bd60(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65188 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"QuestHub"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c644ec != 0) {
                iVar2 = _DAT_140c6392c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_QuestHub_140a647b8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\QuestHub.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_QuestHub_140a647b8;
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
                plVar3[3] = (longlong) & PTR_u_QuestHub_140a647b8;
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
        DAT_140c65188 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c649e4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022bf70(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022bf92. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_QuestHub_140a6c820, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c649e4 == 0) {
        iVar1 = FUN_14022bd60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022bfbc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65188 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022bfc0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022bfe9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_QuestHub_140a6c820, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c649e4 == 0) {
        iVar1 = FUN_14022bd60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022c017. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65188 + 0x18))(DAT_140c65188, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022c020(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022c049. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_QuestHub_140a6c820, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c649e4 == 0) {
        iVar1 = FUN_14022bd60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022c077. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65188 + 0x20))(DAT_140c65188, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14022c1a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c638f8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"Quest2RandomTextLineJoin"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63a80 != 0) {
                iVar2 = _DAT_140c64074;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Quest2RandomTextLineJoin_140ad93c8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Quest2RandomTextLineJoin.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Quest2RandomTextLineJoin_140ad93c8;
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
                plVar3[3] = (longlong) & PTR_u_Quest2RandomTextLineJoin_140ad93c8;
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
        DAT_140c638f8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64b74 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022c3b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022c3d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Quest2RandomTextLineJoin_140a6c858, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64b74 == 0) {
        iVar1 = FUN_14022c1a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022c3fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c638f8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022c460(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022c489. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Quest2RandomTextLineJoin_140a6c858, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64b74 == 0) {
        iVar1 = FUN_14022c1a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022c4b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c638f8 + 0x20))(DAT_140c638f8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14022c5e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64640 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"Quest2Reward"), iVar2 == 0)
                ) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64694 != 0) {
                iVar2 = _DAT_140c64344;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Quest2Reward_140ad0aa0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Quest2Reward.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Quest2Reward_140ad0aa0;
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
                plVar3[3] = (longlong) & PTR_u_Quest2Reward_140ad0aa0;
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
        DAT_140c64640 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63a1c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022c7f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022c812. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Quest2Reward_140a6c890, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63a1c == 0) {
        iVar1 = FUN_14022c5e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022c83c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64640 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022c8a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022c8c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Quest2Reward_140a6c890, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63a1c == 0) {
        iVar1 = FUN_14022c5e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022c8f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64640 + 0x20))(DAT_140c64640, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14022ca20(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63b78 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"QuestGroup"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c641dc != 0) {
                iVar2 = _DAT_140c64778;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_QuestGroup_140ae28f0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\QuestGroup.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_QuestGroup_140ae28f0;
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
                plVar3[3] = (longlong) & PTR_u_QuestGroup_140ae28f0;
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
        DAT_140c63b78 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c6494c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022cc30(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022cc52. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_QuestGroup_140a6c8c8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6494c == 0) {
        iVar1 = FUN_14022ca20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022cc7c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63b78 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022cc80(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022cca9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_QuestGroup_140a6c8c8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6494c == 0) {
        iVar1 = FUN_14022ca20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022ccd7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63b78 + 0x18))(DAT_140c63b78, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022cce0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022cd09. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_QuestGroup_140a6c8c8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6494c == 0) {
        iVar1 = FUN_14022ca20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022cd37. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63b78 + 0x20))(DAT_140c63b78, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14022ce60(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c652a0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"QuestObjective"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64ea8 != 0) {
                iVar2 = _DAT_140c64400;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_QuestObjective_140a6e8f0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\QuestObjective.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_QuestObjective_140a6e8f0;
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
                plVar3[3] = (longlong) & PTR_u_QuestObjective_140a6e8f0;
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
        DAT_140c652a0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64f4c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022d070(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022d092. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_QuestObjective_140a6c900, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64f4c == 0) {
        iVar1 = FUN_14022ce60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022d0bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c652a0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022d0c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022d0e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_QuestObjective_140a6c900, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64f4c == 0) {
        iVar1 = FUN_14022ce60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022d117. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c652a0 + 0x18))(DAT_140c652a0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022d120(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022d149. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_QuestObjective_140a6c900, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64f4c == 0) {
        iVar1 = FUN_14022ce60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022d177. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c652a0 + 0x20))(DAT_140c652a0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14022d2a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63918 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"Race"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c653e0 != 0) {
                iVar2 = _DAT_140c639a4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Race_140aceb58;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Race.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Race_140aceb58;
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
                plVar3[3] = (longlong) & PTR_u_Race_140aceb58;
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
        DAT_140c63918 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64c3c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022d4b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022d4d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Race_140a6c938, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64c3c == 0) {
        iVar1 = FUN_14022d2a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022d4fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63918 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022d500(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022d529. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_Race_140a6c938, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64c3c == 0) {
        iVar1 = FUN_14022d2a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022d557. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63918 + 0x18))(DAT_140c63918, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022d560(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022d589. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Race_140a6c938, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64c3c == 0) {
        iVar1 = FUN_14022d2a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022d5b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63918 + 0x20))(DAT_140c63918, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14022d6e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64a50 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"RandomTextLine"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64538 != 0) {
                iVar2 = _DAT_140c63afc;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_RandomTextLine_140a7a398;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\RandomTextLine.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_RandomTextLine_140a7a398;
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
                plVar3[3] = (longlong) & PTR_u_RandomTextLine_140a7a398;
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
        DAT_140c64a50 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65234 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022d8f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022d912. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_RandomTextLine_140a6c970, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65234 == 0) {
        iVar1 = FUN_14022d6e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022d93c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64a50 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022d940(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022d969. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_RandomTextLine_140a6c970, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65234 == 0) {
        iVar1 = FUN_14022d6e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022d997. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64a50 + 0x18))(DAT_140c64a50, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022d9a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022d9c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_RandomTextLine_140a6c970, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65234 == 0) {
        iVar1 = FUN_14022d6e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022d9f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64a50 + 0x20))(DAT_140c64a50, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14022db20(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64ed8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"RandomTextLineSet"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c653a8 != 0) {
                iVar2 = _DAT_140c63cfc;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_RandomTextLineSet_140a83188;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\RandomTextLineSet.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_RandomTextLineSet_140a83188;
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
                plVar3[3] = (longlong) & PTR_u_RandomTextLineSet_140a83188;
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
        DAT_140c64ed8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64774 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022dd30(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022dd52. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_RandomTextLineSet_140a6c9a8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64774 == 0) {
        iVar1 = FUN_14022db20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022dd7c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64ed8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022dd80(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022dda9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_RandomTextLineSet_140a6c9a8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64774 == 0) {
        iVar1 = FUN_14022db20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022ddd7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64ed8 + 0x18))(DAT_140c64ed8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022dde0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022de09. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_RandomTextLineSet_140a6c9a8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64774 == 0) {
        iVar1 = FUN_14022db20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022de37. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64ed8 + 0x20))(DAT_140c64ed8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14022df60(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64d00 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"RealmDataCenter"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63eb0 != 0) {
                iVar2 = _DAT_140c64360;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_RealmDataCenter_140a4bb18;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\RealmDataCenter.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_RealmDataCenter_140a4bb18;
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
                plVar3[3] = (longlong) & PTR_u_RealmDataCenter_140a4bb18;
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
        DAT_140c64d00 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63cdc = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022e170(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022e192. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_RealmDataCenter_140a6c9e0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63cdc == 0) {
        iVar1 = FUN_14022df60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022e1bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64d00 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022e1c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022e1e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_RealmDataCenter_140a6c9e0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63cdc == 0) {
        iVar1 = FUN_14022df60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022e217. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64d00 + 0x18))(DAT_140c64d00, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022e220(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022e249. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_RealmDataCenter_140a6c9e0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63cdc == 0) {
        iVar1 = FUN_14022df60();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022e277. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64d00 + 0x20))(DAT_140c64d00, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14022e3a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c655e0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"ReplaceableMaterialInfo"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64d30 != 0) {
                iVar2 = _DAT_140c64c28;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ReplaceableMaterialInfo_140a7c258;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ReplaceableMaterialInfo.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ReplaceableMaterialInfo_140a7c258;
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
                plVar3[3] = (longlong) & PTR_u_ReplaceableMaterialInfo_140a7c258;
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
        DAT_140c655e0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63dac = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022e5b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022e5d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ReplaceableMaterialInfo_140a6ca18, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63dac == 0) {
        iVar1 = FUN_14022e3a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022e5fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c655e0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022e600(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022e629. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_ReplaceableMaterialInfo_140a6ca18, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63dac == 0) {
        iVar1 = FUN_14022e3a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022e657. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c655e0 + 0x18))(DAT_140c655e0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022e660(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022e689. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ReplaceableMaterialInfo_140a6ca18, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63dac == 0) {
        iVar1 = FUN_14022e3a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022e6b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c655e0 + 0x20))(DAT_140c655e0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14022e7e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64388 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"ResourceConversion"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64fd8 != 0) {
                iVar2 = _DAT_140c654d0;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ResourceConversion_140a5abb0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ResourceConversion.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ResourceConversion_140a5abb0;
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
                plVar3[3] = (longlong) & PTR_u_ResourceConversion_140a5abb0;
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
        DAT_140c64388 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c6564c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022e9f0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022ea12. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ResourceConversion_140a6ca50, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6564c == 0) {
        iVar1 = FUN_14022e7e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022ea3c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64388 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022eaa0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022eac9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ResourceConversion_140a6ca50, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6564c == 0) {
        iVar1 = FUN_14022e7e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022eaf7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64388 + 0x20))(DAT_140c64388, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14022ec20(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64838 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"ResourceConversionGroup"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64058 != 0) {
                iVar2 = _DAT_140c64b28;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_ResourceConversionGroup_140a6e730;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\ResourceConversionGroup.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_ResourceConversionGroup_140a6e730;
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
                plVar3[3] = (longlong) & PTR_u_ResourceConversionGroup_140a6e730;
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
        DAT_140c64838 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c654fc = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022ee30(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022ee52. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_ResourceConversionGroup_140a6ca88, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c654fc == 0) {
        iVar1 = FUN_14022ec20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022ee7c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64838 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022eee0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022ef09. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_ResourceConversionGroup_140a6ca88, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c654fc == 0) {
        iVar1 = FUN_14022ec20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022ef37. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64838 + 0x20))(DAT_140c64838, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14022f060(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c651a8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"RewardProperty"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63dd8 != 0) {
                iVar2 = _DAT_140c6553c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_RewardProperty_140ad9bc0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\RewardProperty.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_RewardProperty_140ad9bc0;
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
                plVar3[3] = (longlong) & PTR_u_RewardProperty_140ad9bc0;
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
        DAT_140c651a8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c651a0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022f270(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022f292. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_RewardProperty_140a6cac0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c651a0 == 0) {
        iVar1 = FUN_14022f060();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022f2bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c651a8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022f2c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022f2e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_RewardProperty_140a6cac0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c651a0 == 0) {
        iVar1 = FUN_14022f060();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022f317. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c651a8 + 0x18))(DAT_140c651a8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022f320(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022f349. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_RewardProperty_140a6cac0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c651a0 == 0) {
        iVar1 = FUN_14022f060();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022f377. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c651a8 + 0x20))(DAT_140c651a8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14022f4a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c65228 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"RewardPropertyPremiumModifier"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65150 != 0) {
                iVar2 = _DAT_140c649bc;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_RewardPropertyPremiumModifier_140a63a20;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\RewardPropertyPremiumModifier.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_RewardPropertyPremiumModifier_140a63a20;
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
                plVar3[3] = (longlong) & PTR_u_RewardPropertyPremiumModifier_140a63a20;
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
        DAT_140c65228 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c653fc = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022f6b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022f6d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_RewardPropertyPremiumModifier_140a6caf8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c653fc == 0) {
        iVar1 = FUN_14022f4a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022f6fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65228 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022f760(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022f789. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_RewardPropertyPremiumModifier_140a6caf8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c653fc == 0) {
        iVar1 = FUN_14022f4a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022f7b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c65228 + 0x20))(DAT_140c65228, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14022f8e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c644d0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"RewardRotationContent"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64c10 != 0) {
                iVar2 = _DAT_140c642fc;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_RewardRotationContent_140a5a880;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\RewardRotationContent.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_RewardRotationContent_140a5a880;
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
                plVar3[3] = (longlong) & PTR_u_RewardRotationContent_140a5a880;
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
        DAT_140c644d0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64948 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022faf0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022fb12. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_RewardRotationContent_140a6cb30, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64948 == 0) {
        iVar1 = FUN_14022f8e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022fb3c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c644d0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022fb40(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022fb69. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_RewardRotationContent_140a6cb30, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64948 == 0) {
        iVar1 = FUN_14022f8e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022fb97. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c644d0 + 0x18))(DAT_140c644d0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022fba0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022fbc9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_RewardRotationContent_140a6cb30, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64948 == 0) {
        iVar1 = FUN_14022f8e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022fbf7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c644d0 + 0x20))(DAT_140c644d0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14022fd20(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64480 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"RewardRotationItem"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65624 != 0) {
                iVar2 = _DAT_140c64ec0;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_RewardRotationItem_140ad0ad8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\RewardRotationItem.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_RewardRotationItem_140ad0ad8;
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
                plVar3[3] = (longlong) & PTR_u_RewardRotationItem_140ad0ad8;
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
        DAT_140c64480 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63898 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022ff30(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022ff52. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_RewardRotationItem_140a6cb68, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63898 == 0) {
        iVar1 = FUN_14022fd20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022ff7c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64480 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022ff80(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x00014022ffa9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_RewardRotationItem_140a6cb68, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63898 == 0) {
        iVar1 = FUN_14022fd20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014022ffd7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64480 + 0x18))(DAT_140c64480, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14022ffe0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140230009. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_RewardRotationItem_140a6cb68, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63898 == 0) {
        iVar1 = FUN_14022fd20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140230037. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64480 + 0x20))(DAT_140c64480, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140230160(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64ff8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"RewardRotationEssence"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c641e0 != 0) {
                iVar2 = _DAT_140c643d4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_RewardRotationEssence_140ad9da8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\RewardRotationEssence.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_RewardRotationEssence_140ad9da8;
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
                plVar3[3] = (longlong) & PTR_u_RewardRotationEssence_140ad9da8;
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
        DAT_140c64ff8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c641bc = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140230370(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140230392. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_RewardRotationEssence_140a6cba0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c641bc == 0) {
        iVar1 = FUN_140230160();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402303bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64ff8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402303c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402303e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_RewardRotationEssence_140a6cba0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c641bc == 0) {
        iVar1 = FUN_140230160();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140230417. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64ff8 + 0x18))(DAT_140c64ff8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140230420(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140230449. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_RewardRotationEssence_140a6cba0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c641bc == 0) {
        iVar1 = FUN_140230160();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140230477. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64ff8 + 0x20))(DAT_140c64ff8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402305a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64e90 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"RewardRotationModifier"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64770 != 0) {
                iVar2 = _DAT_140c6489c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_RewardRotationModifier_140a670f8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\RewardRotationModifier.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_RewardRotationModifier_140a670f8;
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
                plVar3[3] = (longlong) & PTR_u_RewardRotationModifier_140a670f8;
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
        DAT_140c64e90 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c641b8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402307b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402307d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_RewardRotationModifier_140a6cbd8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c641b8 == 0) {
        iVar1 = FUN_1402305a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402307fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64e90 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140230800(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140230829. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_RewardRotationModifier_140a6cbd8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c641b8 == 0) {
        iVar1 = FUN_1402305a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140230857. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64e90 + 0x18))(DAT_140c64e90, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140230860(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140230889. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_RewardRotationModifier_140a6cbd8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c641b8 == 0) {
        iVar1 = FUN_1402305a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402308b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64e90 + 0x20))(DAT_140c64e90, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402309e0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64718 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"RewardTrack"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64118 != 0) {
                iVar2 = _DAT_140c64c34;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_RewardTrack_140a66e18;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\RewardTrack.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_RewardTrack_140a66e18;
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
                plVar3[3] = (longlong) & PTR_u_RewardTrack_140a66e18;
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
        DAT_140c64718 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64cac = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140230bf0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140230c12. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_RewardTrack_140a6cc10, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64cac == 0) {
        iVar1 = FUN_1402309e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140230c3c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64718 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140230ca0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140230cc9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_RewardTrack_140a6cc10, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64cac == 0) {
        iVar1 = FUN_1402309e0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140230cf7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64718 + 0x20))(DAT_140c64718, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140230e20(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64d60 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"RewardTrackRewards"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64780 != 0) {
                iVar2 = _DAT_140c64ef0;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_RewardTrackRewards_140ad9818;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\RewardTrackRewards.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_RewardTrackRewards_140ad9818;
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
                plVar3[3] = (longlong) & PTR_u_RewardTrackRewards_140ad9818;
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
        DAT_140c64d60 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64c80 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140231030(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140231052. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_RewardTrackRewards_140a6cc48, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64c80 == 0) {
        iVar1 = FUN_140230e20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023107c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64d60 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402310e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140231109. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_RewardTrackRewards_140a6cc48, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64c80 == 0) {
        iVar1 = FUN_140230e20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140231137. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64d60 + 0x20))(DAT_140c64d60, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140231260(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64078 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"Salvage"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64238 != 0) {
                iVar2 = _DAT_140c64d8c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_Salvage_140ad7bf8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\Salvage.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_Salvage_140ad7bf8;
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
                plVar3[3] = (longlong) & PTR_u_Salvage_140ad7bf8;
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
        DAT_140c64078 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64430 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140231470(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140231492. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Salvage_140a6cc80, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64430 == 0) {
        iVar1 = FUN_140231260();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402314bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64078 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140231520(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140231549. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_Salvage_140a6cc80, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64430 == 0) {
        iVar1 = FUN_140231260();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140231577. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64078 + 0x20))(DAT_140c64078, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402316a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64e60 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"SalvageException"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c6443c != 0) {
                iVar2 = _DAT_140c640b4;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_SalvageException_140a51398;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\SalvageException.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_SalvageException_140a51398;
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
                plVar3[3] = (longlong) & PTR_u_SalvageException_140a51398;
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
        DAT_140c64e60 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64e5c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402318b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402318d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_SalvageException_140a6ccb8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64e5c == 0) {
        iVar1 = FUN_1402316a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402318fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64e60 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140231960(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140231989. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_SalvageException_140a6ccb8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64e5c == 0) {
        iVar1 = FUN_1402316a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402319b7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64e60 + 0x20))(DAT_140c64e60, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140231ae0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63920 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"SkyCloudSet"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63ecc != 0) {
                iVar2 = _DAT_140c643d0;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_SkyCloudSet_140ad5fb8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\SkyCloudSet.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_SkyCloudSet_140ad5fb8;
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
                plVar3[3] = (longlong) & PTR_u_SkyCloudSet_140ad5fb8;
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
        DAT_140c63920 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c647d8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140231cf0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140231d12. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_SkyCloudSet_140a6ccf0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c647d8 == 0) {
        iVar1 = FUN_140231ae0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140231d3c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63920 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140231d40(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140231d69. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_SkyCloudSet_140a6ccf0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c647d8 == 0) {
        iVar1 = FUN_140231ae0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140231d97. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63920 + 0x18))(DAT_140c63920, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140231da0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140231dc9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_SkyCloudSet_140a6ccf0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c647d8 == 0) {
        iVar1 = FUN_140231ae0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140231df7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63920 + 0x20))(DAT_140c63920, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140231f20(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63990 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"SkyTrackCloudSet"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c6456c != 0) {
                iVar2 = _DAT_140c65430;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_SkyTrackCloudSet_140ad0898;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\SkyTrackCloudSet.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_SkyTrackCloudSet_140ad0898;
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
                plVar3[3] = (longlong) & PTR_u_SkyTrackCloudSet_140ad0898;
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
        DAT_140c63990 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63a9c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140232130(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140232152. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_SkyTrackCloudSet_140a6cd28, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63a9c == 0) {
        iVar1 = FUN_140231f20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023217c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63990 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140232180(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402321a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_SkyTrackCloudSet_140a6cd28, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63a9c == 0) {
        iVar1 = FUN_140231f20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402321d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63990 + 0x18))(DAT_140c63990, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402321e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140232209. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_SkyTrackCloudSet_140a6cd28, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63a9c == 0) {
        iVar1 = FUN_140231f20();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140232237. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63990 + 0x20))(DAT_140c63990, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140232360(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63b00 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"SoundBank"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65128 != 0) {
                iVar2 = _DAT_140c63d98;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundBank_140a74000;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\SoundBank.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundBank_140a74000;
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
                plVar3[3] = (longlong) & PTR_u_SoundBank_140a74000;
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
        DAT_140c63b00 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c640c8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140232570(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140232592. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_SoundBank_140a6cd60, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c640c8 == 0) {
        iVar1 = FUN_140232360();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402325bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63b00 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140232620(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140232649. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_SoundBank_140a6cd60, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c640c8 == 0) {
        iVar1 = FUN_140232360();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140232677. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63b00 + 0x20))(DAT_140c63b00, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402327a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63ef0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"SoundCombatLoop"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64904 != 0) {
                iVar2 = _DAT_140c6387c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundCombatLoop_140add380;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\SoundCombatLoop.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundCombatLoop_140add380;
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
                plVar3[3] = (longlong) & PTR_u_SoundCombatLoop_140add380;
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
        DAT_140c63ef0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64740 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402329b0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402329d2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_SoundCombatLoop_140a6cd98, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64740 == 0) {
        iVar1 = FUN_1402327a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402329fc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63ef0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140232a00(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140232a29. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_SoundCombatLoop_140a6cd98, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64740 == 0) {
        iVar1 = FUN_1402327a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140232a57. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63ef0 + 0x18))(DAT_140c63ef0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140232a60(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140232a89. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_SoundCombatLoop_140a6cd98, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64740 == 0) {
        iVar1 = FUN_1402327a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140232ab7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63ef0 + 0x20))(DAT_140c63ef0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140232be0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63ea0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"SoundContext"), iVar2 == 0)
                ) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63de0 != 0) {
                iVar2 = _DAT_140c63f4c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundContext_140a786a8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\SoundContext.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundContext_140a786a8;
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
                plVar3[3] = (longlong) & PTR_u_SoundContext_140a786a8;
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
        DAT_140c63ea0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c641a4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140232df0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140232e12. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_SoundContext_140a6cdd0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c641a4 == 0) {
        iVar1 = FUN_140232be0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140232e3c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63ea0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140232e40(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140232e69. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_SoundContext_140a6cdd0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c641a4 == 0) {
        iVar1 = FUN_140232be0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140232e97. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63ea0 + 0x18))(DAT_140c63ea0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140232ea0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140232ec9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_SoundContext_140a6cdd0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c641a4 == 0) {
        iVar1 = FUN_140232be0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140232ef7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63ea0 + 0x20))(DAT_140c63ea0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140233020(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c638a0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"SoundDirectionalAmbience"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65598 != 0) {
                iVar2 = _DAT_140c65398;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundDirectionalAmbience_140a6f220;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\SoundDirectionalAmbience.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundDirectionalAmbience_140a6f220;
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
                plVar3[3] = (longlong) & PTR_u_SoundDirectionalAmbience_140a6f220;
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
        DAT_140c638a0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c646c8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140233230(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140233252. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_SoundDirectionalAmbience_140a6ce08, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c646c8 == 0) {
        iVar1 = FUN_140233020();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023327c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c638a0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402332e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140233309. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_SoundDirectionalAmbience_140a6ce08, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c646c8 == 0) {
        iVar1 = FUN_140233020();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140233337. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c638a0 + 0x20))(DAT_140c638a0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140233460(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63bf0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"SoundEnvironment"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c645c8 != 0) {
                iVar2 = _DAT_140c63dc8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundEnvironment_140ad23e0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\SoundEnvironment.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundEnvironment_140ad23e0;
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
                plVar3[3] = (longlong) & PTR_u_SoundEnvironment_140ad23e0;
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
        DAT_140c63bf0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64140 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140233670(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140233692. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_SoundEnvironment_140a6ce40, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64140 == 0) {
        iVar1 = FUN_140233460();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402336bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63bf0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402336c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402336e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_SoundEnvironment_140a6ce40, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64140 == 0) {
        iVar1 = FUN_140233460();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140233717. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63bf0 + 0x18))(DAT_140c63bf0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140233720(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140233749. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_SoundEnvironment_140a6ce40, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64140 == 0) {
        iVar1 = FUN_140233460();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140233777. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63bf0 + 0x20))(DAT_140c63bf0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402338a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63d88 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"SoundEvent"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c639fc != 0) {
                iVar2 = _DAT_140c63884;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundEvent_140acd658;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\SoundEvent.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundEvent_140acd658;
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
                plVar3[3] = (longlong) & PTR_u_SoundEvent_140acd658;
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
        DAT_140c63d88 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64ca4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140233ab0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140233ad2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_SoundEvent_140a6ce78, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64ca4 == 0) {
        iVar1 = FUN_1402338a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140233afc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63d88 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140233b00(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140233b29. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_SoundEvent_140a6ce78, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64ca4 == 0) {
        iVar1 = FUN_1402338a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140233b57. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63d88 + 0x18))(DAT_140c63d88, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140233b60(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140233b89. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_SoundEvent_140a6ce78, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64ca4 == 0) {
        iVar1 = FUN_1402338a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140233bb7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63d88 + 0x20))(DAT_140c63d88, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140233ce0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c638e8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"SoundImpactEvents"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c65208 != 0) {
                iVar2 = _DAT_140c63b10;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundImpactEvents_140a4c3d0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\SoundImpactEvents.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundImpactEvents_140a4c3d0;
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
                plVar3[3] = (longlong) & PTR_u_SoundImpactEvents_140a4c3d0;
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
        DAT_140c638e8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64614 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140233ef0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140233f12. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_SoundImpactEvents_140a6ceb0, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64614 == 0) {
        iVar1 = FUN_140233ce0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140233f3c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c638e8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140233fa0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140233fc9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_SoundImpactEvents_140a6ceb0, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64614 == 0) {
        iVar1 = FUN_140233ce0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140233ff7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c638e8 + 0x20))(DAT_140c638e8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140234120(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c643f8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"SoundMusicSet"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64e7c != 0) {
                iVar2 = _DAT_140c64ce0;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundMusicSet_140acade0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\SoundMusicSet.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundMusicSet_140acade0;
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
                plVar3[3] = (longlong) & PTR_u_SoundMusicSet_140acade0;
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
        DAT_140c643f8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c64020 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140234330(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140234352. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_SoundMusicSet_140a6cee8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64020 == 0) {
        iVar1 = FUN_140234120();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023437c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c643f8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140234380(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402343a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_SoundMusicSet_140a6cee8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64020 == 0) {
        iVar1 = FUN_140234120();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402343d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c643f8 + 0x18))(DAT_140c643f8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402343e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140234409. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_SoundMusicSet_140a6cee8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64020 == 0) {
        iVar1 = FUN_140234120();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140234437. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c643f8 + 0x20))(DAT_140c643f8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140234560(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c655b8 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"SoundParameter"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63c78 != 0) {
                iVar2 = _DAT_140c649e0;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundParameter_140ad2018;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\SoundParameter.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundParameter_140ad2018;
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
                plVar3[3] = (longlong) & PTR_u_SoundParameter_140ad2018;
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
        DAT_140c655b8 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c651e8 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140234770(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140234792. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_SoundParameter_140a6cf20, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c651e8 == 0) {
        iVar1 = FUN_140234560();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402347bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c655b8 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402347c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402347e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_SoundParameter_140a6cf20, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c651e8 == 0) {
        iVar1 = FUN_140234560();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140234817. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c655b8 + 0x18))(DAT_140c655b8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140234820(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140234849. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_SoundParameter_140a6cf20, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c651e8 == 0) {
        iVar1 = FUN_140234560();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140234877. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c655b8 + 0x20))(DAT_140c655b8, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1402349a0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64240 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"SoundReplace"), iVar2 == 0)
                ) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c6525c != 0) {
                iVar2 = _DAT_140c649c8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundReplace_140ad2bb8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\SoundReplace.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundReplace_140ad2bb8;
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
                plVar3[3] = (longlong) & PTR_u_SoundReplace_140ad2bb8;
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
        DAT_140c64240 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c649a4 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140234bb0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140234bd2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_SoundReplace_140a6cf58, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c649a4 == 0) {
        iVar1 = FUN_1402349a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140234bfc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64240 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140234c60(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140234c89. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_SoundReplace_140a6cf58, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c649a4 == 0) {
        iVar1 = FUN_1402349a0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140234cb7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64240 + 0x20))(DAT_140c64240, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140234de0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64d40 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"SoundReplaceDescription"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63f94 != 0) {
                iVar2 = _DAT_140c6442c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundReplaceDescription_140ad9e18;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\SoundReplaceDescription.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundReplaceDescription_140ad9e18;
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
                plVar3[3] = (longlong) & PTR_u_SoundReplaceDescription_140ad9e18;
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
        DAT_140c64d40 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c63c9c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140234ff0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140235012. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_SoundReplaceDescription_140a6cf90, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63c9c == 0) {
        iVar1 = FUN_140234de0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023503c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64d40 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402350a0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402350c9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_SoundReplaceDescription_140a6cf90, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c63c9c == 0) {
        iVar1 = FUN_140234de0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402350f7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64d40 + 0x20))(DAT_140c64d40, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140235220(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c64c18 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"SoundStates"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64050 != 0) {
                iVar2 = _DAT_140c63e0c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundStates_140add498;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\SoundStates.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundStates_140add498;
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
                plVar3[3] = (longlong) & PTR_u_SoundStates_140add498;
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
        DAT_140c64c18 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65140 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140235430(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140235452. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_SoundStates_140a6cfc8, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65140 == 0) {
        iVar1 = FUN_140235220();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x00014023547c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64c18 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140235480(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402354a9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_SoundStates_140a6cfc8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65140 == 0) {
        iVar1 = FUN_140235220();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402354d7. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64c18 + 0x18))(DAT_140c64c18, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402354e0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140235509. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_SoundStates_140a6cfc8, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65140 == 0) {
        iVar1 = FUN_140235220();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140235537. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c64c18 + 0x20))(DAT_140c64c18, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140235660(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c652f0 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) || (iVar2 = FUN_1401e84a0(L"SoundSwitch"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64ab8 != 0) {
                iVar2 = _DAT_140c646d8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundSwitch_140a64aa8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\SoundSwitch.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundSwitch_140a64aa8;
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
                plVar3[3] = (longlong) & PTR_u_SoundSwitch_140a64aa8;
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
        DAT_140c652f0 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c651c0 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140235870(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140235892. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_SoundSwitch_140a6d000, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c651c0 == 0) {
        iVar1 = FUN_140235660();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001402358bc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c652f0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402358c0(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402358e9. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_SoundSwitch_140a6d000, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c651c0 == 0) {
        iVar1 = FUN_140235660();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140235917. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c652f0 + 0x18))(DAT_140c652f0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140235920(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63848 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140235949. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63848)(&PTR_u_SoundSwitch_140a6d000, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c651c0 == 0) {
        iVar1 = FUN_140235660();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140235977. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c652f0 + 0x20))(DAT_140c652f0, param_1);
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140235aa0(void) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *) 0x0;
    if (DAT_140c63d60 == (longlong *) 0x0) {
        if ((DAT_140c63970 == (undefined8 *) 0x0) ||
            (iVar2 = FUN_1401e84a0(L"SoundUIContext"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63b50 != 0) {
                iVar2 = _DAT_140c64474;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong) & PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundUIContext_140ad0a68;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code * *)(*plVar5 + 0x60))(plVar5, L"DB\\SoundUIContext.tbl");
                if (iVar2 < 0) {
                    (**(code * *)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            } else {
                plVar3 = (longlong *) FUN_14018b280(0x30);
                if (plVar3 != (longlong *) 0x0) {
                    *(undefined4 * )(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong) & PTR_u_SoundUIContext_140ad0a68;
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
                plVar3[3] = (longlong) & PTR_u_SoundUIContext_140ad0a68;
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
        DAT_140c63d60 = plVar5;
        if (plVar5 == (longlong *) 0x0) {
            return 0;
        }
    }
    _DAT_140c65648 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140235cb0(void) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140235cd2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_SoundUIContext_140a6d038, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65648 == 0) {
        iVar1 = FUN_140235aa0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140235cfc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63d60 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140235d00(undefined4 param_1) {
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63840 != (code *) 0x0) {
        // WARNING: Could not recover jumptable at 0x000140235d29. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63840)(&PTR_u_SoundUIContext_140a6d038, param_1, DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65648 == 0) {
        iVar1 = FUN_140235aa0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x000140235d57. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code * *)(*DAT_140c63d60 + 0x18))(DAT_140c63d60, param_1);
            return uVar2;
        }
    }
    return 0;
}

