//
// Created by flop on 05.04.22.
//

/*
Unable to decompile 'thunk_FUN_140904450'
Cause:
Low-level Error: Overlapping input varnodes
*/

#include "FUN_14091.c"
#include "FUN_14092.c"
#include "FUN_14093.c"
#include "FUN_14094.c"
#include "FUN_14095.c"
#include "../../WildStarTypes.c"

double FUN_1409005c8(double param_1) {
    double dVar1;
    double dVar2;
    ulonglong uVar3;
    bool bVar4;
    undefined8 uVar5;
    double dVar6;
    uint uVar7;
    undefined4 uVar8;
    uint local_res8[2];
    double local_res10;
    double local_res18;
    double local_res20;
    undefined4 uVar9;

    uVar9 = SUB84(param_1, 0);
    uVar7 = (uint) ((ulonglong) param_1 >> 0x20);
    dVar2 = (double) ((ulonglong) param_1 & 0x7fffffffffffffff);
    local_res20 = param_1;
    if ((ulonglong) dVar2 < 0x3fe921fb54442d19) {
        if ((ulonglong) dVar2 < 0x3f20000000000000) {
            if (0x3e3fffffffffffff < (ulonglong) dVar2) {
                return param_1 * param_1 * param_1 * 0.3333333333333333 + param_1;
            }
            if (dVar2 == 0.0) {
                return param_1;
            }
            _set_statfp(0x20);
            return (double) CONCAT44(uVar7, uVar9);
        }
        uVar5 = 0;
    } else {
        if (((ulonglong) param_1 & 0x7ff0000000000000) == 0x7ff0000000000000) {
            if (((ulonglong) param_1 & 0xfffffffffffff) == 0) {
                uVar9 = 8;
                uVar3 = 0xfff8000000000000;
            } else {
                uVar3 = (ulonglong) param_1 | 0x8000000000000;
                uVar9 = 0;
            }
            dVar2 = (double) FUN_1407efc20(&DAT_140963b50, 0x20, uVar3, 1, uVar9, 0x21, param_1, 0, 1);
            return dVar2;
        }
        bVar4 = dVar2 != param_1;
        if (bVar4) {
            uVar7 = uVar7 ^ 0x80000000;
        }
        if (500000.0 < (double) ((ulonglong) param_1 & 0xffffffff | (ulonglong) uVar7 << 0x20) ||
            (double) ((ulonglong) param_1 & 0xffffffff | (ulonglong) uVar7 << 0x20) == 500000.0) {
            FUN_140903f70((ulonglong) param_1 & 0xffffffff | (ulonglong) uVar7 << 0x20, dVar2, &local_res10,
                          &local_res18, local_res8);
            uVar9 = SUB84(local_res18, 0);
            uVar8 = (undefined4) ((ulonglong) local_res18 >> 0x20);
        } else {
            if ((ulonglong) dVar2 < 0x400f6a7a2955385f) {
                local_res8[0] = (0x4002d97c7f3321d2 < (ulonglong) dVar2) + 1;
            } else if ((ulonglong) dVar2 < 0x401c463abeccb2bc) {
                local_res8[0] = (0x4015fdbbe9bba775 < (ulonglong) dVar2) + 3;
            } else {
                local_res8[0] =
                        (uint) ((double) ((ulonglong) param_1 & 0xffffffff | (ulonglong) uVar7 << 0x20) *
                                0.6366197723675814 + 0.5);
            }
            dVar6 = (double) local_res8[0];
            local_res18 = dVar6 * 6.077100506506192e-11;
            local_res20 = (double) ((ulonglong) param_1 & 0xffffffff | (ulonglong) uVar7 << 0x20) -
                          dVar6 * 1.570796326734126;
            uVar9 = SUB84(local_res20, 0);
            uVar7 = (uint) ((ulonglong) local_res20 >> 0x20);
            uVar3 = ((ulonglong) dVar2 >> 0x34) - (ulonglong) (uVar7 >> 0x14 & 0x7ff);
            if (0xf < uVar3) {
                dVar2 = local_res20 - dVar6 * 6.077100506303966e-11;
                uVar9 = SUB84(dVar2, 0);
                uVar7 = (uint) ((ulonglong) dVar2 >> 0x20);
                local_res18 = dVar6 * 2.022266248795951e-21 -
                              ((local_res20 - dVar2) - dVar6 * 6.077100506303966e-11);
                if (0x30 < uVar3) {
                    dVar1 = dVar2 - dVar6 * 2.022266248711166e-21;
                    uVar9 = SUB84(dVar1, 0);
                    uVar7 = (uint) ((ulonglong) dVar1 >> 0x20);
                    local_res18 = dVar6 * 8.4784276603689e-32 -
                                  ((dVar2 - dVar1) - dVar6 * 2.022266248711166e-21);
                }
            }
            local_res8[0] = local_res8[0] & 3;
            local_res10 = (double) CONCAT44(uVar7, uVar9) - local_res18;
            local_res18 = ((double) CONCAT44(uVar7, uVar9) - local_res10) - local_res18;
            uVar9 = SUB84(local_res18, 0);
            uVar8 = (undefined4) ((ulonglong) local_res18 >> 0x20);
        }
        uVar5 = CONCAT44(uVar8, uVar9);
        param_1 = local_res10;
        if (bVar4) {
            uVar3 = FUN_140900894(local_res10, uVar5);
            return (double) (uVar3 ^ 0x8000000000000000);
        }
    }
    dVar2 = (double) FUN_140900894(param_1, uVar5);
    return dVar2;
}


double FUN_140900894(double param_1, double param_2, undefined8 param_3, undefined8 param_4, int param_5
) {
    int iVar1;
    undefined4 uVar2;
    undefined4 uVar4;
    double dVar3;
    double dVar5;
    double dVar6;

    iVar1 = 0;
    uVar2 = SUB84(param_1, 0);
    uVar4 = (undefined4) ((ulonglong) param_1 >> 0x20);
    if (param_1 <= 0.68) {
        if (-0.68 <= param_1) goto LAB_1409008fc;
        iVar1 = -1;
        dVar5 = param_1 + 0.7853981633974483 + param_2 + 3.061616997868382e-17;
        uVar2 = SUB84(dVar5, 0);
        uVar4 = (undefined4) ((ulonglong) dVar5 >> 0x20);
    } else {
        iVar1 = 1;
        dVar5 = (0.7853981633974483 - param_1) + (3.061616997868382e-17 - param_2);
        uVar2 = SUB84(dVar5, 0);
        uVar4 = (undefined4) ((ulonglong) dVar5 >> 0x20);
    }
    param_2 = 0.0;
    LAB_1409008fc:
    dVar5 = (double) CONCAT44(uVar4, uVar2) * 2.0 * param_2 +
            (double) CONCAT44(uVar4, uVar2) * (double) CONCAT44(uVar4, uVar2);
    param_2 = (((dVar5 * 0.0002240444485370221 - 0.02293450800575656) * dVar5 + 0.3723791597597922) *
               dVar5 * (double) CONCAT44(uVar4, uVar2)) /
              (((0.02606566203986454 - dVar5 * 0.0002323714940885636) * dVar5 - 0.5156585157290311) *
               dVar5 + 1.117137479279377) + param_2;
    if (iVar1 == 0) {
        if (param_5 == 0) {
            dVar5 = param_2 + (double) CONCAT44(uVar4, uVar2);
        } else {
            dVar3 = param_2 + (double) CONCAT44(uVar4, uVar2);
            dVar6 = -1.0 / dVar3;
            dVar3 = (double) ((ulonglong) dVar3 & 0xffffffff00000000);
            dVar5 = (double) ((ulonglong) dVar6 & 0xffffffff00000000);
            dVar5 = (dVar5 * dVar3 + 1.0 + (param_2 - (dVar3 - (double) CONCAT44(uVar4, uVar2))) * dVar5) *
                    dVar6 + dVar5;
        }
    } else {
        param_2 = param_2 + (double) CONCAT44(uVar4, uVar2);
        if (param_5 == 0) {
            dVar5 = 1.0 - (param_2 * 2.0) / (param_2 + 1.0);
        } else {
            dVar5 = (param_2 * 2.0) / (param_2 - 1.0) - 1.0;
        }
        dVar5 = dVar5 * (double) iVar1;
    }
    return dVar5;
}


int FUN_140900a64(longlong param_1, FILE *param_2) {
    uint uVar1;
    int _Flag;
    int *piVar2;
    longlong lVar3;
    longlong lVar4;
    undefined *puVar5;
    undefined *puVar6;

    if ((param_1 != 0) && (param_2 != (FILE *) 0x0)) {
        if ((*(byte *) &param_2->_flag & 0x40) != 0) {
            LAB_140900b2a:
            lVar3 = FUN_1407e1990(param_1);
            _lock_file(param_2);
            _Flag = FUN_1407e3974(param_2);
            lVar4 = FUN_1407e0ef8(param_1, 1, lVar3, param_2);
            _ftbuf(_Flag, param_2);
            _unlock_file(param_2);
            return -(uint) (lVar4 != lVar3);
        }
        uVar1 = _fileno(param_2);
        if (uVar1 + 2 < 2) {
            puVar6 = &DAT_140c0ffb0;
        } else {
            puVar6 = (undefined *)
                    ((ulonglong) (uVar1 & 0x1f) * 0x58 + (&DAT_140c60410)[(longlong) (int) uVar1 >> 5]);
        }
        puVar5 = &DAT_140c0ffb0;
        if ((puVar6[0x38] & 0x7f) == 0) {
            if (1 < uVar1 + 2) {
                puVar5 = (undefined *)
                        ((ulonglong) (uVar1 & 0x1f) * 0x58 + (&DAT_140c60410)[(longlong) (int) uVar1 >> 5]);
            }
            if ((puVar5[0x38] & 0x80) == 0) goto LAB_140900b2a;
        }
    }
    piVar2 = _errno();
    *piVar2 = 0x16;
    FUN_1407dc370();
    return -1;
}


char *FUN_140900b90(char *param_1, int param_2, FILE *param_3) {
    uint uVar1;
    int *piVar2;
    undefined *puVar3;
    undefined *puVar4;
    char *pcVar5;
    char *pcVar6;

    if ((((param_1 == (char *) 0x0) && (param_2 != 0)) || (param_2 < 0)) || (param_3 == (FILE *) 0x0)) {
        piVar2 = _errno();
        *piVar2 = 0x16;
        FUN_1407dc370();
    } else if (param_2 != 0) {
        _lock_file(param_3);
        pcVar5 = param_1;
        if ((*(byte *) &param_3->_flag & 0x40) == 0) {
            uVar1 = _fileno(param_3);
            if (uVar1 + 2 < 2) {
                puVar4 = &DAT_140c0ffb0;
            } else {
                puVar4 = (undefined *)
                        ((ulonglong) (uVar1 & 0x1f) * 0x58 + (&DAT_140c60410)[(longlong) (int) uVar1 >> 5]);
            }
            puVar3 = &DAT_140c0ffb0;
            if ((puVar4[0x38] & 0x7f) == 0) {
                if (1 < uVar1 + 2) {
                    puVar3 = (undefined *)
                            ((ulonglong) (uVar1 & 0x1f) * 0x58 + (&DAT_140c60410)[(longlong) (int) uVar1 >> 5]);
                }
                if ((puVar3[0x38] & 0x80) == 0) goto LAB_140900c81;
            }
            piVar2 = _errno();
            *piVar2 = 0x16;
            FUN_1407dc370();
            pcVar5 = (char *) 0x0;
        }
        LAB_140900c81:
        pcVar6 = param_1;
        if (pcVar5 != (char *) 0x0) {
            do {
                param_2 = param_2 + -1;
                if (param_2 == 0) break;
                piVar2 = &param_3->_cnt;
                *piVar2 = *piVar2 + -1;
                if (*piVar2 < 0) {
                    uVar1 = FUN_1407f6fdc();
                } else {
                    uVar1 = (uint) (byte) *param_3->_ptr;
                    param_3->_ptr = param_3->_ptr + 1;
                }
                if (uVar1 == 0xffffffff) {
                    if (pcVar6 == param_1) {
                        pcVar5 = (char *) 0x0;
                        goto LAB_140900cd8;
                    }
                    break;
                }
                *pcVar6 = (char) uVar1;
                pcVar6 = pcVar6 + 1;
            } while ((char) uVar1 != '\n');
            *pcVar6 = '\0';
        }
        LAB_140900cd8:
        _unlock_file(param_3);
        return pcVar5;
    }
    return (char *) 0x0;
}


double FUN_140900cf0(double param_1, undefined8 param_2, double *param_3) {
    ulonglong uVar1;
    double dVar2;

    uVar1 = (ulonglong) param_1 & 0x7fffffffffffffff;
    if (uVar1 < 0x4340000000000000) {
        if (uVar1 < 0x3ff0000000000000) {
            dVar2 = (double) ((ulonglong) param_1 & 0x8000000000000000);
        } else {
            dVar2 = (double) (~((1 << (0x33U - (char) ((ulonglong) param_1 >> 0x34) & 0x3f)) - 1U) &
                              (ulonglong) param_1);
            param_1 = param_1 - dVar2;
        }
        *param_3 = dVar2;
    } else {
        *param_3 = param_1;
        if (uVar1 < 0x7ff0000000000001) {
            return (double) ((ulonglong) param_1 & 0x8000000000000000);
        }
        param_1 = param_1 + param_1;
    }
    return param_1;
}



// Library Function - Single Match
//  ldexp
//
// Libraries: Visual Studio 2012 Release, Visual Studio 2019 Release

double ldexp(double _X, int _Y) {
    int iVar1;
    undefined8 uVar2;
    int in_EDX;
    undefined8 extraout_XMM0_Qa;
    double dVar3;
    ushort uStackX14;
    int local_res18;

    dVar3 = _X;
    uVar2 = _ctrlfp(0x1f80, 0xffc0);
    uStackX14 = (ushort) ((ulonglong) _X >> 0x30);
    if ((uStackX14 & 0x7ff0) == 0x7ff0) {
        iVar1 = FUN_1407f83d0(dVar3);
        if (0 < iVar1) {
            if (iVar1 < 3) goto LAB_140900ecf;
            if (iVar1 == 3) {
                dVar3 = (double) FUN_1407f60d0(extraout_XMM0_Qa, SUB84(dVar3, 0), 0x19);
                return dVar3;
            }
        }
        uVar2 = 8;
        goto LAB_140900ef4;
    }
    if (dVar3 == 0.0) goto LAB_140900ecf;
    dVar3 = (double) FUN_1407f8264(dVar3);
    if (in_EDX < 0) {
        if (local_res18 < -0x80000000 - in_EDX) {
            LAB_140900eab:
            uVar2 = 0x12;
            goto LAB_140900ef4;
        }
        LAB_140900e7b:
        iVar1 = local_res18 + in_EDX;
        if (0xa00 < iVar1) goto LAB_140900edf;
        if (iVar1 < 0x401) {
            if (-0x9fe < iVar1) {
                if (-0x3fe < iVar1) {
                    dVar3 = (double) _set_exp();
                    LAB_140900ecf:
                    _ctrlfp(uVar2, 0xffc0);
                    return dVar3;
                }
                _set_exp(local_res18, iVar1 + 0x600);
            }
            goto LAB_140900eab;
        }
        _set_exp(local_res18, iVar1 + -0x600);
    } else {
        if (local_res18 <= 0x7fffffff - in_EDX) goto LAB_140900e7b;
        LAB_140900edf:
        _copysign(DAT_140c10a90, dVar3);
    }
    uVar2 = 0x11;
    LAB_140900ef4:
    dVar3 = (double) FUN_1407f5d08(uVar2, 0x19);
    return dVar3;
}



// Library Function - Single Match
//  frexp
//
// Library: Visual Studio 2012 Release

double frexp(double _X, int *_Y) {
    int iVar1;
    int *piVar2;
    undefined8 uVar3;
    undefined4 *in_RDX;
    undefined4 extraout_XMM0_Da;
    double dVar4;
    double extraout_XMM0_Qa;
    ushort uStackX14;

    if (in_RDX == (undefined4 *) 0x0) {
        piVar2 = _errno();
        *piVar2 = 0x16;
        FUN_1407dc370();
        dVar4 = 0.0;
    } else {
        dVar4 = _X;
        uVar3 = _ctrlfp(0x1f80, 0xffc0);
        uStackX14 = (ushort) ((ulonglong) _X >> 0x30);
        if ((uStackX14 & 0x7ff0) == 0x7ff0) {
            *in_RDX = 0xffffffff;
            iVar1 = FUN_1407f83d0();
            if (((iVar1 < 1) || (iVar1 < 3)) || (iVar1 != 3)) {
                dVar4 = (double) FUN_1407f5c18(8);
            } else {
                dVar4 = (double) FUN_1407f6070(extraout_XMM0_Da, SUB84(dVar4, 0), 0x17);
            }
        } else {
            FUN_1407f8264(SUB84(dVar4, 0));
            _ctrlfp(uVar3, 0xffc0);
            dVar4 = extraout_XMM0_Qa;
        }
    }
    return dVar4;
}


ulonglong FUN_140901008(char *param_1, char param_2, longlong param_3) {
    if (param_3 != 0) {
        do {
            if (*param_1 == param_2) break;
            param_1 = param_1 + 1;
            param_3 = param_3 + -1;
        } while (param_3 != 0);
    }
    return -(ulonglong) (param_3 != 0) & (ulonglong) param_1;
}


uint FUN_140901174(uint param_1) {
    uint uVar1;
    int iVar2;
    int *piVar3;
    undefined4 uVar4;
    undefined local_res8;
    undefined local_res9;
    undefined local_resa;
    byte local_res18;
    undefined local_res19;
    localeinfo_struct local_28;
    longlong local_18;
    char local_10;

    if (DAT_140c5f560 == 0) {
        if (param_1 - 0x61 < 0x1a) {
            param_1 = param_1 - 0x20;
        }
        return param_1;
    }
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *) &local_28, (localeinfo_struct *) 0x0);
    if (param_1 < 0x100) {
        if ((local_28.locinfo)->mb_cur_max < 2) {
            uVar1 = (local_28.locinfo)->pctype[(int) param_1] & 2;
        } else {
            uVar1 = FUN_1407ea448(param_1, 2, &local_28);
        }
        if (uVar1 == 0) goto LAB_14090108f;
        uVar1 = (uint) (local_28.locinfo)->pcumap[(int) param_1];
        goto LAB_140901151;
    }
    if ((local_28.locinfo)->mb_cur_max < 2) {
        LAB_1409010dd:
        piVar3 = _errno();
        uVar4 = 1;
        *piVar3 = 0x2a;
        local_res9 = 0;
        local_res8 = (char) param_1;
    } else {
        iVar2 = _isleadbyte_l((int) param_1 >> 8 & 0xff, &local_28);
        if (iVar2 == 0) goto LAB_1409010dd;
        local_resa = 0;
        uVar4 = 2;
        local_res8 = (char) (param_1 >> 8);
        local_res9 = (char) param_1;
    }
    iVar2 = FUN_1407f09f8(&local_28, (local_28.locinfo)->locale_name[2], 0x200, &local_res8, uVar4,
                          &local_res18, 3, (local_28.locinfo)->lc_codepage, 1);
    if (iVar2 == 0) {
        LAB_14090108f:
        if (local_10 == '\0') {
            return param_1;
        }
        *(uint *) (local_18 + 200) = *(uint *) (local_18 + 200) & 0xfffffffd;
        return param_1;
    }
    uVar1 = (uint) local_res18;
    if (iVar2 != 1) {
        uVar1 = (uint) CONCAT11(local_res18, local_res19);
    }
    LAB_140901151:
    if (local_10 != '\0') {
        *(uint *) (local_18 + 200) = *(uint *) (local_18 + 200) & 0xfffffffd;
    }
    return uVar1;
}


void FUN_140901194(byte *param_1, byte *param_2) {
    code *pcVar1;
    byte bVar2;
    ulonglong uVar3;
    undefined auStack88[32];
    byte abStack56[32];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack88;
    uVar3 = 0;
    do {
        if (0x1f < uVar3) {
            __report_rangecheckfailure();
            pcVar1 = (code *) swi(3);
            (*pcVar1)();
            return;
        }
        abStack56[uVar3] = 0;
        uVar3 = uVar3 + 1;
    } while ((longlong) uVar3 < 0x20);
    bVar2 = *param_2;
    while (bVar2 != 0) {
        abStack56[bVar2 >> 3] = abStack56[bVar2 >> 3] | '\x01' << (bVar2 & 7);
        param_2 = param_2 + 1;
        bVar2 = *param_2;
    }
    while ((bVar2 = *param_1, bVar2 != 0 && ((abStack56[bVar2 >> 3] & (byte) (1 << (bVar2 & 7))) == 0))
            ) {
        param_1 = param_1 + 1;
    }
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack88);
    return;
}


void FUN_140901238(int *param_1, int param_2) {
    code *pcVar1;
    int *piVar2;
    int iVar3;
    uint uVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    undefined auStack120[32];
    undefined8 local_58;
    longlong local_48;
    int local_40;
    int local_3c;
    int local_38;
    int local_34;
    int local_30;
    int local_2c;
    int local_28;
    int local_24;
    int local_20;
    int local_1c;
    int local_18;
    ulonglong local_10;

    local_10 = DAT_140c0f7b0 ^ (ulonglong) auStack120;
    local_40 = 0;
    local_3c = 0;
    if (param_1 == (int *) 0x0) {
        piVar2 = _errno();
        *piVar2 = 0x16;
        FUN_1407dc370();
        goto LAB_1409014c0;
    }
    local_48 = (longlong) param_1[5];
    if (local_48 - 0x45U < 0x409) {
        uVar4 = param_1[4];
        if (0xb < uVar4) {
            iVar3 = (int) uVar4 % 0xc;
            local_48 = local_48 + (int) uVar4 / 0xc;
            param_1[4] = iVar3;
            if (iVar3 < 0) {
                local_48 = local_48 + -1;
                param_1[4] = iVar3 + 0xc;
            }
            if (0x408 < local_48 - 0x45U) goto LAB_1409014b1;
        }
        lVar8 = (longlong) (int) (&DAT_140c1b170)[param_1[4]];
        uVar4 = (uint) (local_48 >> 0x3f) & 3;
        if ((((((int) local_48 + uVar4 & 3) == uVar4) &&
              (lVar5 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(local_48) >> 0x40, 0) + local_48,
                      local_48 != ((lVar5 >> 6) - (lVar5 >> 0x3f)) * 100)) ||
             (lVar5 = local_48 + 0x76c,
                     lVar6 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar5) >> 0x40, 0) + lVar5,
                     lVar5 == ((lVar6 >> 8) - (lVar6 >> 0x3f)) * 400)) && (1 < param_1[4])) {
            lVar8 = lVar8 + 1;
        }
        lVar5 = local_48 + -1;
        lVar6 = local_48 + 299 +
                SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(local_48 + 299) >> 0x40, 0);
        lVar7 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar5) >> 0x40, 0) + lVar5;
        local_48 = (longlong) *param_1 +
                   ((longlong) param_1[1] +
                    ((longlong) param_1[2] +
                     (((longlong) (lVar5 + (ulonglong) ((uint) (lVar5 >> 0x3f) & 3)) >> 2) + lVar8 +
                      ((((lVar6 >> 8) - (lVar6 >> 0x3f)) + (longlong) param_1[3]) -
                       ((lVar7 >> 6) - (lVar7 >> 0x3f))) + -0x63df + local_48 * 0x16d) * 0x18) * 0x3c) *
                   0x3c;
        if (param_2 == 0) {
            iVar3 = FUN_140901564(&local_38, &local_48);
            LAB_140901472:
            if (iVar3 == 0) {
                LAB_140901476:
                *param_1 = local_38;
                param_1[1] = local_34;
                param_1[2] = local_30;
                param_1[3] = local_2c;
                param_1[4] = local_28;
                param_1[5] = local_24;
                param_1[6] = local_20;
                param_1[7] = local_1c;
                param_1[8] = local_18;
                goto LAB_1409014c0;
            }
        } else {
            FUN_140905788();
            iVar3 = FUN_140905728(&local_40);
            if (iVar3 != 0) {
                local_58 = 0;
                FUN_1407dc390(0, 0, 0, 0);
                pcVar1 = (code *) swi(3);
                (*pcVar1)();
                return;
            }
            iVar3 = FUN_140905758(&local_3c);
            if (iVar3 != 0) {
                local_58 = 0;
                FUN_1407dc390(0, 0, 0, 0);
                pcVar1 = (code *) swi(3);
                (*pcVar1)();
                return;
            }
            local_48 = local_48 + local_3c;
            iVar3 = FUN_140901ab0(&local_38, &local_48);
            if (iVar3 == 0) {
                if ((0 < param_1[8]) || ((param_1[8] < 0 && (0 < local_18)))) {
                    local_48 = local_48 + local_40;
                    iVar3 = FUN_140901ab0(&local_38, &local_48);
                    goto LAB_140901472;
                }
                goto LAB_140901476;
            }
        }
    }
    LAB_1409014b1:
    piVar2 = _errno();
    *piVar2 = 0x16;
    LAB_1409014c0:
    FUN_1407db4f0(local_10 ^ (ulonglong) auStack120);
    return;
}


void FUN_140901510(undefined8 param_1) {
    FUN_140901238(param_1, 1);
    return;
}



// Library Function - Multiple Matches With Different Base Names
//  _gmtime32
//  _gmtime64
//  _localtime32
//  _localtime64
//
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release

tm *FID_conflict__localtime64(__time32_t *_Time) {
    int iVar1;
    tm *ptVar2;

    ptVar2 = __getgmtimebuf();
    if ((ptVar2 != (tm *) 0x0) && (iVar1 = FUN_140901564(ptVar2, _Time), iVar1 != 0)) {
        ptVar2 = (tm *) 0x0;
    }
    return ptVar2;
}


undefined8 FUN_140901564(int *param_1, longlong *param_2) {
    bool bVar1;
    uint uVar2;
    uint uVar3;
    int *piVar4;
    int iVar5;
    uint uVar6;
    int *piVar7;
    longlong lVar8;
    longlong lVar9;

    bVar1 = false;
    if ((param_1 == (int *) 0x0) || (FUN_1407e4830(param_1, 0xff, 0x24), param_2 == (longlong *) 0x0)) {
        piVar4 = _errno();
        *piVar4 = 0x16;
        FUN_1407dc370();
        return 0x16;
    }
    lVar8 = *param_2;
    if ((lVar8 < -0xa8c0) || (0x7934126cf < lVar8)) {
        piVar4 = _errno();
        *piVar4 = 0x16;
        return 0x16;
    }
    lVar9 = lVar8 + SUB168(SEXT816(-0x77ceb70a34ed8f47) * SEXT816(lVar8) >> 0x40, 0);
    iVar5 = (int) ((ulonglong) lVar9 >> 0x18) - (int) (lVar9 >> 0x3f);
    uVar6 = iVar5 + 0x46;
    uVar3 = iVar5 + 0x45;
    lVar8 = lVar8 + ((longlong) iVar5 * -0x16d -
                     (longlong)
                             (((iVar5 + 0x171) / 400 - (int) uVar3 / 100) +
                              ((int) (uVar3 + ((int) uVar3 >> 0x1f & 3U)) >> 2) + -0x11)) * 0x15180;
    if (lVar8 < 0) {
        uVar2 = uVar3 & 0x80000003;
        if ((int) uVar2 < 0) {
            uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
        }
        uVar6 = uVar3;
        if (((uVar2 != 0) || (uVar3 == ((int) uVar3 / 100) * 100)) &&
            (lVar9 = lVar8 + 0x1e13380, bVar1 = false, iVar5 + 0x7b1 != ((iVar5 + 0x7b1) / 400) * 400))
            goto LAB_140901723;
        lVar8 = lVar8 + 0x1e28500;
    } else {
        uVar3 = uVar6 & 0x80000003;
        if ((int) uVar3 < 0) {
            uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
        }
        if (((uVar3 != 0) || (uVar6 == ((int) uVar6 / 100) * 100)) &&
            (lVar9 = lVar8, iVar5 + 0x7b2 != ((iVar5 + 0x7b2) / 400) * 400))
            goto LAB_140901723;
    }
    bVar1 = true;
    lVar9 = lVar8;
    LAB_140901723:
    param_1[5] = uVar6;
    piVar4 = (int *) &DAT_140c1b1a8;
    iVar5 = (int) (lVar9 / 0x15180);
    param_1[7] = iVar5;
    lVar9 = lVar9 + (longlong) iVar5 * -0x15180;
    iVar5 = 1;
    piVar7 = piVar4;
    if (!bVar1) {
        piVar4 = &DAT_140c1b170;
        piVar7 = piVar4;
    }
    while (piVar4 = piVar4 + 1, *piVar4 < param_1[7]) {
        iVar5 = iVar5 + 1;
    }
    param_1[4] = iVar5 + -1;
    param_1[3] = param_1[7] - piVar7[iVar5 + -1];
    lVar8 = *param_2;
    param_1[8] = 0;
    param_1[6] = ((int) (lVar8 / 0x15180) + 4) % 7;
    iVar5 = (int) (lVar9 / 0xe10);
    param_1[2] = iVar5;
    lVar9 = lVar9 + (longlong) iVar5 * -0xe10;
    lVar8 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar9) >> 0x40, 0) + lVar9;
    iVar5 = (int) (lVar8 >> 5) - (int) (lVar8 >> 0x3f);
    param_1[1] = iVar5;
    *param_1 = (int) lVar9 + iVar5 * -0x3c;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  clock
//
// Library: Visual Studio 2012 Release

clock_t clock(void) {
    _FILETIME local_res8[4];

    GetSystemTimeAsFileTime(local_res8);
    return (clock_t) (((((ulonglong) local_res8[0].dwHighDateTime << 0x20) - _DAT_140c63468) +
                       (ulonglong) local_res8[0].dwLowDateTime) / 10000);
}


longlong FUN_1409018a4(LPSTR param_1, longlong param_2, LPCSTR param_3, longlong param_4,
                       undefined8 param_5, localeinfo_struct *param_6) {
    int iVar1;
    DWORD DVar2;
    int *piVar3;
    LPWSTR lpWideCharStr;
    LPCWSTR lpWideCharStr_00;
    longlong lVar4;
    longlong local_48[2];
    longlong local_38;
    char local_30;

    lVar4 = 0;
    lpWideCharStr = (LPWSTR) 0x0;
    lpWideCharStr_00 = (LPCWSTR) 0x0;
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *) local_48, param_6);
    if ((((param_1 == (LPSTR) 0x0) || (param_2 == 0)) || (*param_1 = '\0', param_3 == (LPCSTR) 0x0)) ||
        (param_4 == 0)) {
        piVar3 = _errno();
        *piVar3 = 0x16;
        FUN_1407dc370();
        goto LAB_140901a16;
    }
    iVar1 = MultiByteToWideChar(*(UINT *) (local_48[0] + 0xc), 0, param_3, -1, (LPWSTR) 0x0, 0);
    if (iVar1 == 0) {
        LAB_140901936:
        DVar2 = GetLastError();
        _dosmaperr(DVar2);
    } else {
        lpWideCharStr = (LPWSTR) FUN_1407e2c30();
        if (lpWideCharStr != (LPWSTR) 0x0) {
            iVar1 = MultiByteToWideChar(*(UINT *) (local_48[0] + 0xc), 0, param_3, -1, lpWideCharStr, iVar1);
            if (iVar1 == 0) goto LAB_140901936;
            lpWideCharStr_00 = (LPCWSTR) FUN_1407e2c30(param_2 * 2);
            if (lpWideCharStr_00 != (LPCWSTR) 0x0) {
                lVar4 = FUN_140906e48(lpWideCharStr_00, param_2, lpWideCharStr, param_4, param_5);
                if (lVar4 != 0) {
                    iVar1 = WideCharToMultiByte(*(UINT *) (local_48[0] + 0xc), 0, lpWideCharStr_00, -1, param_1,
                                                (int) param_2, (LPCSTR) 0x0, (LPBOOL) 0x0);
                    if (iVar1 == 0) {
                        DVar2 = GetLastError();
                        _dosmaperr(DVar2);
                        lVar4 = 0;
                    }
                }
            }
        }
    }
    free(lpWideCharStr_00);
    free(lpWideCharStr);
    LAB_140901a16:
    if (local_30 != '\0') {
        *(uint *) (local_38 + 200) = *(uint *) (local_38 + 200) & 0xfffffffd;
    }
    return lVar4;
}


void FUN_140901a4c(void) {
    FUN_1409018a4();
    return;
}



// Library Function - Multiple Matches With Different Base Names
//  _gmtime32
//  _gmtime64
//  _localtime32
//  _localtime64
//
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release

tm *FID_conflict__localtime64(__time32_t *_Time) {
    int iVar1;
    tm *ptVar2;

    ptVar2 = __getgmtimebuf();
    if ((ptVar2 != (tm *) 0x0) && (iVar1 = FUN_140901ab0(ptVar2, _Time), iVar1 != 0)) {
        ptVar2 = (tm *) 0x0;
    }
    return ptVar2;
}


undefined8 FUN_140901ab0(int *param_1, longlong *param_2) {
    code *pcVar1;
    int iVar2;
    int *piVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong lVar6;
    undefined *puVar7;
    int local_res8[4];
    int local_res18[2];
    int local_res20[2];
    longlong local_28[2];

    local_res18[0] = 0;
    local_res20[0] = 0;
    local_res8[0] = 0;
    if ((param_1 == (int *) 0x0) || (FUN_1407e4830(param_1, 0xff, 0x24), param_2 == (longlong *) 0x0)) {
        piVar3 = _errno();
        *piVar3 = 0x16;
        FUN_1407dc370();
        return 0x16;
    }
    if ((*param_2 < 0) || (0x793406fff < *param_2)) {
        piVar3 = _errno();
        *piVar3 = 0x16;
        return 0x16;
    }
    FUN_140905788();
    iVar2 = FUN_1409056f8(local_res18);
    if (iVar2 != 0) {
        FUN_1407dc390(0, 0, 0, 0, 0);
        pcVar1 = (code *) swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
    }
    iVar2 = FUN_140905728(local_res20);
    if (iVar2 != 0) {
        FUN_1407dc390(0, 0, 0, 0, 0);
        pcVar1 = (code *) swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
    }
    iVar2 = FUN_140905758(local_res8);
    if (iVar2 != 0) {
        FUN_1407dc390(0, 0, 0, 0, 0);
        pcVar1 = (code *) swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
    }
    if (*param_2 < 0x3f481) {
        uVar4 = FUN_140901564(param_1, param_2);
        if ((int) uVar4 != 0) {
            return uVar4;
        }
        if ((local_res18[0] != 0) && (iVar2 = FUN_1409057c4(param_1), iVar2 != 0)) {
            param_1[8] = 1;
            local_res8[0] = local_res8[0] + local_res20[0];
        }
        lVar5 = (longlong) *param_1 - (longlong) local_res8[0];
        lVar6 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar5) >> 0x40, 0) + lVar5;
        iVar2 = (int) lVar5 + ((int) (lVar6 >> 5) - (int) (lVar6 >> 0x3f)) * -0x3c;
        *param_1 = iVar2;
        if (iVar2 < 0) {
            lVar5 = lVar5 + -0x3c;
            *param_1 = iVar2 + 0x3c;
        }
        lVar5 = lVar5 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar5) >> 0x40, 0);
        lVar5 = ((lVar5 >> 5) - (lVar5 >> 0x3f)) + (longlong) param_1[1];
        lVar6 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar5) >> 0x40, 0) + lVar5;
        iVar2 = (int) lVar5 + ((int) (lVar6 >> 5) - (int) (lVar6 >> 0x3f)) * -0x3c;
        param_1[1] = iVar2;
        if (iVar2 < 0) {
            lVar5 = lVar5 + -0x3c;
            param_1[1] = iVar2 + 0x3c;
        }
        lVar5 = lVar5 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar5) >> 0x40, 0);
        puVar7 = (undefined *) (((lVar5 >> 5) - (lVar5 >> 0x3f)) + (longlong) param_1[2]);
        iVar2 = (int) puVar7 + (int) ((longlong) puVar7 / 0x18) * -0x18;
        param_1[2] = iVar2;
        if (iVar2 < 0) {
            puVar7 = &DAT_ffffffffffffffe8 + (longlong) puVar7;
            param_1[2] = iVar2 + 0x18;
        }
        lVar5 = (longlong) puVar7 / 6 + ((longlong) puVar7 >> 0x3f);
        lVar5 = (lVar5 >> 2) - (lVar5 >> 0x3f);
        iVar2 = (int) lVar5;
        if (lVar5 < 1) {
            if (-1 < lVar5) {
                return 0;
            }
            param_1[3] = param_1[3] + iVar2;
            param_1[6] = (param_1[6] + 7 + iVar2) % 7;
            if (param_1[3] < 1) {
                param_1[4] = 0xb;
                param_1[3] = param_1[3] + 0x1f;
                param_1[7] = param_1[7] + iVar2 + 0x16d;
                param_1[5] = param_1[5] + -1;
                return 0;
            }
        } else {
            param_1[3] = param_1[3] + iVar2;
            param_1[6] = (param_1[6] + iVar2) % 7;
        }
        param_1[7] = param_1[7] + iVar2;
        return 0;
    }
    local_28[0] = *param_2 - (longlong) local_res8[0];
    uVar4 = FUN_140901564(param_1, local_28);
    if ((int) uVar4 != 0) {
        return uVar4;
    }
    if (local_res18[0] == 0) {
        return 0;
    }
    iVar2 = FUN_1409057c4(param_1);
    if (iVar2 == 0) {
        return 0;
    }
    local_28[0] = local_28[0] - local_res20[0];
    uVar4 = FUN_140901564(param_1, local_28);
    if ((int) uVar4 == 0) {
        param_1[8] = 1;
        return 0;
    }
    return uVar4;
}



// Library Function - Single Match
//  _difftime64
//
// Library: Visual Studio 2012 Release

double _difftime64(__time64_t _Time1, __time64_t _Time2) {
    int *piVar1;
    double dVar2;

    if ((_Time2 < 0) || (_Time1 < 0)) {
        piVar1 = _errno();
        dVar2 = 0.0;
        *piVar1 = 0x16;
    } else {
        dVar2 = (double) (_Time1 - _Time2);
    }
    return dVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _getenv_helper_nolock
//
// Library: Visual Studio 2012 Release

char *_getenv_helper_nolock(char *param_1) {
    int iVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    longlong *plVar4;

    if (((_DAT_140dc6364 != 0) &&
         ((DAT_140c5f500 != (longlong *) 0x0 ||
           (((DAT_140c5f508 != 0 && (iVar1 = FUN_140906ffc(), iVar1 == 0)) &&
             (DAT_140c5f500 != (longlong *) 0x0)))))) && (plVar4 = DAT_140c5f500, param_1 != (char *) 0x0)) {
        uVar2 = FUN_1407e1990(param_1);
        for (; *plVar4 != 0; plVar4 = plVar4 + 1) {
            uVar3 = FUN_1407e1990();
            if (((uVar2 < uVar3) && (*(char *) (*plVar4 + uVar2) == '=')) &&
                (iVar1 = FUN_1409070f0(*plVar4, param_1, uVar2), iVar1 == 0)) {
                return (char *) (*plVar4 + 1 + uVar2);
            }
        }
    }
    return (char *) 0x0;
}



// Library Function - Single Match
//  getenv
//
// Library: Visual Studio 2012 Release

char *getenv(char *_VarName) {
    int *piVar1;
    size_t sVar2;
    char *pcVar3;

    if ((_VarName != (char *) 0x0) && (sVar2 = strnlen(_VarName, 0x7fff), sVar2 < 0x7fff)) {
        _lock(7);
        pcVar3 = _getenv_helper_nolock(_VarName);
        FUN_1407e2528(7);
        return pcVar3;
    }
    piVar1 = _errno();
    *piVar1 = 0x16;
    FUN_1407dc370();
    return (char *) 0x0;
}


void FUN_140901efc(short *param_1, ulonglong param_2, longlong *param_3) {
    ulonglong _Size;
    undefined8 uVar1;
    int iVar2;
    int *piVar3;
    longlong lVar4;
    undefined4 *puVar5;
    ulonglong uVar6;
    undefined *puVar7;
    undefined *puVar8;
    undefined auStack88[32];
    undefined8 local_38;
    undefined4 local_30;
    ulonglong local_28[2];

    puVar8 = auStack88;
    puVar7 = auStack88;
    local_28[0] = DAT_140c0f7b0 ^ (ulonglong) local_28;
    puVar5 = (undefined4 *) 0x0;
    if (param_1 == (short *) 0x0) {
        LAB_140901f3a:
        piVar3 = _errno();
        iVar2 = 0x16;
    } else {
        uVar6 = FUN_1407e6cbc();
        if (param_2 <= uVar6) {
            *param_1 = 0;
            goto LAB_140901f3a;
        }
        if (*(longlong *) (*param_3 + 0x138) == 0) {
            for (; puVar8 = auStack88, *param_1 != 0; param_1 = param_1 + 1) {
                if ((ushort) (*param_1 - 0x61U) < 0x1a) {
                    *param_1 = *param_1 + -0x20;
                }
            }
            goto LAB_1409020c8;
        }
        local_30 = 0;
        local_38 = 0;
        iVar2 = FUN_1407ed230(*(longlong *) (*param_3 + 0x138), 0x200, param_1, 0xffffffff);
        uVar6 = (ulonglong) iVar2;
        if (iVar2 == 0) {
            piVar3 = _errno();
            *piVar3 = 0x2a;
            LAB_140901f9d:
            *(undefined8 *) (puVar8 + -8) = 0x140901fa2;
            _errno();
            goto LAB_1409020c8;
        }
        if (uVar6 <= param_2) {
            puVar8 = auStack88;
            if ((iVar2 < 1) || (puVar8 = auStack88, 0xffffffffffffffe0 / uVar6 < 2)) {
                LAB_140902059:
                if (puVar5 != (undefined4 *) 0x0) {
                    uVar1 = *(undefined8 *) (*param_3 + 0x138);
                    *(int *) (puVar8 + 0x28) = iVar2;
                    *(undefined4 **) (puVar8 + 0x20) = puVar5;
                    *(undefined8 *) (puVar8 + -8) = 0x140902093;
                    iVar2 = FUN_1407ed230(uVar1, 0x200, param_1, 0xffffffff);
                    if (iVar2 == 0) {
                        *(undefined8 *) (puVar8 + -8) = 0x1409020ae;
                        piVar3 = _errno();
                        *piVar3 = 0x2a;
                    } else {
                        *(undefined8 *) (puVar8 + -8) = 0x1409020a5;
                        FUN_1407e6bf4(param_1, param_2, puVar5);
                    }
                    if (puVar5[-4] == 0xdddd) {
                        *(undefined8 *) (puVar8 + -8) = 0x1409020c6;
                        free(puVar5 + -4);
                    }
                    goto LAB_1409020c8;
                }
            } else {
                _Size = uVar6 * 2 + 0x10;
                if (0x400 < _Size) {
                    puVar5 = (undefined4 *) malloc(_Size);
                    puVar8 = auStack88;
                    if (puVar5 != (undefined4 *) 0x0) {
                        *puVar5 = 0xdddd;
                        goto LAB_140902050;
                    }
                    goto LAB_140902059;
                }
                lVar4 = FUN_1407f0f60(_Size, 0xffffffffffffffe0 % uVar6);
                lVar4 = -lVar4;
                puVar8 = auStack88 + lVar4;
                puVar7 = auStack88 + lVar4;
                puVar5 = (undefined4 *) ((longlong) local_28 + lVar4);
                if (puVar5 != (undefined4 *) 0x0) {
                    *puVar5 = 0xcccc;
                    LAB_140902050:
                    puVar5 = puVar5 + 4;
                    puVar8 = puVar7;
                    goto LAB_140902059;
                }
            }
            *(undefined8 *) (puVar8 + -8) = 0x140902063;
            piVar3 = _errno();
            *piVar3 = 0xc;
            goto LAB_140901f9d;
        }
        *param_1 = 0;
        piVar3 = _errno();
        iVar2 = 0x22;
    }
    *piVar3 = iVar2;
    FUN_1407dc370();
    puVar8 = auStack88;
    LAB_1409020c8:
    uVar6 = local_28[0] ^ (ulonglong) local_28;
    *(undefined8 *) (puVar8 + -8) = 0x1409020d4;
    FUN_1407db4f0(uVar6);
    return;
}


short *FUN_1409020f0(short *param_1) {
    int *piVar1;
    short *psVar2;

    if (DAT_140c5f560 == 0) {
        psVar2 = param_1;
        if (param_1 == (short *) 0x0) {
            piVar1 = _errno();
            *piVar1 = 0x16;
            FUN_1407dc370();
            param_1 = (short *) 0x0;
        } else {
            for (; *psVar2 != 0; psVar2 = psVar2 + 1) {
                if ((ushort) (*psVar2 - 0x61U) < 0x1a) {
                    *psVar2 = *psVar2 + -0x20;
                }
            }
        }
    } else {
        FUN_140902150(param_1, 0xffffffffffffffff);
    }
    return param_1;
}


void FUN_140902150(undefined8 param_1, undefined8 param_2, localeinfo_struct *param_3) {
    _LocaleUpdate local_28[16];
    longlong local_18;
    char local_10;

    _LocaleUpdate::_LocaleUpdate(local_28, param_3);
    FUN_140901efc(param_1, param_2, local_28);
    if (local_10 != '\0') {
        *(uint *) (local_18 + 200) = *(uint *) (local_18 + 200) & 0xfffffffd;
    }
    return;
}


undefined8 FUN_14090219c(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
    uint in_R9D;
    undefined8 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;

    uVar3 = (undefined4) ((ulonglong) param_3 >> 0x20);
    uVar2 = (undefined4) param_3;
    if (in_R9D == 2) {
        uVar5 = 0x22;
        uVar1 = 2;
        uVar4 = 4;
    } else {
        if (in_R9D < 3) goto LAB_14090228d;
        if (in_R9D < 7) {
            uVar5 = 0x21;
            uVar1 = 1;
            uVar4 = 8;
        } else if (in_R9D < 9) {
            uVar5 = 0x22;
            uVar1 = 4;
            uVar4 = 0x12;
        } else {
            if (in_R9D != 9) goto LAB_14090228d;
            uVar5 = 0x22;
            uVar1 = 3;
            uVar4 = 0x11;
        }
    }
    FUN_1407efc20(&DAT_140963af8, 0x1d, param_3, uVar1, uVar4, uVar5, param_1, param_2, 2);
    LAB_14090228d:
    return CONCAT44(uVar3, uVar2);
}


undefined8 FUN_14090229c(undefined4 param_1, undefined4 param_2, undefined8 param_3) {
    uint in_R9D;
    undefined8 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;

    uVar3 = (undefined4) ((ulonglong) param_3 >> 0x20);
    uVar2 = (undefined4) param_3;
    if (in_R9D == 1) {
        uVar5 = 0;
        uVar1 = 0;
        LAB_14090238f:
        uVar4 = 8;
    } else if (in_R9D == 2) {
        uVar5 = 0x22;
        uVar1 = 2;
        uVar4 = 4;
    } else {
        if (in_R9D < 3) goto LAB_1409023b6;
        if (in_R9D < 7) {
            uVar5 = 0x21;
            uVar1 = 1;
            goto LAB_14090238f;
        }
        if (in_R9D == 7) {
            uVar5 = 0x22;
            uVar1 = 4;
            uVar4 = 0x12;
        } else {
            if (in_R9D != 9) goto LAB_1409023b6;
            uVar5 = 0x22;
            uVar1 = 3;
            uVar4 = 0x11;
        }
    }
    FUN_1407efd48(&DAT_1409cc088, 0x1d, uVar2, uVar1, uVar4, uVar5, param_1, param_2, 2);
    LAB_1409023b6:
    return CONCAT44(uVar3, uVar2);
}


undefined8
FUN_1409023c4(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
              int param_5) {
    undefined8 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;

    uVar3 = (undefined4) ((ulonglong) param_2 >> 0x20);
    uVar2 = (undefined4) param_2;
    if (param_5 == 1) {
        uVar1 = 1;
        uVar5 = 0x21;
        uVar4 = 0;
    } else if (param_5 == 2) {
        uVar1 = 4;
        uVar5 = 0x22;
        uVar4 = 0x12;
    } else {
        if (param_5 != 3) goto LAB_140902485;
        uVar1 = 3;
        uVar5 = 0x22;
        uVar4 = 0x11;
    }
    FUN_1407efc20(&DAT_140963af4, 0x14, param_2, uVar1, uVar4, uVar5, param_1, 0, 1);
    LAB_140902485:
    return CONCAT44(uVar3, uVar2);
}


undefined8
FUN_140902494(undefined4 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
              int param_5) {
    undefined8 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;

    uVar3 = (undefined4) ((ulonglong) param_2 >> 0x20);
    uVar2 = (undefined4) param_2;
    if (param_5 == 1) {
        uVar1 = 1;
        uVar5 = 0x21;
        uVar4 = 0;
    } else if (param_5 == 2) {
        uVar1 = 4;
        uVar5 = 0x22;
        uVar4 = 0x12;
    } else {
        if (param_5 != 3) goto LAB_140902564;
        uVar1 = 3;
        uVar5 = 0x22;
        uVar4 = 0x11;
    }
    FUN_1407efd48(&DAT_1409cc090, 0x14, uVar2, uVar1, uVar4, uVar5, param_1, 0, 1);
    LAB_140902564:
    return CONCAT44(uVar3, uVar2);
}


void FUN_140902580(ulonglong param_1, double *param_2, uint *param_3) {
    char cVar1;
    ulonglong *puVar2;
    ulonglong uVar3;
    uint uVar4;
    ulonglong uVar5;
    longlong lVar6;
    int iVar7;
    int iVar8;
    ulonglong uVar9;
    int iVar10;
    double local_98[2];
    ulonglong local_88;
    ulonglong local_80[9];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) local_98;
    local_80[3] = 0;
    iVar10 = ((uint) (param_1 >> 0x34) & 0x7ff) - 0x3ff;
    iVar8 = iVar10 / 0x24;
    uVar9 = (param_1 & 0xfffffe0000000 | 0x10000000000000) >> 0x1d;
    iVar10 = iVar10 % 0x24;
    lVar6 = (longlong) (iVar8 + 3);
    uVar5 = *(longlong *) (&DAT_140c1ac48 + lVar6 * 8) * uVar9 +
            (*(longlong *) (&DAT_140c1ac50 + lVar6 * 8) * uVar9 >> 0x24);
    local_80[2] = *(longlong *) (&DAT_140c1ac50 + lVar6 * 8) * uVar9 & 0xfffffffff;
    uVar3 = *(longlong *) (&DAT_140c1ac40 + lVar6 * 8) * uVar9 + (uVar5 >> 0x24);
    local_80[1] = uVar5 & 0xfffffffff;
    local_80[0] = uVar3 & 0xfffffffff;
    iVar7 = 1;
    local_88 = *(longlong *) (&DAT_140c1ac50 + (longlong) iVar8 * 8) * uVar9 + (uVar3 >> 0x24) &
               0xfffffffff;
    cVar1 = (char) iVar10;
    uVar3 = (local_88 << 0x24 | local_80[0]) >> (0x23U - cVar1 & 0x3f);
    uVar4 = (int) ((uint) uVar3 & 7) >> 1;
    if ((uVar3 & 1) == 0) {
        *param_3 = uVar4;
        uVar5 = (1 << (0x24U - cVar1 & 0x3f)) - 1U & local_80[0];
        if (uVar5 < 0x10000) {
            puVar2 = local_80;
            do {
                puVar2 = puVar2 + 1;
                iVar7 = iVar7 + 1;
                uVar5 = uVar5 << 0x24 | *puVar2;
            } while (uVar5 < 0x10000);
        }
        uVar9 = local_80[iVar7];
    } else {
        *param_3 = uVar4 + 1 & 3;
        uVar5 = (1 << (0x24U - cVar1 & 0x3f)) - 1U & ~local_80[0];
        if (uVar5 < 0x10000) {
            puVar2 = local_80;
            do {
                puVar2 = puVar2 + 1;
                iVar7 = iVar7 + 1;
                uVar5 = ~*puVar2 & 0xfffffffff | uVar5 << 0x24;
            } while (uVar5 < 0x10000);
        }
        uVar9 = ~local_80[iVar7] & 0xfffffffff;
    }
    iVar8 = 0;
    for (; uVar5 < 0x400000000000; uVar5 = uVar5 << 6) {
        iVar8 = iVar8 + 6;
    }
    for (; uVar5 < 0x10000000000000; uVar5 = uVar5 * 2) {
        iVar8 = iVar8 + 1;
    }
    local_98[0] = (double) ((longlong) (((iVar10 + iVar7 * -0x24) - iVar8) + 0x34) + 0x3ff << 0x34 |
                            (uVar9 >> (0x24U - (char) iVar8 & 0x3f) | uVar5) & 0xfffffffffffff);
    if ((uVar3 & 1) != 0) {
        local_98[0] = (double) ((ulonglong) local_98[0] | 0x8000000000000000);
    }
    *param_2 = local_98[0] * 1.570796326794897;
    FUN_1407db4f0(local_38 ^ (ulonglong) local_98);
    return;
}


ulonglong FUN_1409027f0(ulonglong param_1) {
    ulonglong local_res8;
    undefined4 uVar1;

    local_res8 = param_1;
    if ((param_1 & 0x7ff0000000000000) == 0x7ff0000000000000) {
        if ((param_1 & 0xfffffffffffff) == 0) {
            local_res8 = 0xfff8000000000000;
            uVar1 = 8;
        } else {
            if ((~(byte) (uint) (param_1 >> 0x33) & 1) != 0) {
                local_res8 = param_1 | 0x8000000000000;
            }
            uVar1 = 0;
        }
        FUN_1407efc20(&DAT_140963b4c, 0x12, local_res8, 1, uVar1, 0x21, param_1, 0, 1);
    }
    return local_res8;
}


uint FUN_140902804(uint param_1) {
    uint uVar1;
    undefined4 uVar2;

    if ((param_1 & 0x7f800000) != 0x7f800000) {
        return param_1;
    }
    if ((param_1 & 0x7fffff) == 0) {
        uVar1 = 0xffc00000;
    } else {
        if ((~(byte) (param_1 >> 0x16) & 1) == 0) {
            uVar2 = 0;
            uVar1 = param_1;
            goto LAB_140902981;
        }
        uVar1 = param_1 | 0x400000;
    }
    uVar2 = 8;
    LAB_140902981:
    FUN_1407efd48(&DAT_1409cc2b0, 0x12, uVar1, 1, uVar2, 0x21, param_1, 0, 1);
    return uVar1;
}


ulonglong FUN_140902818(ulonglong param_1) {
    ulonglong uStackX8;
    undefined4 uVar1;

    uStackX8 = param_1;
    if ((param_1 & 0x7ff0000000000000) == 0x7ff0000000000000) {
        if ((param_1 & 0xfffffffffffff) == 0) {
            uStackX8 = 0xfff8000000000000;
            uVar1 = 8;
        } else {
            if ((~(byte) (uint) (param_1 >> 0x33) & 1) != 0) {
                uStackX8 = param_1 | 0x8000000000000;
            }
            uVar1 = 0;
        }
        FUN_1407efc20(&DAT_140963b48, 0x1e, uStackX8, 1, uVar1, 0x21, param_1, 0, 1);
    }
    return uStackX8;
}


uint FUN_14090299c(uint param_1) {
    uint uVar1;
    undefined4 uVar2;

    if ((param_1 & 0x7f800000) != 0x7f800000) {
        return param_1;
    }
    if ((param_1 & 0x7fffff) == 0) {
        uVar1 = 0xffc00000;
    } else {
        if ((~(byte) (param_1 >> 0x16) & 1) == 0) {
            uVar2 = 0;
            uVar1 = param_1;
            goto LAB_140902981;
        }
        uVar1 = param_1 | 0x400000;
    }
    uVar2 = 8;
    LAB_140902981:
    FUN_1407efd48(&DAT_1409cc2a8, 0x1e, uVar1, 1, uVar2, 0x21, param_1, 0, 1);
    return uVar1;
}


void FUN_140903d10(void) {
    FUN_140903d70();
    return;
}


void FUN_140903d30(void) {
    FUN_140903e5c();
    return;
}


void FUN_140903d50(void) {
    FUN_140903d70();
    return;
}


undefined8
FUN_140903d70(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
              int param_5_00, undefined4 param_6, undefined8 param_5) {
    undefined8 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;

    uVar3 = (undefined4) ((ulonglong) param_2 >> 0x20);
    uVar2 = (undefined4) param_2;
    if (param_5_00 == 1) {
        uVar1 = 2;
        uVar5 = 0x22;
        uVar4 = 4;
    } else {
        if (param_5_00 == 2) {
            uVar4 = 8;
        } else {
            if (param_5_00 != 3) goto LAB_140903e2c;
            uVar4 = 0;
        }
        uVar5 = 0x21;
        uVar1 = 1;
    }
    FUN_1407efc20(param_5, param_6, param_2, uVar1, uVar4, uVar5, param_1, 0, 1);
    LAB_140903e2c:
    return CONCAT44(uVar3, uVar2);
}


void FUN_140903e3c(void) {
    FUN_140903e5c();
    return;
}


undefined8
FUN_140903e5c(uint param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, int param_5_00,
              undefined4 param_6, undefined8 param_5) {
    int iVar1;
    int iVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;

    uVar4 = (undefined4) ((ulonglong) param_2 >> 0x20);
    uVar3 = (undefined4) param_2;
    if (param_5_00 == 1) {
        iVar2 = 2;
        uVar6 = 0x22;
        uVar5 = 4;
        LAB_140903f43:
        iVar1 = 1;
    } else {
        iVar1 = param_5_00 + -2;
        if (iVar1 == 0) {
            iVar2 = 1;
            uVar6 = 0x21;
            uVar5 = 8;
            goto LAB_140903f43;
        }
        if (param_5_00 != 3) goto LAB_140903f61;
        uVar6 = 0x21;
        iVar2 = iVar1;
        if ((byte) ((byte) iVar1 & ~(byte) (param_1 >> 0x16)) == 0) {
            uVar5 = 0;
        } else {
            uVar5 = 8;
        }
    }
    FUN_1407efd48(param_5, param_6, uVar3, iVar2, uVar5, uVar6, param_1, 0, iVar1);
    LAB_140903f61:
    return CONCAT44(uVar4, uVar3);
}


void FUN_140903f70(ulonglong param_1, undefined8 param_2, double *param_3, double *param_4,
                   uint *param_5) {
    byte bVar1;
    char cVar2;
    ulonglong *puVar3;
    double dVar4;
    double dVar5;
    ulonglong uVar6;
    uint uVar7;
    ulonglong uVar8;
    longlong lVar9;
    ulonglong uVar10;
    int iVar11;
    int iVar12;
    double dVar13;
    undefined4 uVar14;
    undefined4 uVar15;
    double local_1028[2];
    ulonglong local_1018;
    ulonglong local_1010[5];
    ulonglong local_fe8;
    ulonglong local_fe0;
    ulonglong local_fd8;
    ulonglong local_fd0;
    ulonglong local_fc8;
    ulonglong local_fc0;
    ulonglong local_fb8;
    ulonglong local_fb0;
    ulonglong local_fa8;
    ulonglong local_fa0;
    ulonglong local_f98;
    ulonglong local_f90;
    ulonglong local_f88;
    undefined8 local_f80;
    ulonglong local_78;

    local_78 = DAT_140c0f7b0 ^ (ulonglong) local_1028;
    local_f80 = 0;
    uVar10 = param_1 & 0xfffffffffffff | 0x10000000000000;
    iVar11 = ((uint) (param_1 >> 0x34) & 0x7ff) - 0x3ff;
    iVar12 = iVar11 % 10;
    lVar9 = (longlong) (iVar11 / 10 + 0x12);
    uVar8 = *(longlong *) (&DAT_140c1acb8 + lVar9 * 8) * uVar10 +
            (*(longlong *) (&DAT_140c1acc0 + lVar9 * 8) * uVar10 >> 10);
    local_f88 = *(longlong *) (&DAT_140c1acc0 + lVar9 * 8) * uVar10 & 0x3ff;
    uVar6 = *(longlong *) (&DAT_140c1acb0 + lVar9 * 8) * uVar10 + (uVar8 >> 10);
    local_f90 = uVar8 & 0x3ff;
    uVar8 = *(longlong *) (&DAT_140c1aca8 + lVar9 * 8) * uVar10 + (uVar6 >> 10);
    local_f98 = uVar6 & 0x3ff;
    uVar6 = *(longlong *) (&DAT_140c1aca0 + lVar9 * 8) * uVar10 + (uVar8 >> 10);
    local_fa0 = uVar8 & 0x3ff;
    uVar8 = *(longlong *) (&DAT_140c1ac98 + lVar9 * 8) * uVar10 + (uVar6 >> 10);
    local_fa8 = uVar6 & 0x3ff;
    uVar6 = *(longlong *) (&DAT_140c1ac90 + lVar9 * 8) * uVar10 + (uVar8 >> 10);
    local_fb0 = uVar8 & 0x3ff;
    uVar8 = *(longlong *) (&DAT_140c1ac88 + lVar9 * 8) * uVar10 + (uVar6 >> 10);
    local_fb8 = uVar6 & 0x3ff;
    local_fc0 = uVar8 & 0x3ff;
    uVar6 = *(longlong *) (&DAT_140c1ac80 + lVar9 * 8) * uVar10 + (uVar8 >> 10);
    local_fc8 = uVar6 & 0x3ff;
    uVar6 = *(longlong *) (&DAT_140c1ac78 + lVar9 * 8) * uVar10 + (uVar6 >> 10);
    local_fd0 = uVar6 & 0x3ff;
    uVar6 = *(longlong *) (&DAT_140c1ac70 + lVar9 * 8) * uVar10 + (uVar6 >> 10);
    local_fd8 = uVar6 & 0x3ff;
    uVar6 = *(longlong *) (&DAT_140c1ac68 + lVar9 * 8) * uVar10 + (uVar6 >> 10);
    local_fe0 = uVar6 & 0x3ff;
    uVar6 = *(longlong *) (&DAT_140c1ac60 + lVar9 * 8) * uVar10 + (uVar6 >> 10);
    local_fe8 = uVar6 & 0x3ff;
    uVar6 = *(longlong *) (&DAT_140c1ac58 + lVar9 * 8) * uVar10 + (uVar6 >> 10);
    local_1010[4] = uVar6 & 0x3ff;
    uVar6 = *(longlong *) (&DAT_140c1ac50 + lVar9 * 8) * uVar10 + (uVar6 >> 10);
    local_1010[3] = uVar6 & 0x3ff;
    uVar6 = *(longlong *) (&DAT_140c1ac48 + lVar9 * 8) * uVar10 + (uVar6 >> 10);
    local_1010[2] = uVar6 & 0x3ff;
    uVar6 = *(longlong *) (&DAT_140c1ac40 + lVar9 * 8) * uVar10 + (uVar6 >> 10);
    local_1010[1] = uVar6 & 0x3ff;
    uVar6 = *(longlong *) (&DAT_140c1ac38 + lVar9 * 8) * uVar10 + (uVar6 >> 10);
    local_1010[0] = uVar6 & 0x3ff;
    local_1018 = *(longlong *) (&DAT_140c1ac30 + lVar9 * 8) * uVar10 + (uVar6 >> 10) & 0x3ff;
    cVar2 = -(char) iVar12;
    bVar1 = cVar2 + 10;
    uVar6 = (local_1018 << 10 | local_1010[0]) >> (cVar2 + 9U & 0x3f);
    iVar11 = 1;
    uVar7 = (int) ((uint) uVar6 & 7) >> 1;
    if ((uVar6 & 1) == 0) {
        *param_5 = uVar7;
        uVar8 = (1 << (bVar1 & 0x3f)) - 1U & local_1010[0];
        if (uVar8 < 0x20000000000000) {
            puVar3 = local_1010;
            do {
                puVar3 = puVar3 + 1;
                iVar11 = iVar11 + 1;
                uVar8 = uVar8 << 10 | *puVar3;
            } while (uVar8 < 0x20000000000000);
        }
        uVar10 = local_1010[iVar11];
    } else {
        *param_5 = uVar7 + 1 & 3;
        uVar8 = (1 << (bVar1 & 0x3f)) - 1U & ~local_1010[0];
        if (uVar8 < 0x20000000000000) {
            puVar3 = local_1010;
            do {
                puVar3 = puVar3 + 1;
                iVar11 = iVar11 + 1;
                uVar8 = ~*puVar3 & 0x3ff | uVar8 << 10;
            } while (uVar8 < 0x20000000000000);
        }
        uVar10 = ~local_1010[iVar11];
    }
    uVar10 = uVar10 << 0x36;
    iVar11 = iVar12 + iVar11 * -10 + 0x34;
    for (; 0x1fffffffffffff < uVar8; uVar8 = uVar8 >> 1) {
        iVar11 = iVar11 + 1;
        uVar10 = uVar8 << 0x3f | uVar10 >> 1;
    }
    dVar4 = (double) ((longlong) iVar11 + 0x3ff << 0x34 | uVar8 & 0xfffffffffffff);
    if ((uVar6 & 1) != 0) {
        dVar4 = (double) ((ulonglong) dVar4 | 0x8000000000000000);
    }
    dVar5 = (double) ((longlong) iVar11 + 0x3ca << 0x34);
    dVar5 = (double) (uVar10 >> 0xc | (ulonglong) dVar5) - dVar5;
    if ((uVar6 & 1) == 0) {
        dVar5 = dVar5 * 2.0;
        uVar14 = SUB84(dVar5, 0);
        uVar15 = (undefined4) ((ulonglong) dVar5 >> 0x20);
    } else {
        dVar5 = dVar5 * -2.0;
        uVar14 = SUB84(dVar5, 0);
        uVar15 = (undefined4) ((ulonglong) dVar5 >> 0x20);
    }
    local_1028[0] = (double) ((ulonglong) dVar4 & 0xfffffffff8000000);
    dVar5 = dVar4 * 1.570796326794897;
    dVar13 = ((double) ((ulonglong) dVar4 & 0xfffffffff8000000) * 1.570796310901642 - dVar5) +
             (dVar4 - local_1028[0]) * 1.570796310901642 + local_1028[0] * 1.589325471229586e-08 +
             (dVar4 - local_1028[0]) * 1.589325471229586e-08 +
             (double) CONCAT44(uVar15, uVar14) * 1.570796326794897 + dVar4 * 6.123233995736765e-17;
    dVar4 = dVar13 + dVar5;
    *param_3 = dVar4;
    *param_4 = (dVar5 - dVar4) + dVar13;
    FUN_1407db4f0(local_78 ^ (ulonglong) local_1028);
    return;
}


/*
Unable to decompile 'FUN_140904450'
Cause:
Low-level Error: Overlapping input varnodes
*/


// WARNING: Type propagation algorithm not settling
// WARNING: Could not reconcile some variable overlaps

double FUN_1409048d0(double param_1, double param_2) {
    double dVar1;
    double dVar2;
    double dVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    bool bVar7;
    bool bVar8;
    bool bVar9;
    bool bVar10;
    int iVar11;
    byte bVar12;
    uint uVar13;
    uint uVar14;
    uint uVar15;
    bool bVar16;
    bool bVar17;
    bool bVar18;
    bool bVar19;
    uint uVar20;
    double dVar21;
    double dVar22;
    double dVar23;
    double dVar24;
    double dVar25;
    undefined8 local_118;
    double local_110;
    undefined8 local_108;
    uint uStack236;
    double local_c0;
    uint local_b0;
    uint uStack172;

    uVar20 = (uint) ((ulonglong) param_1 >> 0x20);
    uVar13 = SUB84(param_1, 0);
    iVar11 = 0;
    uStack172 = (uint) ((ulonglong) param_2 >> 0x20);
    local_b0 = SUB84(param_2, 0);
    if ((((uStack172 & 0x7fffffff) < 0x7ff00000) && ((uStack172 & 0x7fffffff | local_b0) != 0)) &&
        (uVar14 = uVar20 & 0x7fffffff, uVar14 < 0x7ff00000)) {
        if ((0xfffff < uVar14) && ((uVar20 & 0x80000000) != 0x80000000)) {
            local_108 = 1.0;
            goto LAB_140904ddc;
        }
        if ((uVar14 | uVar13) != 0) {
            if (uVar20 < 0x100000) {
                uVar13 = SUB84(param_1 * 4503599627370496.0, 0);
                uVar20 = (uint) ((ulonglong) (param_1 * 4503599627370496.0) >> 0x20);
                local_108 = 1.0;
                iVar11 = 0x34;
                goto LAB_140904ddc;
            }
            uVar14 = uStack172 & 0x7fffffff;
            if ((uVar14 | local_b0) == 0) {
                LAB_140904a5c:
                iVar11 = 2;
            } else {
                if ((uVar14 < 0x3ff00000) || (0x7fefffff < uVar14)) goto LAB_140904a3b;
                if (0x433fffff < uVar14) goto LAB_140904a5c;
                iVar11 = (int) ((uStack172 & 0x7ff00000) + 0xc0100000) >> 0x14;
                bVar12 = (byte) iVar11;
                if (iVar11 < 0x15) {
                    if (((uVar14 << (bVar12 & 0x1f)) << 0xc | local_b0) == 0) {
                        iVar11 = 1 - ((int) ~(uVar14 << (bVar12 + 0xb & 0x1f)) >> 0x1f);
                    } else {
                        LAB_140904a3b:
                        iVar11 = 0;
                    }
                } else {
                    uVar14 = local_b0 << (bVar12 + 0xb & 0x1f);
                    if ((uVar14 & 0x7fffffff) != 0) goto LAB_140904a3b;
                    iVar11 = 1 - ((int) ~uVar14 >> 0x1f);
                }
            }
            if (((uVar20 & 0x80000000) == 0x80000000) && (iVar11 != 0)) {
                dVar1 = 0.0 - param_1;
                uVar13 = SUB84(dVar1, 0);
                uVar20 = (uint) ((ulonglong) dVar1 >> 0x20);
                if (iVar11 == 1) {
                    local_108 = -1.0;
                } else {
                    local_108 = 1.0;
                }
                iVar11 = 0;
                if ((uVar20 & 0x7fffffff) < 0x100000) {
                    uVar13 = SUB84(dVar1 * 4503599627370496.0, 0);
                    uVar20 = (uint) ((ulonglong) (dVar1 * 4503599627370496.0) >> 0x20);
                    iVar11 = 0x34;
                }
                LAB_140904ddc:
                uVar14 = (uVar20 & 0xffe00) + 0x200 >> 10;
                local_118 = (double) (CONCAT44(uVar20, uVar13) & 0xfffffffffffff | 0x3ff0000000000000);
                dVar1 = *(double *) (&DAT_140e50a70 + (ulonglong) uVar14 * 8);
                local_110 = (double) (((ulonglong) uVar20 & 0xfffff) << 0x20 | 0x3ff0000000000000 |
                                      (ulonglong) uVar13 & 0xfffffffff8000000);
                dVar2 = (dVar1 * local_110 - dVar1 * local_118) + (local_118 - local_110) * dVar1;
                dVar3 = (double) (((int) (uVar20 + 0xc0180200) >> 0x14) - iVar11) +
                        *(double *) (&DAT_140e52a80 + (ulonglong) (uVar14 * 2) * 8);
                dVar21 = dVar1 * local_118 + -1.442694902420044;
                dVar1 = dVar3 + dVar21;
                uStack236 = (uint) ((ulonglong) dVar1 >> 0x20);
                if (((int) ((uStack236 & 0x7ff00000) + 0xc0100000) >> 0x14) +
                    ((int) ((uStack172 & 0x7ff00000) + 0xc0100000) >> 0x14) < 0xc) {
                    local_118 = (double) ((ulonglong) param_2 & 0xfffffffff8000000);
                    dVar25 = dVar1 + dVar2;
                    dVar22 = dVar21 + dVar2;
                    dVar3 = *(double *) (&DAT_140e52a80 + (ulonglong) (uVar14 * 2 + 1) * 8) +
                            (dVar3 - dVar1) + dVar21 + dVar2 + (dVar1 - dVar25) +
                            ((((((dVar22 * 0.01584364190639705 + -0.02666713164981555) * dVar22 +
                                 0.04616704187202374) * dVar22 + -0.08325619496072671) * dVar22 +
                               0.160151050752973) * dVar22 + -0.3465736568077919) * dVar22 +
                             9.597935033233511e-08) * dVar22;
                    dVar1 = dVar25 + dVar3;
                    local_c0 = (double) ((ulonglong) dVar1 & 0xfffffffff8000000);
                    dVar21 = local_c0 * local_118;
                    dVar22 = dVar21 + 52776558133248.0;
                    dVar2 = (param_2 - local_118) * local_c0 +
                            (dVar1 - local_c0) * local_118 + (dVar1 - local_c0) * (param_2 - local_118);
                    local_110._0_4_ = SUB84(dVar22, 0);
                    uVar13 = local_110._0_4_ & 0x7f;
                    iVar11 = (int) local_110._0_4_ >> 7;
                    param_2 = (dVar3 - (dVar1 - dVar25)) * param_2;
                    if (iVar11 < 0x3ff) {
                        if (iVar11 < -0x3c3) {
                            if (iVar11 < -0x433) {
                                local_118 = (double) (((ulonglong) local_108._4_4_ & 0x80000000) << 0x20);
                                return local_118;
                            }
                            dVar2 = dVar2 + param_2;
                            dVar21 = dVar21 - (dVar22 - 52776558133248.0);
                            dVar1 = *(double *) (&DAT_140e56ab0 + (ulonglong) (uVar13 * 2) * 8);
                            dVar24 = dVar21 + dVar2;
                            dVar22 = (dVar24 * 0.001333355814642844 + 0.009618129107628477) * dVar24 +
                                     0.05550410866482158;
                            dVar3 = *(double *) (&DAT_140e56ab0 + (ulonglong) (uVar13 * 2 + 1) * 8);
                            local_110 = (double) ((ulonglong) ((iVar11 + 0x6f) * 0x100000 + 0x3ff00000) << 0x20);
                            dVar25 = local_110;
                            dVar23 = (dVar22 * dVar24 + 0.2402265069591007) * dVar1 * dVar24 * dVar24 + dVar3 +
                                     dVar24 * 0.6931471805599453 * dVar1;
                            local_108 = local_108 * 3.851859888774472e-34;
                            local_118._4_4_ = (uint) ((ulonglong) (local_110 * dVar1 * local_108) >> 0x20);
                            if ((local_118._4_4_ & 0x7fffffff) < 0x100001) {
                                local_118 = (double) ((*(ulonglong *) (&DAT_140e56ab0 + (ulonglong) (uVar13 * 2) * 8)
                                                               >> 0x20 & 0xffff0000) << 0x20);
                                local_110 = (double) ((ulonglong) dVar23 & 0xffffffff00000000);
                                return ((dVar23 - local_110) + (dVar1 - local_118) + local_110 + local_118) * dVar25
                                       * local_108;
                            }
                            local_108 = local_108 * local_110;
                            dVar25 = (dVar22 * dVar24 + 0.2402265069591007) * dVar24 + 0.6931471805599453;
                            dVar22 = dVar24 * dVar25;
                            local_118 = (double) ((ulonglong) dVar22 & 0xffffffffff000000);
                            local_110 = (double) (*(ulonglong *) (&DAT_140e56ab0 + (ulonglong) (uVar13 * 2) * 8) &
                                                  0xffffffff00000000);
                            local_118 = dVar25 * ((dVar21 - dVar24) + dVar2) + (dVar22 - local_118) + local_118;
                            return ((dVar1 - local_110) * local_118 +
                                    local_118 * local_110 + dVar3 + dVar22 * dVar3 + dVar1) * local_108;
                        }
                    } else {
                        if (0x400 < iVar11) {
                            local_118 = (double) (((ulonglong) local_108._4_4_ & 0x80000000) << 0x20 |
                                                  0x7ff0000000000000);
                            return local_118;
                        }
                        iVar11 = iVar11 + -1;
                        local_108 = local_108 + local_108;
                    }
                    dVar1 = dVar2 + param_2 + (dVar21 - (dVar22 - 52776558133248.0));
                    local_110 = (double) ((ulonglong) (iVar11 * 0x100000 + 0x3ff00000) << 0x20);
                    return local_108 *
                           (((((dVar1 * 0.001333355814642844 + 0.009618129107628477) * dVar1 +
                               0.05550410866482158) * dVar1 + 0.2402265069591007) * dVar1 + 0.6931471805599453)
                            * *(double *) (&DAT_140e56ab0 + (ulonglong) (uVar13 * 2) * 8) * dVar1 +
                            *(double *) (&DAT_140e56ab0 + (ulonglong) (uVar13 * 2 + 1) * 8) +
                            *(double *) (&DAT_140e56ab0 + (ulonglong) (uVar13 * 2) * 8)) * local_110;
                }
                if (((uStack172 ^ uStack236) & 0x80000000) == 0) {
                    if ((((ulonglong) param_1 & 0x8000000000000000) != 0) &&
                        (uVar13 = uStack172 & 0x7fffffff, (uVar13 | local_b0) != 0)) {
                        if (uVar13 < 0x3ff00000) {
                            return -NAN;
                        }
                        if (0x7fefffff < uVar13) {
                            return -NAN;
                        }
                        if (uVar13 < 0x43400000) {
                            iVar11 = (int) ((uStack172 & 0x7ff00000) + 0xc0100000) >> 0x14;
                            bVar12 = (byte) iVar11;
                            if (0x14 < iVar11) {
                                local_b0 = local_b0 << (bVar12 + 0xb & 0x1f);
                                if ((local_b0 & 0x7fffffff) != 0) {
                                    return -NAN;
                                }
                                if ((local_b0 & 0x80000000) == 0) {
                                    return INFINITY;
                                }
                                return -INFINITY;
                            }
                            if (((uVar13 << (bVar12 & 0x1f)) << 0xc | local_b0) != 0) {
                                return -NAN;
                            }
                            if ((uVar13 << (bVar12 + 0xb & 0x1f) & 0x80000000) == 0) {
                                return INFINITY;
                            }
                            return -INFINITY;
                        }
                    }
                    return INFINITY;
                }
                if (((ulonglong) param_1 & 0x8000000000000000) == 0) {
                    return 0.0;
                }
                uVar13 = uStack172 & 0x7fffffff;
                if ((uVar13 | local_b0) == 0) {
                    return 0.0;
                }
                if (uVar13 < 0x3ff00000) {
                    return -NAN;
                }
                if (uVar13 < 0x7ff00000) {
                    if (0x433fffff < uVar13) {
                        return 0.0;
                    }
                    iVar11 = (int) ((uStack172 & 0x7ff00000) + 0xc0100000) >> 0x14;
                    bVar12 = (byte) iVar11;
                    if (0x14 < iVar11) {
                        local_b0 = local_b0 << (bVar12 + 0xb & 0x1f);
                        if ((local_b0 & 0x7fffffff) != 0) {
                            return -NAN;
                        }
                        if ((local_b0 & 0x80000000) == 0) {
                            return 0.0;
                        }
                        return -0.0;
                    }
                    if (((uVar13 << (bVar12 & 0x1f)) << 0xc | local_b0) != 0) {
                        return -NAN;
                    }
                    if ((uVar13 << (bVar12 + 0xb & 0x1f) & 0x80000000) == 0) {
                        return 0.0;
                    }
                    return -0.0;
                }
                return -NAN;
            }
        }
    }
    uVar15 = uVar20 & 0x7fffffff;
    bVar16 = uVar15 != 0x7ff00000;
    bVar7 = uVar13 != 0;
    bVar17 = (uStack172 & 0x7fffffff) == 0x7ff00000;
    bVar8 = local_b0 == 0;
    bVar6 = bVar17 && bVar8;
    bVar18 = (uStack172 & 0x7ff00000) == 0x7ff00000;
    bVar9 = !bVar17;
    bVar10 = !bVar8;
    bVar19 = (uVar15 | uVar13) != 0;
    bVar4 = uVar15 == 0x3ff00000 && uVar13 == 0;
    uVar14 = uStack172 & 0x7fffffff;
    if ((uVar14 | local_b0) == 0) {
        LAB_140904c34:
        iVar11 = 2;
    } else {
        if ((uVar14 < 0x3ff00000) || (0x7fefffff < uVar14)) goto LAB_140904c13;
        if (0x433fffff < uVar14) goto LAB_140904c34;
        iVar11 = (int) ((uStack172 & 0x7ff00000) + 0xc0100000) >> 0x14;
        bVar12 = (byte) iVar11;
        if (iVar11 < 0x15) {
            if (((uVar14 << (bVar12 & 0x1f)) << 0xc | local_b0) == 0) {
                iVar11 = 1 - ((int) ~(uVar14 << (bVar12 + 0xb & 0x1f)) >> 0x1f);
            } else {
                LAB_140904c13:
                iVar11 = 0;
            }
        } else {
            uVar14 = local_b0 << (bVar12 + 0xb & 0x1f);
            if ((uVar14 & 0x7fffffff) != 0) goto LAB_140904c13;
            iVar11 = 1 - ((int) ~uVar14 >> 0x1f);
        }
    }
    if ((uVar15 < 0x3ff00001) && ((uVar15 != 0x3ff00000 || (uVar13 == 0)))) {
        bVar5 = false;
    } else {
        bVar5 = true;
    }
    if ((uStack172 & 0x7fffffff | local_b0) == 0) {
        return 1.0;
    }
    if (((ulonglong) param_1 & 0x8000000000000000) == 0) {
        if (bVar4) {
            return 1.0;
        }
    } else if ((bVar4) && (bVar6)) {
        return 1.0;
    }
    if ((uVar20 & 0x7ff00000) == 0x7ff00000 && (bVar16 || bVar7)) {
        return param_1;
    }
    if (bVar18 && (bVar9 || bVar10)) {
        return param_2;
    }
    if (((!bVar19) && (((ulonglong) param_2 & 0x8000000000000000) != 0)) && (bVar6)) {
        LAB_140904d8e:
        FUN_140905670();
        return INFINITY;
    }
    if (bVar5) {
        if (((ulonglong) param_2 & 0x8000000000000000) == 0) {
            if (bVar17 && bVar8) {
                return INFINITY;
            }
        } else if (bVar6) {
            return 0.0;
        }
    }
    if (uVar15 < 0x3ff00000) {
        if (((ulonglong) param_2 & 0x8000000000000000) == 0) {
            if (bVar6) {
                return 0.0;
            }
        } else if (bVar6) {
            return INFINITY;
        }
    }
    if (((ulonglong) param_1 & 0x8000000000000000) == 0) {
        if (!bVar16 && !bVar7) {
            if (((ulonglong) param_2 & 0x8000000000000000) == 0) {
                return INFINITY;
            }
            return 0.0;
        }
        if (bVar19) {
            return 0.0;
        }
        if (((ulonglong) param_2 & 0x8000000000000000) != 0) goto LAB_140904d8e;
    } else {
        if (!bVar16 && !bVar7) {
            if (((ulonglong) param_2 & 0x8000000000000000) != 0) {
                if (iVar11 != 1) {
                    return 0.0;
                }
                return -0.0;
            }
            if (iVar11 == 1) {
                return -INFINITY;
            }
            return INFINITY;
        }
        if ((bVar17 && bVar8 || bVar18 && (bVar9 || bVar10)) || (iVar11 != 0)) {
            if (bVar19) {
                return 0.0;
            }
        } else if (bVar19) {
            FUN_140905690();
            return -NAN;
        }
        if (((ulonglong) param_2 & 0x8000000000000000) != 0) {
            if (iVar11 == 1) {
                FUN_140905670();
                return -INFINITY;
            }
            goto LAB_140904d8e;
        }
        if (iVar11 == 1) {
            return -0.0;
        }
    }
    if (bVar17 && bVar8 || bVar18 && (bVar9 || bVar10)) {
        return 0.0;
    }
    return 0.0;
}


undefined8 FUN_140905670(void) {
    return 0xf0000000ff800000;
}


undefined8 FUN_140905690(void) {
    return 0xff8fffff;
}



// Library Function - Single Match
//  _copysign
//
// Libraries: Visual Studio 2012 Release, Visual Studio 2019 Release

double _copysign(double _Number, double _Sign) {
    if ((((ulonglong) _Sign ^ (ulonglong) _Number) & 0x8000000000000000) != 0) {
        _Number = (double) ((ulonglong) _Number ^ 0x8000000000000000);
    }
    return _Number;
}


undefined4 *FUN_1409056d8(void) {
    return &DAT_140c1b0b4;
}


undefined4 *FUN_1409056e0(void) {
    return &DAT_140c1b0b8;
}


undefined4 *FUN_1409056e8(void) {
    return &DAT_140c1b0b0;
}


undefined **FUN_1409056f0(void) {
    return &PTR_DAT_140c1b140;
}


undefined8 FUN_1409056f8(undefined4 *param_1) {
    int *piVar1;
    undefined8 uVar2;

    if (param_1 == (undefined4 *) 0x0) {
        piVar1 = _errno();
        *piVar1 = 0x16;
        FUN_1407dc370();
        uVar2 = 0x16;
    } else {
        *param_1 = DAT_140c1b0b4;
        uVar2 = 0;
    }
    return uVar2;
}


undefined8 FUN_140905728(undefined4 *param_1) {
    int *piVar1;
    undefined8 uVar2;

    if (param_1 == (undefined4 *) 0x0) {
        piVar1 = _errno();
        *piVar1 = 0x16;
        FUN_1407dc370();
        uVar2 = 0x16;
    } else {
        *param_1 = DAT_140c1b0b8;
        uVar2 = 0;
    }
    return uVar2;
}


undefined8 FUN_140905758(undefined4 *param_1) {
    int *piVar1;
    undefined8 uVar2;

    if (param_1 == (undefined4 *) 0x0) {
        piVar1 = _errno();
        *piVar1 = 0x16;
        FUN_1407dc370();
        uVar2 = 0x16;
    } else {
        *param_1 = DAT_140c1b0b0;
        uVar2 = 0;
    }
    return uVar2;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140905788(void) {
    if (_DAT_140c63478 == 0) {
        _lock(6);
        if (_DAT_140c63478 == 0) {
            FUN_140905aa0();
            _DAT_140c63478 = _DAT_140c63478 + 1;
        }
        FUN_1407e2528(6);
    }
    return;
}


undefined4 FUN_1409057c4(undefined8 param_1) {
    undefined4 uVar1;

    _lock(6);
    uVar1 = FUN_1409057f4(param_1);
    FUN_1407e2528(6);
    return uVar1;
}



// WARNING: Removing unreachable block (ram,0x00014090584a)
// WARNING: Removing unreachable block (ram,0x00014090585b)
// WARNING: Removing unreachable block (ram,0x000140905867)
// WARNING: Removing unreachable block (ram,0x000140905983)
// WARNING: Removing unreachable block (ram,0x000140905997)
// WARNING: Removing unreachable block (ram,0x0001409059a6)
// WARNING: Removing unreachable block (ram,0x000140905873)
// WARNING: Removing unreachable block (ram,0x0001409058d6)
// WARNING: Removing unreachable block (ram,0x0001409058a8)
// WARNING: Removing unreachable block (ram,0x0001409058fa)
// WARNING: Removing unreachable block (ram,0x000140905947)
// WARNING: Removing unreachable block (ram,0x0001409059fe)
// WARNING: Removing unreachable block (ram,0x00014090596a)
// WARNING: Removing unreachable block (ram,0x000140905a01)
// WARNING: Removing unreachable block (ram,0x000140905a06)
// WARNING: Removing unreachable block (ram,0x000140905a3d)
// WARNING: Removing unreachable block (ram,0x000140905a42)
// WARNING: Removing unreachable block (ram,0x000140905a46)
// WARNING: Removing unreachable block (ram,0x000140905a4b)
// WARNING: Removing unreachable block (ram,0x000140905a1b)
// WARNING: Removing unreachable block (ram,0x000140905a23)
// WARNING: Removing unreachable block (ram,0x000140905a2c)
// WARNING: Removing unreachable block (ram,0x000140905a30)
// WARNING: Removing unreachable block (ram,0x000140905a53)
// WARNING: Removing unreachable block (ram,0x000140905a7c)
// WARNING: Removing unreachable block (ram,0x000140905a6b)
// WARNING: Removing unreachable block (ram,0x000140905a75)
// WARNING: Removing unreachable block (ram,0x000140905a35)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1409057f4(void) {
    code *pcVar1;
    int iVar2;
    undefined8 uVar3;

    iVar2 = FUN_1409056f8();
    if (iVar2 == 0) {
        return 0;
    }
    FUN_1407dc390(0, 0, 0, 0, 0);
    pcVar1 = (code *) swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140905aa0(void) {
    char cVar1;
    code *pcVar2;
    bool bVar3;
    undefined4 uVar4;
    int iVar5;
    UINT CodePage;
    DWORD DVar6;
    LPSTR *ppCVar7;
    char *pcVar8;
    longlong lVar9;
    int *piVar10;
    undefined4 *puVar11;
    char *pcVar12;
    int local_res8[2];
    undefined4 local_res10[2];
    int local_res18[2];
    int local_res20[2];

    bVar3 = false;
    local_res8[0] = 0;
    local_res10[0] = 0;
    local_res18[0] = 0;
    _lock(7);
    ppCVar7 = (LPSTR *) FUN_1409056f0();
    iVar5 = FUN_140905758(local_res8);
    if (iVar5 != 0) goto LAB_140905ee2;
    iVar5 = FUN_1409056f8(local_res10);
    if (iVar5 == 0) {
        iVar5 = FUN_140905728(local_res18);
        if (iVar5 == 0) {
            CodePage = FUN_1407e493c();
            _DAT_140c6347c = 0;
            _DAT_140c1b160 = 0xffffffff;
            _DAT_140c1b150 = 0xffffffff;
            pcVar8 = _getenv_helper_nolock("TZ");
            if ((pcVar8 == (char *) 0x0) || (*pcVar8 == '\0')) {
                LAB_140905be7:
                if (DAT_140c63470 != (void *) 0x0) {
                    free(DAT_140c63470);
                    DAT_140c63470 = (void *) 0x0;
                }
                DVar6 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION) &DAT_140c63480);
                if (DVar6 != 0xffffffff) {
                    _DAT_140c6347c = 1;
                    local_res8[0] = DAT_140c63480 * 0x3c;
                    if (DAT_140c634c6 != 0) {
                        local_res8[0] = local_res8[0] + DAT_140c634d4 * 0x3c;
                    }
                    if ((DAT_140c6351a == 0) || (DAT_140c63528 == 0)) {
                        local_res10[0] = 0;
                        local_res18[0] = 0;
                    } else {
                        local_res10[0] = 1;
                        local_res18[0] = (DAT_140c63528 - DAT_140c634d4) * 0x3c;
                    }
                    iVar5 = WideCharToMultiByte(CodePage, 0, (LPCWSTR) &DAT_140c63484, -1, *ppCVar7, 0x3f,
                                                (LPCSTR) 0x0, local_res20);
                    if ((iVar5 == 0) || (local_res20[0] != 0)) {
                        **ppCVar7 = '\0';
                    } else {
                        (*ppCVar7)[0x3f] = '\0';
                    }
                    iVar5 = WideCharToMultiByte(CodePage, 0, (LPCWSTR) &DAT_140c634d8, -1, ppCVar7[1], 0x3f,
                                                (LPCSTR) 0x0, local_res20);
                    if ((iVar5 == 0) || (local_res20[0] != 0)) {
                        *ppCVar7[1] = '\0';
                    } else {
                        ppCVar7[1][0x3f] = '\0';
                    }
                }
                LAB_140905d32:
                bVar3 = true;
            } else {
                if (DAT_140c63470 != (void *) 0x0) {
                    iVar5 = FUN_1407ea540(pcVar8, DAT_140c63470);
                    if (iVar5 != 0) {
                        if (DAT_140c63470 != (void *) 0x0) {
                            free(DAT_140c63470);
                        }
                        goto LAB_140905b8f;
                    }
                    goto LAB_140905d32;
                }
                LAB_140905b8f:
                lVar9 = FUN_1407e1990(pcVar8);
                DAT_140c63470 = (void *) FUN_1407e2c30(lVar9 + 1);
                if (DAT_140c63470 == (void *) 0x0) goto LAB_140905d32;
                lVar9 = FUN_1407e1990(pcVar8);
                iVar5 = FUN_1407ea194(DAT_140c63470, lVar9 + 1, pcVar8);
                if (iVar5 != 0) {
                    FUN_1407dc390(0, 0, 0, 0, 0);
                    goto LAB_140905be7;
                }
            }
            iVar5 = local_res8[0];
            piVar10 = (int *) FUN_1409056e8();
            uVar4 = local_res10[0];
            *piVar10 = iVar5;
            puVar11 = (undefined4 *) FUN_1409056d8();
            iVar5 = local_res18[0];
            *puVar11 = uVar4;
            piVar10 = (int *) FUN_1409056e0();
            *piVar10 = iVar5;
            FUN_1407e2528(7);
            if (bVar3) {
                return;
            }
            iVar5 = FUN_1407ea1f8(*ppCVar7, 0x40, pcVar8, 3);
            if (iVar5 == 0) {
                pcVar12 = pcVar8 + 3;
                cVar1 = *pcVar12;
                if (cVar1 == '-') {
                    pcVar12 = pcVar8 + 4;
                }
                local_res8[0] = FUN_1407df3e4();
                local_res8[0] = local_res8[0] * 0xe10;
                for (; (*pcVar12 == '+' || ((byte) (*pcVar12 - 0x30U) < 10)); pcVar12 = pcVar12 + 1) {
                }
                if (*pcVar12 == ':') {
                    iVar5 = FUN_1407df3e4();
                    local_res8[0] = local_res8[0] + iVar5 * 0x3c;
                    do {
                        pcVar8 = pcVar12;
                        pcVar12 = pcVar8 + 1;
                        if (*pcVar12 < '0') break;
                    } while (*pcVar12 < ':');
                    if (*pcVar12 == ':') {
                        iVar5 = FUN_1407df3e4();
                        local_res8[0] = local_res8[0] + iVar5;
                        for (pcVar12 = pcVar8 + 2; ('/' < *pcVar12 && (*pcVar12 < ':')); pcVar12 = pcVar12 + 1) {
                        }
                    }
                }
                if (cVar1 == '-') {
                    local_res8[0] = -local_res8[0];
                }
                if (*pcVar12 == '\0') {
                    local_res10[0] = 0;
                    *ppCVar7[1] = '\0';
                } else {
                    local_res10[0] = 1;
                    iVar5 = FUN_1407ea1f8(ppCVar7[1], 0x40, pcVar12, 3);
                    if (iVar5 != 0) {
                        FUN_1407dc390(0, 0, 0, 0, 0);
                        pcVar2 = (code *) swi(3);
                        (*pcVar2)();
                        return;
                    }
                }
                iVar5 = local_res8[0];
                piVar10 = (int *) FUN_1409056e8();
                uVar4 = local_res10[0];
                *piVar10 = iVar5;
                puVar11 = (undefined4 *) FUN_1409056d8();
                *puVar11 = uVar4;
                return;
            }
            FUN_1407dc390(0, 0, 0, 0, 0);
        }
        FUN_1407dc390(0, 0, 0, 0, 0);
    }
    FUN_1407dc390(0, 0, 0, 0, 0);
    LAB_140905ee2:
    FUN_1407dc390(0, 0, 0, 0, 0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140905f08(int param_1, int param_2, uint param_3, int param_4, int param_5, int param_6,
                   int param_7, int param_8, int param_9, int param_10, int param_11) {
    code *pcVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint uVar5;

    if (param_2 == 1) {
        uVar5 = param_3 & 0x80000003;
        if ((int) uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
        }
        if (((uVar5 == 0) && (param_3 != ((int) param_3 / 100) * 100)) ||
            (param_3 + 0x76c == ((int) (param_3 + 0x76c) / 400) * 400)) {
            iVar4 = *(int *) (&DAT_140c1b1a4 + (longlong) param_4 * 4);
        } else {
            iVar4 = *(int *) (&DAT_140c1b16c + (longlong) param_4 * 4);
        }
        iVar2 = param_3 - 1;
        iVar3 = (int) (((int) ((iVar2 >> 0x1f & 3U) + iVar2) >> 2) + iVar4 + 1 +
                       ((int) (param_3 + 299) / 400 - iVar2 / 100) + param_3 * 0x16d + -0x63db) % 7;
        iVar2 = param_5 * 7 - iVar3;
        if (iVar3 <= param_6) {
            iVar2 = iVar2 + -7;
        }
        iVar4 = iVar4 + 1 + iVar2 + param_6;
        if (param_5 == 5) {
            if (((uVar5 == 0) && (param_3 != ((int) param_3 / 100) * 100)) ||
                (param_3 + 0x76c == ((int) (param_3 + 0x76c) / 400) * 400)) {
                iVar2 = *(int *) (&DAT_140c1b1a8 + (longlong) param_4 * 4);
            } else {
                iVar2 = (&DAT_140c1b170)[param_4];
            }
            if (iVar2 < iVar4) {
                iVar4 = iVar4 + -7;
            }
        }
    } else {
        uVar5 = param_3 & 0x80000003;
        if ((int) uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
        }
        if (((uVar5 == 0) && (param_3 != ((int) param_3 / 100) * 100)) ||
            (param_3 + 0x76c == ((int) (param_3 + 0x76c) / 400) * 400)) {
            iVar4 = *(int *) (&DAT_140c1b1a4 + (longlong) param_4 * 4);
        } else {
            iVar4 = *(int *) (&DAT_140c1b16c + (longlong) param_4 * 4);
        }
        iVar4 = iVar4 + param_7;
    }
    param_11 = ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
    uVar5 = param_3;
    if (param_1 != 1) {
        DAT_140c1b164 = iVar4;
        DAT_140c1b168 = param_11;
        iVar4 = FUN_140905728();
        if (iVar4 != 0) {
            FUN_1407dc390(0, 0, 0, 0, 0);
            pcVar1 = (code *) swi(3);
            (*pcVar1)();
            return;
        }
        uVar5 = _DAT_140c1b150;
        iVar4 = DAT_140c1b154;
        param_11 = _DAT_140c1b158;
        _DAT_140c1b160 = param_3;
        if (DAT_140c1b168 < 0) {
            DAT_140c1b168 = DAT_140c1b168 + 86400000;
            DAT_140c1b164 = DAT_140c1b164 + -1;
        } else if (86399999 < DAT_140c1b168) {
            DAT_140c1b168 = DAT_140c1b168 + -86400000;
            DAT_140c1b164 = DAT_140c1b164 + 1;
        }
    }
    _DAT_140c1b158 = param_11;
    DAT_140c1b154 = iVar4;
    _DAT_140c1b150 = uVar5;
    return;
}



// Library Function - Single Match
//  __getgmtimebuf
//
// Library: Visual Studio 2012 Release

tm *__getgmtimebuf(void) {
    _ptiddata p_Var1;
    int *piVar2;
    tm *ptVar3;
    void *pvVar4;

    p_Var1 = _getptd_noexit();
    if (p_Var1 == (_ptiddata) 0x0) {
        LAB_1409061ef:
        piVar2 = _errno();
        *piVar2 = 0xc;
        ptVar3 = (tm *) 0x0;
    } else {
        if (p_Var1->_gmtimebuf == (void *) 0x0) {
            pvVar4 = (void *) FUN_1407e2c30(0x24);
            p_Var1->_gmtimebuf = pvVar4;
            if (pvVar4 == (void *) 0x0) goto LAB_1409061ef;
        }
        ptVar3 = (tm *) p_Var1->_gmtimebuf;
    }
    return ptVar3;
}


undefined8
FUN_140906224(undefined8 param_1, ushort param_2, uint *param_3, short **param_4, longlong *param_5,
              longlong param_6, uint param_7) {
    short sVar1;
    uint uVar2;
    code *pcVar3;
    int iVar4;
    int *piVar5;
    longlong lVar6;
    uint uVar7;
    uint uVar8;
    short *psVar9;
    undefined8 uVar10;
    bool bVar11;
    bool bVar12;
    ulonglong in_stack_ffffffffffffffc8;
    longlong local_28[2];

    if (0x59 < param_2) {
        if (param_2 < 0x6e) {
            if (param_2 == 0x6d) {
                if (0xb < param_3[4]) goto LAB_140906644;
                uVar7 = param_3[4] + 1;
            } else {
                if (param_2 == 0x5a) {
                    LAB_1409066e4:
                    FUN_140905788();
                    local_28[0] = 0;
                    lVar6 = FUN_1409056f0();
                    iVar4 = FUN_1409073d4(local_28, *param_4, *param_5,
                                          *(undefined8 *) (lVar6 + (ulonglong) (param_3[8] != 0) * 8),
                                          0xffffffffffffffff, param_1);
                    if (iVar4 == 0) {
                        *param_4 = *param_4 + local_28[0] + -1;
                        *param_5 = *param_5 + (1 - local_28[0]);
                        return 1;
                    }
                    FUN_1407dc390(0, 0, 0, 0, 0);
                    pcVar3 = (code *) swi(3);
                    uVar10 = (*pcVar3)();
                    return uVar10;
                }
                if (param_2 == 0x61) {
                    if (param_3[6] < 7) {
                        psVar9 = *(short **) (param_6 + 0x160 + (longlong) (int) param_3[6] * 8);
                        lVar6 = *param_5;
                        while (true) {
                            if (lVar6 == 0) {
                                return 1;
                            }
                            sVar1 = *psVar9;
                            if (sVar1 == 0) break;
                            psVar9 = psVar9 + 1;
                            **param_4 = sVar1;
                            *param_4 = *param_4 + 1;
                            *param_5 = *param_5 + -1;
                            lVar6 = *param_5;
                        }
                        return 1;
                    }
                    goto LAB_140906644;
                }
                if (param_2 == 0x62) {
                    if (param_3[4] < 0xc) {
                        psVar9 = *(short **) (param_6 + 0x1d0 + (longlong) (int) param_3[4] * 8);
                        lVar6 = *param_5;
                        while (true) {
                            if (lVar6 == 0) {
                                return 1;
                            }
                            sVar1 = *psVar9;
                            if (sVar1 == 0) break;
                            psVar9 = psVar9 + 1;
                            **param_4 = sVar1;
                            *param_4 = *param_4 + 1;
                            *param_5 = *param_5 + -1;
                            lVar6 = *param_5;
                        }
                        return 1;
                    }
                    goto LAB_140906644;
                }
                if (param_2 == 99) {
                    iVar4 = FUN_140906974(param_1, param_7 != 0, param_3, param_4, param_5, param_6);
                    if (iVar4 == 0) {
                        return 0;
                    }
                    if (*param_5 == 0) {
                        return 0;
                    }
                    **param_4 = 0x20;
                    *param_4 = *param_4 + 1;
                    *param_5 = *param_5 + -1;
                    goto LAB_1409065c9;
                }
                if (param_2 != 100) {
                    if (param_2 != 0x6a) {
                        return 0;
                    }
                    if (param_3[7] < 0x16e) {
                        uVar7 = param_3[7] + 1;
                        uVar10 = 3;
                        goto LAB_140906549;
                    }
                    goto LAB_140906644;
                }
                uVar7 = param_3[3];
                if (0x1e < uVar7 - 1) goto LAB_140906644;
            }
        } else {
            if (param_2 == 0x70) {
                if (param_3[2] < 0x18) {
                    if (0xb < (int) param_3[2]) {
                        psVar9 = *(short **) (param_6 + 0x298);
                        lVar6 = *param_5;
                        while (true) {
                            if (lVar6 == 0) {
                                return 1;
                            }
                            sVar1 = *psVar9;
                            if (sVar1 == 0) break;
                            psVar9 = psVar9 + 1;
                            **param_4 = sVar1;
                            *param_4 = *param_4 + 1;
                            *param_5 = *param_5 + -1;
                            lVar6 = *param_5;
                        }
                        return 1;
                    }
                    psVar9 = *(short **) (param_6 + 0x290);
                    lVar6 = *param_5;
                    while (true) {
                        if (lVar6 == 0) {
                            return 1;
                        }
                        sVar1 = *psVar9;
                        if (sVar1 == 0) break;
                        psVar9 = psVar9 + 1;
                        **param_4 = sVar1;
                        *param_4 = *param_4 + 1;
                        *param_5 = *param_5 + -1;
                        lVar6 = *param_5;
                    }
                    return 1;
                }
                goto LAB_140906644;
            }
            if (param_2 == 0x77) {
                if (param_3[6] < 7) {
                    uVar7 = param_3[6];
                    uVar10 = 1;
                    goto LAB_140906549;
                }
                goto LAB_140906644;
            }
            if (param_2 == 0x78) {
                if (param_7 == 0) {
                    uVar10 = 0;
                } else {
                    uVar10 = 1;
                }
                goto LAB_1409065d1;
            }
            if (param_2 != 0x79) {
                if (param_2 != 0x7a) {
                    return 0;
                }
                goto LAB_1409066e4;
            }
            if ((int) param_3[5] < 0) goto LAB_140906644;
            uVar7 = (int) param_3[5] % 100;
        }
        goto LAB_140906544;
    }
    if (param_2 == 0x59) {
        if (9999 < param_3[5] + 0x76c) goto LAB_140906644;
        uVar10 = 4;
        uVar7 = param_3[5] + 0x76c;
        goto LAB_140906549;
    }
    if (param_2 < 0x4a) {
        if (param_2 == 0x49) {
            if (0x17 < param_3[2]) goto LAB_140906644;
            uVar7 = (int) param_3[2] % 0xc;
            if (uVar7 == 0) {
                uVar7 = 0xc;
            }
        } else {
            if (param_2 == 4) {
                return 1;
            }
            if (param_2 == 0xd) {
                return 1;
            }
            if (param_2 == 0x25) {
                **param_4 = 0x25;
                *param_4 = *param_4 + 1;
                *param_5 = *param_5 + -1;
                return 1;
            }
            if (param_2 == 0x41) {
                if (param_3[6] < 7) {
                    psVar9 = *(short **) (param_6 + 0x198 + (longlong) (int) param_3[6] * 8);
                    lVar6 = *param_5;
                    while (true) {
                        if (lVar6 == 0) {
                            return 1;
                        }
                        sVar1 = *psVar9;
                        if (sVar1 == 0) break;
                        psVar9 = psVar9 + 1;
                        **param_4 = sVar1;
                        *param_4 = *param_4 + 1;
                        *param_5 = *param_5 + -1;
                        lVar6 = *param_5;
                    }
                    return 1;
                }
                goto LAB_140906644;
            }
            if (param_2 == 0x42) {
                if (param_3[4] < 0xc) {
                    psVar9 = *(short **) (param_6 + 0x230 + (longlong) (int) param_3[4] * 8);
                    lVar6 = *param_5;
                    while (true) {
                        if (lVar6 == 0) {
                            return 1;
                        }
                        sVar1 = *psVar9;
                        if (sVar1 == 0) break;
                        psVar9 = psVar9 + 1;
                        **param_4 = sVar1;
                        *param_4 = *param_4 + 1;
                        *param_5 = *param_5 + -1;
                        lVar6 = *param_5;
                    }
                    return 1;
                }
                goto LAB_140906644;
            }
            if (param_2 != 0x48) {
                return 0;
            }
            uVar7 = param_3[2];
            bVar11 = uVar7 < 0x17;
            bVar12 = uVar7 == 0x17;
            LAB_1409062b2:
            if (!bVar11 && !bVar12) {
                LAB_140906644:
                piVar5 = _errno();
                *piVar5 = 0x16;
                FUN_1407dc370();
                return 0;
            }
        }
    } else {
        if (param_2 == 0x4d) {
            uVar7 = param_3[1];
            bVar11 = uVar7 < 0x3b;
            bVar12 = uVar7 == 0x3b;
            goto LAB_1409062b2;
        }
        uVar8 = 6;
        if (param_2 == 0x53) {
            if (0x3b < *param_3) goto LAB_140906644;
            uVar7 = *param_3;
        } else {
            uVar7 = 0;
            if (param_2 == 0x55) {
                if (6 < param_3[6]) goto LAB_140906644;
                uVar8 = param_3[6];
            } else {
                if (param_2 != 0x57) {
                    if (param_2 != 0x58) {
                        return 0;
                    }
                    LAB_1409065c9:
                    uVar10 = 2;
                    LAB_1409065d1:
                    iVar4 = FUN_140906974(param_1, uVar10, param_3, param_4, param_5, param_6);
                    if (iVar4 == 0) {
                        return 0;
                    }
                    return 1;
                }
                uVar2 = param_3[6];
                if (6 < uVar2) goto LAB_140906644;
                if (uVar2 != 0) {
                    uVar8 = uVar2 - 1;
                }
            }
            uVar2 = param_3[7];
            if (0x16d < uVar2) goto LAB_140906644;
            if (((int) uVar8 <= (int) uVar2) && (uVar7 = (int) uVar2 / 7, (int) uVar8 <= (int) uVar2 % 7)) {
                uVar7 = uVar7 + 1;
            }
        }
    }
    LAB_140906544:
    uVar10 = 2;
    LAB_140906549:
    FUN_14090687c(uVar7, uVar10, param_4, param_5,
                  in_stack_ffffffffffffffc8 & 0xffffffff00000000 | (ulonglong) param_7);
    return 1;
}


void FUN_14090687c(int param_1, int param_2, short **param_3, ulonglong *param_4, int param_5) {
    short sVar1;
    short *psVar2;
    int iVar3;
    longlong lVar4;
    short *psVar5;

    iVar3 = 0;
    if (param_5 == 0) {
        if ((ulonglong) (longlong) param_2 < *param_4) {
            if (param_2 != 0) {
                lVar4 = (longlong) (param_2 + -1) * 2;
                iVar3 = 0;
                do {
                    iVar3 = iVar3 + 1;
                    *(short *) (lVar4 + (longlong) *param_3) =
                            (short) param_1 + (short) (param_1 / 10) * -10 + 0x30;
                    lVar4 = lVar4 + -2;
                    param_2 = param_2 + -1;
                    param_1 = param_1 / 10;
                } while (param_2 != 0);
            }
            *param_3 = *param_3 + iVar3;
            *param_4 = *param_4 - (longlong) iVar3;
        } else {
            *param_4 = 0;
        }
    } else {
        psVar5 = *param_3;
        do {
            if (*param_4 < 2) break;
            iVar3 = param_1 / 10;
            *psVar5 = (short) param_1 + (short) iVar3 * -10 + 0x30;
            *param_4 = *param_4 - 1;
            psVar5 = psVar5 + 1;
            param_1 = iVar3;
        } while (0 < iVar3);
        psVar2 = *param_3;
        *param_3 = psVar5;
        psVar5 = psVar5 + -1;
        do {
            sVar1 = *psVar5;
            *psVar5 = *psVar2;
            *psVar2 = sVar1;
            psVar2 = psVar2 + 1;
            psVar5 = psVar5 + -1;
        } while (psVar2 < psVar5);
    }
    return;
}



// WARNING: Type propagation algorithm not settling

void FUN_140906974(undefined8 param_1, int param_2, undefined2 *param_3, ushort **param_4,
                   ulonglong *param_5, longlong param_6) {
    undefined8 uVar1;
    undefined4 uVar2;
    undefined *puVar3;
    int iVar4;
    longlong lVar5;
    undefined4 *puVar6;
    ushort uVar7;
    uint uVar8;
    ulonglong uVar10;
    ulonglong uVar11;
    ushort *puVar12;
    undefined4 uVar13;
    undefined *puVar14;
    undefined *puVar15;
    ushort *puVar16;
    ushort *puVar17;
    undefined4 *puVar18;
    undefined auStack168[32];
    undefined8 local_88;
    undefined4 local_80;
    undefined2 *local_68;
    undefined8 local_60;
    short local_58;
    short local_56;
    undefined2 local_52;
    undefined2 local_50;
    undefined2 local_4e;
    undefined2 local_4c;
    undefined2 local_4a;
    ulonglong local_48;
    uint uVar9;

    puVar14 = auStack168;
    puVar15 = auStack168;
    local_48 = DAT_140c0f7b0 ^ (ulonglong) &local_68;
    local_68 = param_3;
    local_60 = param_1;
    if (param_2 == 0) {
        puVar17 = *(ushort **) (param_6 + 0x2a0);
    } else if (param_2 == 1) {
        puVar17 = *(ushort **) (param_6 + 0x2a8);
    } else {
        puVar17 = *(ushort **) (param_6 + 0x2b0);
    }
    puVar3 = auStack168;
    uVar11 = 0;
    if (*(int *) (param_6 + 0x158) != 1) {
        local_80 = 0;
        local_4a = 0;
        local_58 = param_3[10] + 0x76c;
        local_56 = param_3[8] + 1;
        local_88 = 0;
        local_52 = param_3[6];
        local_50 = param_3[4];
        local_4e = param_3[2];
        local_4c = *param_3;
        if (param_2 != 2) {
            iVar4 = FUN_1407e860c();
        } else {
            iVar4 = FUN_1407e86d8();
        }
        uVar11 = 0;
        puVar3 = auStack168;
        if (iVar4 != 0) {
            uVar10 = (longlong) iVar4 * 2 + 0x10;
            if (uVar10 < 0x401) {
                lVar5 = FUN_1407f0f60();
                lVar5 = -lVar5;
                puVar14 = auStack168 + lVar5;
                puVar6 = (undefined4 *) ((longlong) &local_68 + lVar5);
                puVar3 = auStack168 + lVar5;
                if (puVar6 == (undefined4 *) 0x0) goto LAB_140906e10;
                *puVar6 = 0xcccc;
                LAB_140906adb:
                puVar6 = puVar6 + 4;
                puVar15 = puVar14;
            } else {
                puVar6 = (undefined4 *) malloc(uVar10);
                uVar11 = 0;
                if (puVar6 != (undefined4 *) 0x0) {
                    *puVar6 = 0xdddd;
                    goto LAB_140906adb;
                }
            }
            puVar3 = puVar15;
            if (puVar6 != (undefined4 *) 0x0) {
                uVar1 = *(undefined8 *) (param_6 + 0x2b8);
                *(int *) (puVar15 + 0x28) = iVar4;
                *(undefined4 **) (puVar15 + 0x20) = puVar6;
                puVar18 = puVar6;
                if (param_2 != 2) {
                    *(undefined8 *) (puVar15 + -8) = 0x140906b0e;
                    iVar4 = FUN_1407e860c(uVar1, 0, &local_58);
                } else {
                    *(undefined8 *) (puVar15 + -8) = 0x140906b07;
                    iVar4 = FUN_1407e86d8();
                }
                while ((iVar4 = iVar4 + -1, 0 < iVar4 && (*param_5 != 0))) {
                    **param_4 = *(ushort *) puVar18;
                    *param_4 = *param_4 + 1;
                    *param_5 = *param_5 - 1;
                    puVar18 = (undefined4 *) ((longlong) puVar18 + 2);
                }
                if (puVar6[-4] == 0xdddd) {
                    *(undefined8 *) (puVar15 + -8) = 0x140906b4d;
                    free(puVar6 + -4);
                }
                goto LAB_140906e21;
            }
        }
    }
    LAB_140906e10:
    do {
        puVar15 = puVar3;
        uVar7 = *puVar17;
        if ((uVar7 == 0) || (*param_5 == uVar11)) break;
        uVar2 = (undefined4) uVar11;
        uVar10 = uVar11 & 0xffffffff;
        puVar16 = puVar17;
        do {
            puVar16 = puVar16 + 1;
            uVar9 = (uint) uVar10;
            uVar8 = uVar9 + 1;
            uVar10 = (ulonglong) uVar8;
            uVar11 = uVar11 + 1;
        } while (*puVar16 == uVar7);
        puVar3 = puVar15;
        uVar13 = 1;
        if (100 < uVar7) {
            if (((uVar7 == 0x68) || (uVar7 == 0x6d)) || (uVar7 == 0x73)) {
                joined_r0x000140906db5:
                if ((uVar9 == 0) || (uVar13 = uVar2, uVar8 == 2)) goto LAB_140906ddc;
            } else {
                if (uVar7 == 0x74) {
                    if (*(int *) (local_68 + 4) < 0xc) {
                        puVar12 = *(ushort **) (param_6 + 0x290);
                    } else {
                        puVar12 = *(ushort **) (param_6 + 0x298);
                    }
                    uVar11 = 0;
                    puVar17 = puVar16;
                    if ((uVar8 == 1) && (*param_5 != 0)) {
                        **param_4 = *puVar12;
                        *param_4 = *param_4 + 1;
                        *param_5 = *param_5 - 1;
                    } else {
                        while ((uVar7 = *puVar12, uVar7 != 0 && (*param_5 != 0))) {
                            puVar12 = puVar12 + 1;
                            **param_4 = uVar7;
                            *param_4 = *param_4 + 1;
                            *param_5 = *param_5 - 1;
                        }
                    }
                    goto LAB_140906e10;
                }
                uVar9 = uVar8;
                if (uVar7 == 0x79) goto joined_r0x000140906d0e;
            }
            LAB_140906dbb:
            puVar17 = puVar17 + 1;
            **param_4 = uVar7;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 - 1;
            LAB_140906ca9:
            uVar11 = 0;
            goto LAB_140906e10;
        }
        if (uVar7 == 100) {
            if (uVar9 == 0) {
                uVar13 = 1;
            } else {
                joined_r0x000140906cb7:
                uVar13 = uVar2;
                if (uVar9 != 1) {
                    joined_r0x000140906d0e:
                    uVar13 = uVar2;
                    if ((uVar9 != 2) && (uVar8 != 4)) goto LAB_140906dbb;
                }
            }
        } else {
            if (uVar7 == 0x27) {
                if ((uVar8 & 1) == 0) {
                    puVar17 = puVar17 + (int) uVar8;
                    goto LAB_140906ca9;
                }
                puVar17 = puVar17 + uVar11;
                uVar7 = *puVar17;
                if (uVar7 == 0) break;
                do {
                    uVar11 = 0;
                    if ((*param_5 == 0) || (puVar17 = puVar17 + 1, uVar7 == 0x27)) break;
                    **param_4 = uVar7;
                    *param_4 = *param_4 + 1;
                    *param_5 = *param_5 - 1;
                    uVar7 = *puVar17;
                    uVar11 = 0;
                } while (uVar7 != 0);
                goto LAB_140906e10;
            }
            if (uVar7 != 0x41) {
                if (uVar7 == 0x48) goto joined_r0x000140906db5;
                if (uVar7 == 0x4d) {
                    if (uVar9 != 0) goto joined_r0x000140906cb7;
                    goto LAB_140906ddc;
                }
                if (uVar7 != 0x61) goto LAB_140906dbb;
            }
            *(undefined8 *) (puVar15 + -8) = 0x140906bdc;
            iVar4 = FUN_1407f0c28(puVar17);
            if (iVar4 == 0) {
                puVar16 = puVar17 + 5;
                uVar13 = uVar2;
            } else {
                *(undefined8 *) (puVar15 + -8) = 0x140906c41;
                iVar4 = FUN_1407f0c28(puVar17);
                uVar13 = uVar2;
                if (iVar4 == 0) {
                    puVar16 = puVar17 + 3;
                }
            }
        }
        LAB_140906ddc:
        *(undefined4 *) (puVar15 + 0x30) = uVar13;
        *(longlong *) (puVar15 + 0x28) = param_6;
        *(ulonglong **) (puVar15 + 0x20) = param_5;
        *(undefined8 *) (puVar15 + -8) = 0x140906dfc;
        iVar4 = FUN_140906224();
        uVar11 = 0;
        puVar17 = puVar16;
    } while (iVar4 != 0);
    LAB_140906e21:
    uVar11 = local_48 ^ (ulonglong) &local_68;
    *(undefined8 *) (puVar15 + -8) = 0x140906e2d;
    FUN_1407db4f0(uVar11);
    return;
}


longlong FUN_140906e48(short *param_1, longlong param_2, short *param_3, longlong param_4,
                       longlong param_5, localeinfo_struct *param_6) {
    short sVar1;
    bool bVar2;
    int iVar3;
    int *piVar4;
    longlong lVar5;
    short *psVar6;
    short *local_res8;
    longlong local_58;
    longlong local_50[2];
    longlong local_40;
    char local_38;

    lVar5 = 0;
    bVar2 = false;
    local_res8 = param_1;
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *) local_50, param_6);
    if (((local_res8 != (short *) 0x0) && (param_2 != 0)) && (*local_res8 = 0, param_3 != (short *) 0x0)
            ) {
        if (param_5 == 0) {
            param_5 = *(longlong *) (local_50[0] + 0x120);
        }
        local_58 = param_2;
        if (param_2 != 0) {
            do {
                sVar1 = *param_3;
                if (sVar1 == 0) break;
                if (sVar1 == 0x25) {
                    if (param_4 == 0) goto LAB_140906f99;
                    psVar6 = param_3 + 1;
                    sVar1 = *psVar6;
                    if (sVar1 == 0x23) {
                        psVar6 = param_3 + 2;
                    }
                    iVar3 = FUN_140906224(local_50, *psVar6, param_4, &local_res8, &local_58, param_5, sVar1 == 0x23
                    );
                    if (iVar3 == 0) {
                        if (local_58 != 0) {
                            bVar2 = true;
                        }
                        goto LAB_140906f7d;
                    }
                } else {
                    *local_res8 = sVar1;
                    local_res8 = local_res8 + 1;
                    local_58 = local_58 + -1;
                    psVar6 = param_3;
                }
                param_3 = psVar6 + 1;
            } while (local_58 != 0);
            if (local_58 != 0) {
                *local_res8 = 0;
                lVar5 = param_2 - local_58;
                goto LAB_140906fac;
            }
        }
        LAB_140906f7d:
        *param_1 = 0;
        if ((!bVar2) && (local_58 == 0)) {
            piVar4 = _errno();
            *piVar4 = 0x22;
            goto LAB_140906fac;
        }
    }
    LAB_140906f99:
    piVar4 = _errno();
    *piVar4 = 0x16;
    FUN_1407dc370();
    LAB_140906fac:
    if (local_38 != '\0') {
        *(uint *) (local_40 + 200) = *(uint *) (local_40 + 200) & 0xfffffffd;
    }
    return lVar5;
}



// Library Function - Single Match
//  strnlen
//
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release,
// Visual Studio 2019 Release

size_t strnlen(char *_Str, size_t _MaxCount) {
    size_t sVar1;

    sVar1 = 0;
    if (_MaxCount != 0) {
        do {
            if (*_Str == '\0') {
                return sVar1;
            }
            sVar1 = sVar1 + 1;
            _Str = _Str + 1;
        } while (sVar1 < _MaxCount);
    }
    return sVar1;
}


undefined8 FUN_140906ffc(void) {
    LPCWSTR lpWideCharStr;
    int iVar1;
    LPSTR lpMultiByteStr;
    LPCWSTR *ppWVar2;

    lpWideCharStr = *DAT_140c5f508;
    ppWVar2 = DAT_140c5f508;
    while (true) {
        if (lpWideCharStr == (LPCWSTR) 0x0) {
            return 0;
        }
        iVar1 = WideCharToMultiByte(0, 0, lpWideCharStr, -1, (LPSTR) 0x0, 0, (LPCSTR) 0x0, (LPBOOL) 0x0);
        if ((iVar1 == 0) ||
            (lpMultiByteStr = (LPSTR) FUN_1407e2bb0((longlong) iVar1), lpMultiByteStr == (LPSTR) 0x0))
            break;
        iVar1 = WideCharToMultiByte(0, 0, *ppWVar2, -1, lpMultiByteStr, iVar1, (LPCSTR) 0x0, (LPBOOL) 0x0);
        if (iVar1 == 0) {
            free(lpMultiByteStr);
            return 0xffffffff;
        }
        iVar1 = FUN_140907504();
        if ((iVar1 < 0) && (lpMultiByteStr != (LPSTR) 0x0)) {
            free(lpMultiByteStr);
        }
        ppWVar2 = ppWVar2 + 1;
        lpWideCharStr = *ppWVar2;
    }
    return 0xffffffff;
}


int FUN_1409070f0(longlong param_1, longlong param_2, ulonglong param_3) {
    int iVar1;
    int iVar2;
    int *piVar3;
    _LocaleUpdate local_28[8];
    longlong local_20;
    longlong local_18;
    char local_10;

    _LocaleUpdate::_LocaleUpdate(local_28, (localeinfo_struct *) 0x0);
    if (param_3 == 0) {
        iVar1 = 0;
    } else if ((param_1 == 0) || (param_2 == 0)) {
        piVar3 = _errno();
        *piVar3 = 0x16;
        FUN_1407dc370();
        iVar1 = 0x7fffffff;
    } else {
        iVar1 = 0x7fffffff;
        if (param_3 < 0x80000000) {
            if (*(int *) (local_20 + 8) == 0) {
                iVar1 = FUN_14090789c(param_1, param_2, param_3, 0);
            } else {
                iVar2 = FUN_1407ea8f0(local_28, *(undefined8 *) (local_20 + 0x220), 0x1001, param_1, (int) param_3,
                                      param_2, (int) param_3, *(undefined4 *) (local_20 + 4));
                if (iVar2 != 0) {
                    iVar1 = iVar2 + -2;
                }
            }
        } else {
            piVar3 = _errno();
            *piVar3 = 0x16;
            FUN_1407dc370();
        }
    }
    if (local_10 != '\0') {
        *(uint *) (local_18 + 200) = *(uint *) (local_18 + 200) & 0xfffffffd;
    }
    return iVar1;
}


ulonglong FUN_1409071f8(LPWSTR param_1, byte *param_2, ulonglong param_3, localeinfo_struct *param_4) {
    int iVar1;
    DWORD DVar2;
    int *piVar3;
    ulonglong uVar4;
    uint cchWideChar;
    byte *pbVar5;
    uint uVar6;
    localeinfo_struct local_38;
    longlong local_28;
    char local_20;

    uVar4 = 0;
    if (param_1 != (LPWSTR) 0x0) {
        if (param_3 == 0) {
            return 0;
        }
        *param_1 = L'\0';
    }
    if (param_2 == (byte *) 0x0) {
        piVar3 = _errno();
        *piVar3 = 0x16;
        FUN_1407dc370();
        return 0xffffffffffffffff;
    }
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *) &local_38, param_4);
    if (param_1 == (LPWSTR) 0x0) {
        if ((local_38.locinfo)->locale_name[2] == (wchar_t *) 0x0) {
            uVar4 = FUN_1407e1990(param_2);
            goto LAB_14090739f;
        }
        uVar4 = 0xffffffffffffffff;
        iVar1 = MultiByteToWideChar((local_38.locinfo)->lc_codepage, 9, (LPCSTR) param_2, -1, (LPWSTR) 0x0, 0);
        if (iVar1 == 0) {
            piVar3 = _errno();
            *piVar3 = 0x2a;
            goto LAB_14090739f;
        }
    } else {
        if ((local_38.locinfo)->locale_name[2] == (wchar_t *) 0x0) {
            if (param_3 != 0) {
                do {
                    *param_1 = (ushort) param_2[uVar4];
                    if (param_2[uVar4] == 0) break;
                    uVar4 = uVar4 + 1;
                    param_1 = param_1 + 1;
                } while (uVar4 < param_3);
            }
            goto LAB_14090739f;
        }
        cchWideChar = (uint) param_3;
        iVar1 = MultiByteToWideChar((local_38.locinfo)->lc_codepage, 9, (LPCSTR) param_2, -1, param_1,
                                    cchWideChar);
        if (iVar1 == 0) {
            DVar2 = GetLastError();
            if (DVar2 == 0x7a) {
                param_3 = param_3 & 0xffffffff;
                pbVar5 = param_2;
                uVar6 = cchWideChar;
                while (uVar6 != 0) {
                    uVar6 = (int) param_3 - 1;
                    param_3 = (ulonglong) uVar6;
                    if (*pbVar5 == 0) break;
                    iVar1 = _isleadbyte_l((uint) *pbVar5, &local_38);
                    if ((iVar1 != 0) && (pbVar5 = pbVar5 + 1, *pbVar5 == 0)) goto LAB_14090733b;
                    pbVar5 = pbVar5 + 1;
                }
                iVar1 = MultiByteToWideChar((local_38.locinfo)->lc_codepage, 1, (LPCSTR) param_2,
                                            (int) pbVar5 - (int) param_2, param_1, cchWideChar);
                uVar4 = (ulonglong) iVar1;
                if (iVar1 != 0) goto LAB_14090739f;
            }
            LAB_14090733b:
            piVar3 = _errno();
            *piVar3 = 0x2a;
            *param_1 = L'\0';
            uVar4 = 0xffffffffffffffff;
            goto LAB_14090739f;
        }
    }
    uVar4 = (longlong) iVar1 - 1;
    LAB_14090739f:
    if (local_20 != '\0') {
        *(uint *) (local_28 + 200) = *(uint *) (local_28 + 200) & 0xfffffffd;
    }
    return uVar4;
}


int FUN_1409073d4(ulonglong *param_1, undefined2 *param_2, ulonglong param_3, undefined8 param_4,
                  ulonglong param_5, localeinfo_struct *param_6) {
    int *piVar1;
    longlong lVar2;
    ulonglong uVar3;
    int iVar4;
    _LocaleUpdate local_38[16];
    longlong local_28;
    char local_20;

    iVar4 = 0;
    if (param_2 == (undefined2 *) 0x0) {
        if (param_3 != 0) {
            LAB_140907410:
            piVar1 = _errno();
            *piVar1 = 0x16;
            FUN_1407dc370();
            return 0x16;
        }
    } else {
        if (param_3 == 0) goto LAB_140907410;
        *param_2 = 0;
    }
    if (param_1 != (ulonglong *) 0x0) {
        *param_1 = 0;
    }
    _LocaleUpdate::_LocaleUpdate(local_38, param_6);
    uVar3 = param_5;
    if (param_3 < param_5) {
        uVar3 = param_3;
    }
    if (uVar3 < 0x80000000) {
        lVar2 = FUN_1409071f8(param_2, param_4, uVar3, local_38);
        if (lVar2 == -1) {
            if (param_2 != (undefined2 *) 0x0) {
                *param_2 = 0;
            }
            piVar1 = _errno();
            iVar4 = *piVar1;
            goto LAB_1409074d5;
        }
        uVar3 = lVar2 + 1;
        if (param_2 != (undefined2 *) 0x0) {
            if (param_3 < uVar3) {
                if (param_5 != 0xffffffffffffffff) {
                    *param_2 = 0;
                    piVar1 = _errno();
                    iVar4 = 0x22;
                    goto LAB_1409074b6;
                }
                iVar4 = 0x50;
                uVar3 = param_3;
            }
            param_2[uVar3 - 1] = 0;
        }
        if (param_1 != (ulonglong *) 0x0) {
            *param_1 = uVar3;
        }
    } else {
        piVar1 = _errno();
        iVar4 = 0x16;
        LAB_1409074b6:
        *piVar1 = iVar4;
        FUN_1407dc370();
    }
    LAB_1409074d5:
    if (local_20 == '\0') {
        return iVar4;
    }
    *(uint *) (local_28 + 200) = *(uint *) (local_28 + 200) & 0xfffffffd;
    return iVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong *FUN_140907504(void **param_1, int param_2) {
    void *_Memory;
    code *pcVar1;
    int iVar2;
    BOOL BVar3;
    int *piVar4;
    void *pvVar5;
    longlong *plVar6;
    longlong *plVar7;
    LPCSTR lpName;
    undefined *puVar8;
    LPCSTR lpValue;
    uint uVar9;
    longlong *plVar10;
    ulonglong uVar11;
    longlong lVar12;
    longlong *plVar13;
    longlong lVar14;
    bool bVar15;

    plVar13 = (longlong *) 0x0;
    if (param_1 == (void **) 0x0) {
        piVar4 = _errno();
        *piVar4 = 0x16;
        FUN_1407dc370();
        return (longlong *) 0xffffffff;
    }
    _Memory = *param_1;
    if (((_Memory == (void *) 0x0) ||
         (pvVar5 = (void *) FUN_140907a0c(_Memory, 0x3d), plVar7 = DAT_140c5f500, pvVar5 == (void *) 0x0))
        || (_Memory == pvVar5)) {
        LAB_140907624:
        piVar4 = _errno();
        *piVar4 = 0x16;
        return (longlong *) 0xffffffff;
    }
    bVar15 = *(char *) ((longlong) pvVar5 + 1) == '\0';
    plVar6 = DAT_140c5f500;
    if ((DAT_140c5f500 == _DAT_140c5f538) &&
        (plVar6 = plVar13, plVar10 = DAT_140c5f500, DAT_140c5f500 != (longlong *) 0x0)) {
        for (; *plVar10 != 0; plVar10 = plVar10 + 1) {
            plVar6 = (longlong *) (ulonglong) ((int) plVar6 + 1);
        }
        plVar6 = (longlong *) FUN_1407e2bb0((longlong) ((int) plVar6 + 1), 8);
        if (plVar6 == (longlong *) 0x0) {
            FUN_1407dbbd0(9);
        }
        lVar12 = *plVar7;
        plVar10 = plVar6;
        if (lVar12 != 0) {
            do {
                lVar12 = FUN_14090799c(lVar12);
                *plVar10 = lVar12;
                plVar10 = plVar10 + 1;
                lVar12 = *(longlong *) (((longlong) plVar7 - (longlong) plVar6) + (longlong) plVar10);
            } while (lVar12 != 0);
        }
        *plVar10 = 0;
    }
    DAT_140c5f500 = plVar6;
    if (DAT_140c5f500 == (longlong *) 0x0) {
        if ((param_2 == 0) || (DAT_140c5f508 == (undefined8 *) 0x0)) {
            if (bVar15) {
                return (longlong *) 0x0;
            }
            DAT_140c5f500 = (longlong *) FUN_1407e2c30(8);
            if (DAT_140c5f500 == (longlong *) 0x0) {
                return (longlong *) 0xffffffff;
            }
            *DAT_140c5f500 = 0;
            if (DAT_140c5f508 == (undefined8 *) 0x0) {
                DAT_140c5f508 = (undefined8 *) FUN_1407e2c30(8);
                if (DAT_140c5f508 == (undefined8 *) 0x0) {
                    return (longlong *) 0xffffffff;
                }
                *DAT_140c5f508 = 0;
            }
        } else {
            iVar2 = FUN_140906ffc();
            if (iVar2 != 0) goto LAB_140907624;
        }
    }
    plVar7 = DAT_140c5f500;
    if (DAT_140c5f500 == (longlong *) 0x0) {
        return (longlong *) 0xffffffff;
    }
    lVar14 = (longlong) ((int) pvVar5 - (int) _Memory);
    lVar12 = *DAT_140c5f500;
    plVar6 = DAT_140c5f500;
    while (lVar12 != 0) {
        iVar2 = FUN_1409070f0(_Memory, lVar12, lVar14);
        if ((iVar2 == 0) &&
            ((*(char *) (lVar14 + *plVar6) == '=' || (*(char *) (lVar14 + *plVar6) == '\0')))) {
            uVar11 = (longlong) plVar6 - (longlong) DAT_140c5f500 >> 3;
            goto LAB_1409076f5;
        }
        plVar6 = plVar6 + 1;
        lVar12 = *plVar6;
    }
    uVar11 = (ulonglong) (uint) -(int) ((longlong) plVar6 - (longlong) DAT_140c5f500 >> 3);
    LAB_1409076f5:
    uVar9 = (uint) uVar11;
    if (((int) uVar9 < 0) || (*plVar7 == 0)) {
        if (bVar15) {
            free(_Memory);
            *param_1 = (void *) 0x0;
            return (longlong *) 0x0;
        }
        if ((int) uVar9 < 0) {
            uVar9 = -uVar9;
        }
        if ((int) (uVar9 + 2) < (int) uVar9) {
            return (longlong *) 0xffffffff;
        }
        if (0x1ffffffffffffffe < (ulonglong) (longlong) (int) (uVar9 + 2)) {
            return (longlong *) 0xffffffff;
        }
        plVar7 = (longlong *) FUN_1407e2d30(DAT_140c5f500, 8);
        if (plVar7 == (longlong *) 0x0) {
            return (longlong *) 0xffffffff;
        }
        plVar7[(int) uVar9] = (longlong) _Memory;
        plVar7[(longlong) (int) uVar9 + 1] = 0;
        *param_1 = (void *) 0x0;
    } else {
        lVar12 = (longlong) (int) uVar9;
        free((void *) plVar7[lVar12]);
        if (!bVar15) {
            plVar7[lVar12] = (longlong) _Memory;
            *param_1 = (void *) 0x0;
            goto LAB_1409077e5;
        }
        if (plVar7[lVar12] != 0) {
            plVar6 = plVar7 + lVar12 + 1;
            do {
                lVar14 = *plVar6;
                uVar9 = (int) uVar11 + 1;
                uVar11 = (ulonglong) uVar9;
                plVar6 = plVar6 + 1;
                plVar7[lVar12] = lVar14;
                lVar12 = lVar12 + 1;
            } while (plVar7[lVar12] != 0);
        }
        if ((0x1ffffffffffffffe < (ulonglong) (longlong) (int) uVar9) ||
            (plVar7 = (longlong *) FUN_1407e2d30(DAT_140c5f500, (longlong) (int) uVar9, 8),
                    plVar7 == (longlong *) 0x0))
            goto LAB_1409077e5;
    }
    DAT_140c5f500 = plVar7;
    LAB_1409077e5:
    plVar7 = plVar13;
    if (param_2 != 0) {
        lVar12 = FUN_1407e1990(_Memory);
        lpName = (LPCSTR) FUN_1407e2bb0(lVar12 + 2, 1);
        plVar7 = (longlong *) 0x0;
        if (lpName != (LPCSTR) 0x0) {
            lVar12 = FUN_1407e1990(_Memory);
            iVar2 = FUN_1407ea194(lpName, lVar12 + 2, _Memory);
            if (iVar2 != 0) {
                FUN_1407dc390(0, 0, 0, 0, 0);
                pcVar1 = (code *) swi(3);
                plVar13 = (longlong *) (*pcVar1)();
                return plVar13;
            }
            puVar8 = (undefined *) (((longlong) lpName - (longlong) _Memory) + (longlong) pvVar5);
            *puVar8 = 0;
            lpValue = puVar8 + 1;
            if (bVar15) {
                lpValue = (LPCSTR) 0x0;
            }
            BVar3 = SetEnvironmentVariableA(lpName, lpValue);
            if (BVar3 == 0) {
                plVar13 = (longlong *) 0xffffffff;
                piVar4 = _errno();
                *piVar4 = 0x2a;
            }
            free(lpName);
            plVar7 = plVar13;
        }
    }
    if (bVar15) {
        free(_Memory);
        *param_1 = (void *) 0x0;
        return plVar7;
    }
    return plVar7;
}


int FUN_14090789c(longlong param_1, longlong param_2, ulonglong param_3, localeinfo_struct *param_4) {
    int iVar1;
    int iVar2;
    int *piVar3;
    longlong local_28[2];
    longlong local_18;
    char local_10;

    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *) local_28, param_4);
    if (param_3 == 0) {
        iVar1 = 0;
    } else if ((param_1 == 0) || (param_2 == 0)) {
        piVar3 = _errno();
        *piVar3 = 0x16;
        FUN_1407dc370();
        iVar1 = 0x7fffffff;
    } else {
        iVar1 = 0x7fffffff;
        if (param_3 < 0x80000000) {
            if (*(longlong *) (local_28[0] + 0x130) == 0) {
                iVar1 = FUN_1407f8188(param_1, param_2, param_3, local_28);
            } else {
                iVar2 = FUN_1407ea8f0(local_28, *(longlong *) (local_28[0] + 0x130), 0x1001, param_1,
                                      (int) param_3, param_2, (int) param_3, *(undefined4 *) (local_28[0] + 8));
                if (iVar2 == 0) {
                    piVar3 = _errno();
                    *piVar3 = 0x16;
                } else {
                    iVar1 = iVar2 + -2;
                }
            }
        } else {
            piVar3 = _errno();
            *piVar3 = 0x16;
            FUN_1407dc370();
        }
    }
    if (local_10 != '\0') {
        *(uint *) (local_18 + 200) = *(uint *) (local_18 + 200) & 0xfffffffd;
    }
    return iVar1;
}


void *FUN_14090799c(longlong param_1) {
    code *pcVar1;
    int iVar2;
    longlong lVar3;
    void *pvVar4;

    if (param_1 != 0) {
        lVar3 = FUN_1407e1990();
        pvVar4 = malloc(lVar3 + 1);
        if (pvVar4 != (void *) 0x0) {
            iVar2 = FUN_1407ea194(pvVar4, lVar3 + 1, param_1);
            if (iVar2 == 0) {
                return pvVar4;
            }
            FUN_1407dc390(0, 0, 0, 0, 0);
            pcVar1 = (code *) swi(3);
            pvVar4 = (void *) (*pcVar1)();
            return pvVar4;
        }
    }
    return (void *) 0x0;
}


byte *FUN_140907a0c(byte *param_1, uint param_2) {
    byte bVar1;
    int *piVar2;
    byte *pbVar3;
    _LocaleUpdate local_28[8];
    longlong local_20;
    longlong local_18;
    char local_10;

    _LocaleUpdate::_LocaleUpdate(local_28, (localeinfo_struct *) 0x0);
    if (param_1 == (byte *) 0x0) {
        piVar2 = _errno();
        *piVar2 = 0x16;
        FUN_1407dc370();
    } else {
        if (*(int *) (local_20 + 8) == 0) {
            param_1 = (byte *) FUN_1407de0b4(param_1, param_2);
            goto LAB_140907aab;
        }
        while (true) {
            bVar1 = *param_1;
            if (bVar1 == 0) break;
            if ((*(byte *) ((ulonglong) bVar1 + 0x19 + local_20) & 4) == 0) {
                pbVar3 = param_1;
                if (param_2 == bVar1) break;
            } else {
                pbVar3 = param_1 + 1;
                if (*pbVar3 == 0) goto LAB_140907aa8;
                if (param_2 == CONCAT11(bVar1, *pbVar3)) goto LAB_140907aab;
            }
            param_1 = pbVar3 + 1;
        }
        if (param_2 == bVar1) goto LAB_140907aab;
    }
    LAB_140907aa8:
    param_1 = (byte *) 0x0;
    LAB_140907aab:
    if (local_10 != '\0') {
        *(uint *) (local_18 + 200) = *(uint *) (local_18 + 200) & 0xfffffffd;
    }
    return param_1;
}


void thunk_FUN_140001e60(void) {
    FUN_140001e60();
    return;
}


ushort *FUN_140907af0(ushort *param_1, int param_2, uint param_3) {
    ushort uVar1;
    ulonglong uVar2;
    ushort uVar3;

    uVar3 = *param_1;
    if (uVar3 != 0) {
        do {
            if (uVar3 == 0x6c) {
                uVar2 = (ulonglong) param_1[1];
                LAB_140907c16:
                param_1 = param_1 + uVar2;
                goto LAB_140907c1a;
            }
            if (uVar3 == 0x76) {
                uVar2 = 2;
                if ((int) param_3 < 0) {
                    return param_1;
                }
                goto LAB_140907c16;
            }
            if (((ushort) (uVar3 - 0x7f) < 2) || ((ushort) (uVar3 - 0x84) < 2)) {
                if (param_1[2] == param_3) {
                    return param_1;
                }
                uVar2 = (ulonglong) (byte) (&DAT_1409cfaa0)[uVar3];
                goto LAB_140907c16;
            }
            switch (uVar3) {
                case 0x55:
                case 0x56:
                case 0x57:
                case 0x58:
                case 0x59:
                case 0x5a:
                case 0x5e:
                case 0x5f:
                case 0x60:
                    uVar1 = param_1[1];
                    goto LAB_140907ba7;
                case 0x5b:
                case 0x5c:
                case 0x5d:
                case 0x61:
                    uVar1 = param_1[2];
                LAB_140907ba7:
                    if ((ushort) (uVar1 - 0xf) < 2) {
                        param_1 = param_1 + 2;
                    }
                    break;
                case 0x8f:
                case 0x91:
                case 0x93:
                case 0x95:
                    param_1 = param_1 + param_1[1];
            }
            param_1 = param_1 + (byte) (&DAT_1409cfaa0)[uVar3];
            if ((((param_2 != 0) && (0x1c < uVar3)) && ((uVar3 < 0x1f || (uVar3 - 0x21 < 0x1a)))) &&
                ((param_1[-1] & 0xfc00) == 0xd800)) {
                param_1 = param_1 + 1;
            }
            LAB_140907c1a:
            uVar3 = *param_1;
        } while (uVar3 != 0);
    }
    return (ushort *) 0x0;
}


int FUN_1409080e0(longlong param_1, undefined8 *param_2, ulonglong param_3, longlong param_4,
                  uint param_5, uint param_6) {
    byte *pbVar1;
    uint uVar2;
    ulonglong uVar3;
    uint uVar4;
    undefined2 *puVar5;
    int iVar6;
    int iVar7;
    ulonglong uVar8;
    byte bVar9;

    uVar3 = (ulonglong) param_5;
    iVar6 = 0;
    iVar7 = iVar6;
    if (((param_3 & 1) != 0) && (uVar8 = uVar3, iVar7 = 0, param_5 <= param_6)) {
        do {
            iVar7 = iVar6;
            if (0xff < (uint) uVar8) break;
            uVar4 = (uint) uVar8 + 1;
            bVar9 = *(byte *) (uVar8 + *(longlong *) (param_4 + 8));
            iVar6 = iVar6 + 1;
            pbVar1 = (byte *) ((ulonglong) (bVar9 >> 3) + param_1);
            *pbVar1 = *pbVar1 | '\x01' << (bVar9 & 7);
            uVar8 = (ulonglong) uVar4;
            iVar7 = iVar6;
        } while (uVar4 <= param_6);
    }
    if (((param_3 & 0x800) == 0) && (0xffff < param_6)) {
        param_6 = 0xffff;
    } else if (param_6 < 0x100) {
        bVar9 = (byte) param_5 & 7;
        bVar9 = '\x01' << bVar9 | 1U >> 8 - bVar9;
        if (param_6 < param_5) {
            return iVar7;
        }
        uVar4 = (param_6 - param_5) + 1;
        uVar8 = (ulonglong) uVar4;
        do {
            pbVar1 = (byte *) ((uVar3 >> 3) + param_1);
            *pbVar1 = *pbVar1 | bVar9;
            bVar9 = bVar9 << 1 | (char) bVar9 < '\0';
            uVar8 = uVar8 - 1;
            uVar3 = uVar3 + 1;
        } while (uVar8 != 0);
        return iVar7 + uVar4;
    }
    puVar5 = (undefined2 *) *param_2;
    if ((param_3 & 0x800) == 0) {
        if (param_5 < param_6) {
            *puVar5 = 2;
            puVar5[1] = (short) param_5;
            puVar5[2] = (short) param_6;
            puVar5 = puVar5 + 3;
        } else if (param_5 == param_6) {
            *puVar5 = 1;
            puVar5[1] = (short) param_5;
            puVar5 = puVar5 + 2;
        }
    } else if (param_5 < param_6) {
        *puVar5 = 2;
        puVar5 = puVar5 + 1;
        uVar4 = FUN_140919b80(uVar3, puVar5);
        uVar2 = FUN_140919b80(param_6, puVar5 + uVar4);
        puVar5 = puVar5 + uVar4 + uVar2;
    } else if (param_5 == param_6) {
        *puVar5 = 1;
        uVar4 = FUN_140919b80(param_5, puVar5 + 1);
        puVar5 = puVar5 + 1 + uVar4;
    }
    *param_2 = puVar5;
    return iVar7;
}


int FUN_140908e00(ushort **param_1, uint *param_2, undefined4 *param_3, int param_4, uint param_5,
                  int param_6) {
    ushort uVar1;
    ushort uVar2;
    ushort uVar3;
    bool bVar4;
    ushort *puVar5;
    ushort uVar6;
    int iVar7;
    int iVar8;
    uint uVar9;
    ushort *puVar10;
    uint uVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    uint uVar15;
    uint uVar16;
    ushort *puVar17;
    ushort *puVar18;
    uint uVar19;

    puVar17 = *param_1;
    uVar6 = puVar17[1];
    uVar15 = (uint) uVar6;
    iVar14 = 0;
    iVar8 = 0;
    puVar10 = puVar17 + 2;
    uVar19 = param_5 >> 0xb & 1;
    if ((uVar19 != 0) && ((uVar6 & 0xfc00) == 0xd800)) {
        uVar15 = ((uVar6 & 0x3ff) << 10 | *puVar10 & 0x3ff) + 0x10000;
        puVar10 = puVar17 + 3;
    }
    puVar17 = puVar10 + -1;
    uVar16 = uVar15;
    if (uVar15 == 0) {
        *param_3 = 1;
        iVar12 = iVar14;
        goto LAB_14090904c;
    }
    uVar9 = uVar15 - 0x30;
    iVar12 = iVar8;
    if (0x4a < uVar9) goto LAB_14090904c;
    uVar11 = (uint) *(short *) (&DAT_1409ce270 + (ulonglong) uVar9 * 2);
    puVar18 = puVar17;
    if (uVar11 == 0) {
        switch ((ulonglong) uVar9) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                if (param_6 == 0) {
                    uVar6 = *puVar10;
                    puVar5 = puVar10;
                    uVar19 = uVar15;
                    while ((uVar19 = uVar19 - 0x30, 0x2f < uVar6 && (uVar6 < 0x3a))) {
                        if (0xccccccb < (int) uVar19) {
                            uVar6 = puVar18[1];
                            if (0x2f < uVar6) goto LAB_1409092d0;
                            goto LAB_1409091cd;
                        }
                        uVar19 = (uint) *puVar5 + uVar19 * 10;
                        uVar6 = puVar5[1];
                        puVar18 = puVar5;
                        puVar5 = puVar5 + 1;
                    }
                    if (((int) uVar19 < 10) || ((int) uVar19 <= param_4)) goto LAB_140909202;
                }
                uVar15 = (uint) *puVar17;
                if (0x37 < *puVar17) {
                    puVar17 = puVar10 + -2;
                    uVar16 = 0;
                    break;
                }
            case 0:
                uVar16 = uVar15 - 0x30;
                do {
                    puVar10 = puVar17 + 1;
                    uVar11 = uVar11 + 1;
                    if (7 < (ushort) (puVar17[1] - 0x30)) break;
                    uVar16 = (uint) *puVar10 + (uVar16 - 6) * 8;
                    puVar17 = puVar10;
                } while ((int) uVar11 < 2);
                break;
            default:
                iVar12 = iVar14;
                if ((param_5 & 0x40) != 0) {
                    *param_3 = 3;
                    iVar12 = iVar8;
                }
                break;
            case 0x25:
                if ((param_5 >> 0x19 & 1) == 0) {
                    *param_3 = 0x25;
                }
                break;
            case 0x33:
                uVar6 = *puVar10;
                uVar15 = (uint) uVar6;
                uVar16 = (uint) uVar6;
                if (uVar6 == 0) {
                    *param_3 = 2;
                    puVar17 = puVar10;
                } else if (uVar6 < 0x80) {
                    if (uVar6 - 0x61 < 0x1a) {
                        uVar15 = uVar6 - 0x20;
                    }
                    puVar17 = puVar10;
                    uVar16 = uVar15 ^ 0x40;
                } else {
                    *param_3 = 0x44;
                    puVar17 = puVar10;
                }
                break;
            case 0x37:
                if (param_6 != 0) break;
                uVar6 = *puVar10;
                if ((uVar6 == 0x3c) || (uVar6 == 0x27)) {
                    iVar12 = 0x1b;
                    break;
                }
                if (uVar6 == 0x7b) {
                    uVar6 = puVar10[1];
                    puVar18 = puVar10;
                    while (uVar6 != 0) {
                        if ((uVar6 != 0x2d) && (9 < (ushort) (uVar6 - 0x30))) {
                            uVar6 = puVar18[1];
                            if ((uVar6 != 0) && (uVar6 != 0x7d)) {
                                iVar12 = 0x1c;
                                goto LAB_14090904c;
                            }
                            break;
                        }
                        uVar6 = puVar18[2];
                        puVar18 = puVar18 + 1;
                    }
                    bVar4 = true;
                    puVar17 = puVar10;
                } else {
                    bVar4 = false;
                }
                puVar10 = puVar17 + 1;
                if (*puVar10 == 0x2d) {
                    puVar17 = puVar17 + 1;
                }
                uVar6 = puVar17[1];
                uVar19 = 0;
                puVar18 = puVar17 + 1;
            joined_r0x000140909161:
                puVar5 = puVar18;
                if ((0x2f < uVar6) && (uVar6 < 0x3a)) {
                    if ((int) uVar19 < 0xccccccc) goto code_r0x000140909170;
                    uVar6 = puVar17[1];
                    puVar18 = puVar17;
                    while ((0x2f < uVar6 && (uVar6 < 0x3a))) {
                        uVar6 = puVar18[2];
                        puVar18 = puVar18 + 1;
                    }
                    goto LAB_1409091cd;
                }
                if ((bVar4) && (puVar17 = puVar17 + 1, *puVar17 != 0x7d)) {
                    *param_3 = 0x39;
                    break;
                }
                if (uVar19 == 0) {
                    *param_3 = 0x3a;
                    break;
                }
                puVar18 = puVar17;
                if (*puVar10 == 0x2d) {
                    if (param_4 < (int) uVar19) {
                        *param_3 = 0xf;
                        break;
                    }
                    uVar19 = (param_4 - uVar19) + 1;
                }
                goto LAB_140909202;
            case 0x45:
                if ((param_5 >> 0x19 & 1) != 0) {
                    uVar6 = *puVar10;
                    if ((((uVar6 < 0x100) && (((&DAT_1409cf060)[uVar6] & 8) != 0)) &&
                         (uVar3 = puVar10[1], uVar3 < 0x100)) &&
                        (((((&DAT_1409cf060)[uVar3] & 8) != 0 && (uVar1 = puVar10[2], uVar1 < 0x100)) &&
                          ((((&DAT_1409cf060)[uVar1] & 8) != 0 &&
                            ((uVar2 = puVar10[3], uVar2 < 0x100 && (((&DAT_1409cf060)[uVar2] & 8) != 0)))))))) {
                        uVar15 = (uint) uVar6;
                        if (0x60 < uVar6) {
                            uVar15 = uVar6 - 0x20;
                        }
                        uVar9 = (uint) uVar3;
                        iVar8 = 0x37;
                        if (uVar15 < 0x41) {
                            iVar8 = 0x30;
                        }
                        if (0x60 < uVar3) {
                            uVar9 = uVar3 - 0x20;
                        }
                        iVar14 = 0x37;
                        if (uVar9 < 0x41) {
                            iVar14 = 0x30;
                        }
                        uVar11 = (uint) uVar1;
                        if (0x60 < uVar1) {
                            uVar11 = uVar1 - 0x20;
                        }
                        iVar13 = 0x37;
                        iVar7 = 0x37;
                        if (uVar11 < 0x41) {
                            iVar7 = 0x30;
                        }
                        uVar16 = (uint) uVar2;
                        if (0x60 < uVar2) {
                            uVar16 = uVar2 - 0x20;
                        }
                        if (uVar16 < 0x41) {
                            iVar13 = 0x30;
                        }
                        puVar17 = puVar10 + 3;
                        uVar16 = ((((((uVar15 - iVar8) * 0x10 - iVar14) + uVar9) * 0x10 - iVar7) + uVar11) * 0x10
                                  - iVar13) + uVar16;
                        uVar15 = 0xffff;
                        if (uVar19 != 0) {
                            uVar15 = 0x10ffff;
                        }
                        if (uVar15 < uVar16) {
                            *param_3 = 0x4c;
                        } else if ((uVar19 != 0) && (uVar16 - 0xd800 < 0x800)) {
                            *param_3 = 0x49;
                        }
                    }
                    break;
                }
            case 0x1c:
            case 0x3c:
                *param_3 = 0x25;
                break;
            case 0x48:
                if ((param_5 >> 0x19 & 1) == 0) {
                    if (*puVar10 == 0x7b) {
                        uVar6 = puVar10[1];
                        puVar10 = puVar10 + 1;
                        uVar16 = 0;
                        joined_r0x0001409093f0:
                        if ((uVar6 < 0x100) && (((&DAT_1409cf060)[uVar6] & 8) != 0)) {
                            puVar10 = puVar10 + 1;
                            uVar15 = (uint) uVar6;
                            if ((uVar16 == 0) && (uVar15 == 0x30)) goto LAB_14090945c;
                            if (0x60 < uVar15) {
                                uVar15 = uVar15 - 0x20;
                            }
                            iVar8 = 0x37;
                            if (uVar15 < 0x41) {
                                iVar8 = 0x30;
                            }
                            uVar16 = (uVar16 * 0x10 - iVar8) + uVar15;
                            uVar15 = 0xffff;
                            if (uVar19 != 0) {
                                uVar15 = 0x10ffff;
                            }
                            if (uVar16 <= uVar15) goto LAB_14090945c;
                            uVar6 = *puVar10;
                            while ((uVar6 < 0x100 && (((&DAT_1409cf060)[uVar6] & 8) != 0))) {
                                uVar6 = puVar10[1];
                                puVar10 = puVar10 + 1;
                            }
                            *param_3 = 0x22;
                        }
                        if (*puVar10 == 0x7d) {
                            puVar17 = puVar10;
                            if ((uVar19 != 0) && (uVar16 - 0xd800 < 0x800)) {
                                *param_3 = 0x49;
                            }
                            break;
                        }
                    }
                    uVar16 = 0;
                    do {
                        puVar10 = puVar17 + 1;
                        uVar11 = uVar11 + 1;
                        if ((0xff < puVar17[1]) || (((&DAT_1409cf060)[puVar17[1]] & 8) == 0)) break;
                        uVar6 = *puVar10;
                        uVar15 = (uint) uVar6;
                        if (0x60 < uVar6) {
                            uVar15 = uVar6 - 0x20;
                        }
                        iVar8 = 0x37;
                        if (uVar15 < 0x41) {
                            iVar8 = 0x30;
                        }
                        uVar16 = (uVar16 * 0x10 - iVar8) + uVar15;
                        puVar17 = puVar10;
                    } while ((int) uVar11 < 2);
                } else {
                    uVar6 = *puVar10;
                    if ((((uVar6 < 0x100) && (((&DAT_1409cf060)[uVar6] & 8) != 0)) &&
                         (uVar3 = puVar10[1], uVar3 < 0x100)) && (((&DAT_1409cf060)[uVar3] & 8) != 0)) {
                        uVar15 = (uint) uVar6;
                        if (0x60 < uVar6) {
                            uVar15 = uVar6 - 0x20;
                        }
                        iVar14 = 0x37;
                        iVar8 = 0x37;
                        if (uVar15 < 0x41) {
                            iVar8 = 0x30;
                        }
                        uVar19 = (uint) uVar3;
                        if (0x60 < uVar3) {
                            uVar19 = uVar3 - 0x20;
                        }
                        if (uVar19 < 0x41) {
                            iVar14 = 0x30;
                        }
                        puVar17 = puVar10 + 1;
                        uVar16 = ((uVar15 - iVar8) * 0x10 - iVar14) + uVar19;
                    }
                }
        }
    } else {
        uVar19 = uVar11;
        iVar12 = iVar14;
        uVar16 = uVar11;
        if (0 < (int) uVar11) goto LAB_14090904c;
        LAB_140909202:
        iVar12 = -uVar19;
        puVar17 = puVar18;
        uVar16 = uVar15;
        if ((iVar12 == 0xc) &&
            ((puVar18[1] == 0x7b &&
              (iVar8 = FUN_14090ef20(), puVar17 = puVar18, uVar16 = uVar15, iVar8 == 0)))) {
            *param_3 = 0x25;
        }
    }
    goto LAB_14090904c;
    LAB_14090945c:
    uVar6 = *puVar10;
    goto joined_r0x0001409093f0;
    code_r0x000140909170:
    uVar6 = puVar5[1];
    uVar19 = ((uint) *puVar5 + uVar19 * 10) - 0x30;
    puVar18 = puVar5 + 1;
    puVar17 = puVar5;
    goto joined_r0x000140909161;
    LAB_1409091cd:
    *param_3 = 0x3d;
    puVar17 = puVar18;
    goto LAB_14090904c;
    while (uVar6 = puVar18[2], puVar18 = puVar17, 0x2f < uVar6) {
        LAB_1409092d0:
        puVar17 = puVar18 + 1;
        if (0x39 < uVar6) goto LAB_1409091cd;
    }
    *param_3 = 0x3d;
    LAB_14090904c:
    if (((param_5 >> 0x1d & 1) != 0) && (iVar12 - 6U < 6)) {
        iVar12 = iVar12 + 0x17;
    }
    *param_1 = puVar17;
    *param_2 = uVar16;
    return iVar12;
}


int FUN_140909600(undefined8 param_1, uint param_2) {
    byte bVar1;
    int iVar2;
    byte *pbVar3;
    int iVar4;
    char *pcVar5;

    pcVar5 = "alpha";
    iVar4 = 0;
    pbVar3 = &DAT_1409ce408;
    while ((param_2 != *pbVar3 || (iVar2 = FUN_140919950(param_1, pcVar5, param_2), iVar2 != 0))) {
        bVar1 = *pbVar3;
        pbVar3 = pbVar3 + 1;
        iVar4 = iVar4 + 1;
        pcVar5 = pcVar5 + (int) (bVar1 + 1);
        if (*pbVar3 == 0) {
            return -1;
        }
    }
    return iVar4;
}


undefined8 FUN_140909680(longlong param_1, longlong *param_2) {
    short sVar1;
    short sVar2;
    int iVar3;

    sVar1 = *(short *) (param_1 + 4);
    sVar2 = *(short *) (param_1 + 2);
    param_1 = param_1 + 4;
    do {
        if (sVar1 == 0) {
            return 0;
        }
        if ((sVar1 == 0x5c) && (*(short *) (param_1 + 2) == 0x5d)) {
            param_1 = param_1 + 2;
        } else {
            if (sVar1 == 0x5d) {
                return 0;
            }
            if ((sVar1 == sVar2) && (*(short *) (param_1 + 2) == 0x5d)) {
                *param_2 = param_1;
                return 1;
            }
            if ((((sVar1 == 0x5b) && (*(ushort *) (param_1 + 2) < 0x3e)) &&
                 ((0x2400400000000000U >> ((ulonglong) *(ushort *) (param_1 + 2) & 0x3f) & 1) != 0)) &&
                (iVar3 = FUN_140909680(param_1, param_2), iVar3 != 0)) {
                return 0;
            }
        }
        sVar1 = *(short *) (param_1 + 2);
        param_1 = param_1 + 2;
    } while (true);
}


/*
Unable to decompile 'FUN_140909730'
Cause: Exception while decompiling 140909730: process: timeout

*/


undefined8 FUN_14090d9a0(ushort *param_1, ushort *param_2, int param_3, longlong param_4) {
    short *psVar1;
    bool bVar2;
    ushort uVar3;
    int iVar4;
    ulonglong uVar5;
    ushort *puVar6;
    ushort uVar7;
    longlong lVar8;

    uVar7 = param_1[(byte) (&DAT_1409cfaa0)[*param_1]];
    param_1 = param_1 + (byte) (&DAT_1409cfaa0)[*param_1];
    do {
        switch (uVar7) {
            case 4:
            case 5:
            case 0x70:
            case 0x87:
            case 0x88:
            case 0x89:
            case 0x8a:
            case 0x8b:
                break;
            default:
                goto switchD_14090d9f6_caseD_6;
            case 0x78:
            case 0x79:
            case 0x7a:
                do {
                    puVar6 = param_1 + param_1[1];
                    param_1 = param_1 + param_1[1];
                } while (*puVar6 == 0x71);
                uVar7 = *param_1;
        }
        uVar5 = (ulonglong) uVar7;
        uVar7 = param_1[(byte) (&DAT_1409cfaa0)[uVar5]];
        param_1 = param_1 + (byte) (&DAT_1409cfaa0)[uVar5];
    } while (true);
    switchD_14090d9f6_caseD_6:
    joined_r0x00014090da48:
    if (param_2 <= param_1) {
        return 1;
    }
    uVar7 = *param_1;
    if (uVar7 == 0x77) {
        do {
            puVar6 = param_1 + param_1[1];
            param_1 = param_1 + param_1[1];
        } while (*puVar6 == 0x71);
        uVar7 = *param_1;
        goto switchD_14090db75_caseD_11;
    }
    if (uVar7 == 0x6f) {
        puVar6 = *(ushort **) (param_4 + 0x20);
        if (puVar6 < *(ushort **) (param_4 + 0x48)) {
            do {
                if ((uint) *puVar6 == (uint) ((longlong) param_1 + (2 - *(longlong *) (param_4 + 0x28)) >> 1)) {
                    return 1;
                }
                puVar6 = puVar6 + 1;
            } while (puVar6 < *(ushort **) (param_4 + 0x48));
        }
        lVar8 = *(longlong *) (param_4 + 0x28) + (ulonglong) param_1[1] * 2;
        if (*(short *) (*(longlong *) (param_4 + 0x28) + 2 + (ulonglong) param_1[1] * 2) == 0) {
            return 1;
        }
        while (iVar4 = FUN_14090d9a0(lVar8, param_2, param_3), iVar4 == 0) {
            psVar1 = (short *) (lVar8 + (ulonglong) *(ushort *) (lVar8 + 2) * 2);
            lVar8 = lVar8 + (ulonglong) *(ushort *) (lVar8 + 2) * 2;
            if (*psVar1 != 0x71) {
                return 0;
            }
        }
        goto switchD_14090db75_caseD_11;
    }
    if (((ushort) (uVar7 - 0x8c) < 3) || (uVar7 == 0x9b)) {
        param_1 = param_1 + (byte) (&DAT_1409cfaa0)[uVar7];
        do {
            puVar6 = param_1 + param_1[1];
            param_1 = param_1 + param_1[1];
        } while (*puVar6 == 0x71);
        uVar7 = *param_1;
        goto switchD_14090db75_caseD_11;
    }
    if ((ushort) (uVar7 - 0x82) < 4) {
        do {
            puVar6 = param_1 + param_1[1];
            param_1 = param_1 + param_1[1];
        } while (*puVar6 == 0x71);
        uVar7 = *param_1;
        goto switchD_14090db75_caseD_11;
    }
    if ((ushort) (uVar7 - 0x7b) < 7) {
        if (param_1[1] == 0) {
            return 1;
        }
        if ((uVar7 == 0x81) && (puVar6 = param_1 + param_1[1], *puVar6 != 0x71)) {
            uVar7 = *puVar6;
            param_1 = puVar6;
        } else {
            bVar2 = false;
            do {
                if ((!bVar2) && (iVar4 = FUN_14090d9a0(param_1, param_2, param_3, param_4), iVar4 != 0)) {
                    bVar2 = true;
                }
                puVar6 = param_1 + param_1[1];
                param_1 = param_1 + param_1[1];
            } while (*puVar6 == 0x71);
            if (!bVar2) {
                return 0;
            }
            uVar7 = *param_1;
        }
        goto switchD_14090db75_caseD_11;
    }
    switch (uVar7) {
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x16:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x23:
        case 0x24:
        case 0x29:
        case 0x2b:
        case 0x3d:
        case 0x3e:
        case 0x43:
        case 0x45:
        case 0x57:
        case 0x58:
        case 0x5d:
        case 0x5f:
            goto switchD_14090db75_caseD_6;
        case 0x21:
        case 0x22:
        case 0x25:
        case 0x26:
        case 0x2a:
        case 0x2c:
        case 0x2e:
        case 0x2f:
        case 0x32:
        case 0x33:
        case 0x37:
        case 0x39:
            if ((param_3 != 0) && ((param_1[1] & 0xfc00) == 0xd800)) {
                param_1 = param_1 + 1;
            }
            break;
        case 0x27:
        case 0x28:
        case 0x2d:
        case 0x34:
        case 0x35:
        case 0x3a:
            if ((param_3 != 0) && ((param_1[2] & 0xfc00) == 0xd800)) {
                param_1 = param_1 + 1;
            }
            break;
        case 0x55:
        case 0x56:
        case 0x59:
        case 0x5a:
        case 0x5e:
        case 0x60:
            uVar3 = param_1[1];
            goto LAB_14090dbcb;
        case 0x5b:
        case 0x5c:
        case 0x61:
            uVar3 = param_1[2];
        LAB_14090dbcb:
            if ((ushort) (uVar3 - 0xf) < 2) {
                param_1 = param_1 + 2;
            }
            break;
        case 0x6a:
        case 0x6b:
            puVar6 = param_1 + 0x11;
            goto LAB_14090db8f;
        case 0x6c:
            puVar6 = param_1 + param_1[1];
            param_1 = puVar6;
        LAB_14090db8f:
            switch (*puVar6) {
                case 0x62:
                case 99:
                case 0x66:
                case 0x67:
                    break;
                default:
                switchD_14090db75_caseD_6:
                    return 0;
                case 0x68:
                case 0x69:
                    if (puVar6[1] != 0) {
                        return 0;
                    }
            }
            break;
        case 0x71:
        case 0x72:
        case 0x73:
        case 0x74:
        case 0x75:
            return 1;
        case 0x8f:
        case 0x91:
        case 0x93:
        case 0x95:
            param_1 = param_1 + param_1[1];
    }
    switchD_14090db75_caseD_11:
    uVar3 = param_1[(byte) (&DAT_1409cfaa0)[uVar7]];
    param_1 = param_1 + (byte) (&DAT_1409cfaa0)[uVar7];
    do {
        switch (uVar3) {
            case 4:
            case 5:
            case 0x70:
            case 0x87:
            case 0x88:
            case 0x89:
            case 0x8a:
            case 0x8b:
                break;
            default:
                goto switchD_14090dd56_caseD_6;
            case 0x78:
            case 0x79:
            case 0x7a:
                do {
                    puVar6 = param_1 + param_1[1];
                    param_1 = param_1 + param_1[1];
                } while (*puVar6 == 0x71);
                uVar3 = *param_1;
        }
        uVar5 = (ulonglong) uVar3;
        uVar3 = param_1[(byte) (&DAT_1409cfaa0)[uVar5]];
        param_1 = param_1 + (byte) (&DAT_1409cfaa0)[uVar5];
    } while (true);
    switchD_14090dd56_caseD_6:
    goto joined_r0x00014090da48;
}


undefined4 FUN_14090dfe0(longlong param_1) {
    int iVar1;
    longlong lVar2;
    int iVar3;

    iVar1 = *(int *) (param_1 + 0x60);
    iVar3 = iVar1 * 2;
    if (0x32000 < iVar3) {
        iVar3 = 0x32000;
    }
    if ((iVar1 < 0x32000) && (99 < iVar3 - iVar1)) {
        lVar2 = (*(code *) PTR_FUN_140c1b1e0)((longlong) (iVar3 * 2));
        if (lVar2 == 0) {
            return 0x15;
        }
        FUN_1407db590(lVar2, *(undefined8 *) (param_1 + 0x20), (longlong) *(int *) (param_1 + 0x60) * 2);
        *(longlong *) (param_1 + 0x48) =
                lVar2 + (*(longlong *) (param_1 + 0x48) - *(longlong *) (param_1 + 0x20) >> 1) * 2;
        if (0x800 < *(int *) (param_1 + 0x60)) {
            (*(code *) PTR_thunk_FUN_140001e60_140c1b1e8)();
        }
        *(longlong *) (param_1 + 0x20) = lVar2;
        *(int *) (param_1 + 0x60) = iVar3;
        return 0;
    }
    return 0x48;
}


uint FUN_14090e0a0(short *param_1, int *param_2, int param_3) {
    ushort *puVar1;
    short *psVar2;
    ushort uVar3;
    int iVar4;
    uint uVar5;
    longlong lVar6;
    ushort *puVar7;
    uint uVar8;
    int iVar9;
    int local_res8;

    uVar8 = 0;
    iVar9 = -1;
    *param_2 = -1;
    LAB_14090e0c5:
    if (((ushort) (*param_1 - 0x7fU) < 2) || ((ushort) (*param_1 - 0x84U) < 2)) {
        lVar6 = 1;
    } else {
        lVar6 = 0;
    }
    uVar3 = param_1[lVar6 + 2];
    puVar7 = (ushort *) (param_1 + lVar6 + 2);
    do {
        switch (uVar3) {
            default:
                goto switchD_14090e117_caseD_6;
            case 0x78:
            case 0x79:
            case 0x7a:
                do {
                    puVar1 = puVar7 + puVar7[1];
                    puVar7 = puVar7 + puVar7[1];
                } while (*puVar1 == 0x71);
            case 4:
            case 5:
            case 0x70:
            case 0x87:
            case 0x88:
            case 0x89:
            case 0x8a:
            case 0x8b:
                puVar7 = puVar7 + (byte) (&DAT_1409cfaa0)[*puVar7];
                uVar3 = *puVar7;
        }
    } while (true);
    switchD_14090e117_caseD_6:
    switch (*puVar7) {
        case 0x1d:
        case 0x23:
        case 0x24:
        case 0x2b:
            goto switchD_14090e175_caseD_1d;
        case 0x1e:
        case 0x30:
        case 0x31:
        case 0x38:
            goto switchD_14090e175_caseD_1e;
        default:
            goto switchD_14090e175_caseD_1f;
        case 0x29:
            puVar7 = puVar7 + 1;
        switchD_14090e175_caseD_1d:
            if (param_3 == 0) {
                switchD_14090e175_caseD_1f:
                return 0;
            }
            if (iVar9 < 0) {
                iVar4 = 0;
                uVar5 = (uint) puVar7[1];
            } else {
                LAB_14090e1f7:
                iVar4 = iVar9;
                uVar5 = uVar8;
                if (uVar8 != puVar7[1]) {
                    return 0;
                }
            }
        LAB_14090e1ff:
            uVar8 = uVar5;
            iVar9 = iVar4;
            psVar2 = param_1 + (ushort) param_1[1];
            param_1 = param_1 + (ushort) param_1[1];
            if (*psVar2 != 0x71) {
                *param_2 = iVar9;
                return uVar8;
            }
            goto LAB_14090e0c5;
        case 0x36:
            puVar7 = puVar7 + 1;
        switchD_14090e175_caseD_1e:
            if (param_3 == 0) {
                return 0;
            }
            if (iVar9 < 0) {
                iVar4 = 1;
                uVar5 = (uint) puVar7[1];
                goto LAB_14090e1ff;
            }
            goto LAB_14090e1f7;
        case 0x77:
        case 0x7b:
        case 0x7c:
        case 0x7d:
        case 0x7e:
        case 0x7f:
        case 0x80:
        case 0x81:
        case 0x84:
        case 0x85:
            uVar5 = FUN_14090e0a0();
            if (local_res8 < 0) {
                return 0;
            }
            iVar4 = local_res8;
            if (-1 < iVar9) {
                if (uVar8 != uVar5) {
                    return 0;
                }
                iVar4 = iVar9;
                uVar5 = uVar8;
                if (iVar9 != local_res8) {
                    return 0;
                }
            }
            goto LAB_14090e1ff;
    }
}


ulonglong FUN_14090e350(longlong param_1, int param_2, int param_3, longlong param_4) {
    ushort *puVar1;
    ushort uVar2;
    int iVar3;
    ulonglong uVar4;
    ushort *puVar5;
    ushort *puVar6;
    ushort *puVar7;
    uint uVar8;
    uint uVar9;
    uint uVar10;

    uVar9 = 0xffffffff;
    uVar10 = 0;
    uVar2 = *(ushort *) (param_1 + 4);
    puVar6 = (ushort *) (param_1 + 4);
    while (uVar2 < 0x9c) {
        switch (IMAGE_DOS_HEADER_140000000.e_magic +
                (&switchD_14090e3a4::switchdataD_14090e60c)
                [(&switchD_14090e3a4::switchdataD_14090e648)[(int) (uint) uVar2]]) {
            case (char *) 0x14090e3a6:
                uVar4 = FUN_14090e350(puVar6 + (uVar2 == 0x7f), param_2);
                iVar3 = (int) uVar4;
                if (iVar3 < 0) {
                    return uVar4;
                }
                do {
                    puVar7 = puVar6 + puVar6[1];
                    puVar6 = puVar6 + puVar6[1];
                } while (*puVar7 == 0x71);
            LAB_14090e3df:
                uVar10 = uVar10 + iVar3;
                puVar7 = puVar6 + 2;
                break;
            case (char *) 0x14090e3f9:
                uVar8 = uVar10;
                if ((-1 < (int) uVar9) && (uVar8 = uVar9, uVar9 != uVar10)) {
                    return 0xffffffff;
                }
                if (uVar2 != 0x71) {
                    return (ulonglong) uVar8;
                }
                puVar7 = puVar6 + 2;
                uVar10 = 0;
                uVar9 = uVar8;
                break;
            case (char *) 0x14090e41f:
                if (param_3 == 0) {
                    return 0xfffffffd;
                }
                puVar7 = (ushort *) (*(longlong *) (param_4 + 0x28) + (ulonglong) puVar6[1] * 2);
                puVar5 = puVar7;
                do {
                    puVar1 = puVar5 + puVar5[1];
                    puVar5 = puVar5 + puVar5[1];
                } while (*puVar1 == 0x71);
                if ((puVar7 < puVar6) && (puVar6 < puVar5)) {
                    return 0xffffffff;
                }
                uVar4 = FUN_14090e350(puVar7 + 1, param_2);
                iVar3 = (int) uVar4;
                if (iVar3 < 0) {
                    return uVar4;
                }
                goto LAB_14090e3df;
            case (char *) 0x14090e480:
                do {
                    puVar7 = puVar6 + puVar6[1];
                    puVar6 = puVar6 + puVar6[1];
                } while (*puVar7 == 0x71);
                puVar7 = puVar6 + (byte) (&DAT_1409cfaa0)[*puVar6];
                break;
            case (char *) 0x14090e4a3:
                puVar7 = puVar6 + (int) ((uint) puVar6[1] + (uint) (byte) (&DAT_1409cfaa0)[uVar2]);
                break;
            case (char *) 0x14090e4c0:
                puVar7 = puVar6 + (byte) (&DAT_1409cfaa0)[uVar2];
                break;
            case (char *) 0x14090e4d5:
                uVar10 = uVar10 + 1;
                puVar7 = puVar6 + 2;
                if ((param_2 != 0) && ((puVar6[1] & 0xfc00) == 0xd800)) {
                    puVar7 = puVar6 + 3;
                }
                break;
            case (char *) 0x14090e506:
                puVar7 = puVar6 + 3;
                uVar10 = uVar10 + puVar6[1];
                if ((param_2 != 0) && ((puVar6[2] & 0xfc00) == 0xd800)) {
                    puVar7 = puVar6 + 4;
                }
                break;
            case (char *) 0x14090e534:
                uVar10 = uVar10 + puVar6[1];
                if ((ushort) (puVar6[2] - 0xf) < 2) {
                    puVar6 = puVar6 + 2;
                }
                puVar7 = puVar6 + 3;
                break;
            case (char *) 0x14090e553:
                puVar6 = puVar6 + 2;
            case (char *) 0x14090e557:
                uVar10 = uVar10 + 1;
                puVar7 = puVar6 + 1;
                break;
            case (char *) 0x14090e55f:
                if (uVar2 == 0x6c) {
                    uVar4 = (ulonglong) puVar6[1];
                } else {
                    uVar4 = 0x11;
                }
                puVar7 = puVar6 + uVar4;
                uVar2 = *puVar7;
                if (0x61 < uVar2) {
                    if (uVar2 < 0x68) {
                        return 0xffffffff;
                    }
                    if (uVar2 < 0x6a) {
                        if (puVar7[1] != puVar7[2]) {
                            return 0xffffffff;
                        }
                        uVar10 = uVar10 + puVar7[1];
                        puVar7 = puVar7 + 3;
                        break;
                    }
                }
                uVar10 = uVar10 + 1;
                break;
            case (char *) 0x14090e5b7:
                goto LAB_14090e5bc;
            case (char *) 0x14090e5d8:
                return 0xffffffff;
            case (char *) 0x14090e5fa:
                return 0xfffffffe;
        }
        puVar6 = puVar7;
        uVar2 = *puVar7;
    }
    LAB_14090e5bc:
    return 0xfffffffc;
}


void FUN_14090e6f0(longlong param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4,
                   undefined4 param_5) {
    short *psVar1;
    int iVar2;
    undefined4 local_res8[2];
    short *local_28[2];

    local_28[0] = *(short **) (param_1 + 0x30);
    local_res8[0] = 0;
    iVar2 = FUN_14090e7b0(local_28, param_1, param_2, param_3, param_4, param_5, local_res8);
    psVar1 = local_28[0];
    while ((iVar2 < 1 && (local_28[0] = psVar1 + 1, *psVar1 != 0))) {
        iVar2 = FUN_14090e7b0(local_28, param_1, param_2, param_3, param_4, param_5, local_res8);
        psVar1 = local_28[0];
    }
    return;
}



// WARNING: Type propagation algorithm not settling

ulonglong FUN_14090e7b0(ushort **param_1, longlong param_2, longlong param_3, ulonglong param_4,
                        int param_5, int param_6, uint *param_7) {
    uint uVar1;
    ushort uVar2;
    uint uVar3;
    bool bVar4;
    bool bVar5;
    ushort uVar6;
    int iVar7;
    ulonglong uVar8;
    int iVar9;
    uint uVar10;
    ushort *puVar11;
    uint local_38;
    ushort *local_28;
    longlong local_20;

    uVar10 = (uint) param_4;
    puVar11 = *param_1;
    iVar9 = 0;
    uVar3 = *param_7;
    bVar5 = false;
    uVar8 = param_4;
    iVar7 = 0;
    local_28 = puVar11;
    if (*puVar11 == 0x28) {
        local_28 = puVar11 + 1;
        if (puVar11[1] == 0x2a) {
            local_28 = puVar11 + 2;
            iVar7 = iVar9;
        } else if (puVar11[1] == 0x3f) {
            uVar6 = puVar11[2];
            local_28 = puVar11 + 2;
            if (uVar6 == 0x7c) {
                local_28 = puVar11 + 3;
                bVar5 = true;
                iVar7 = 1;
            } else {
                if (uVar6 == 0x23) {
                    local_28 = puVar11 + 3;
                    uVar6 = *local_28;
                    while ((uVar6 != 0 && (uVar6 != 0x29))) {
                        local_28 = local_28 + 1;
                        uVar6 = *local_28;
                    }
                    goto LAB_14090ece9;
                }
                if (uVar6 == 0x28) {
                    if (puVar11[3] != 0x3f) {
                        uVar6 = *local_28;
                        while (iVar7 = iVar9, uVar6 != 0) {
                            if (uVar6 == 0x29) {
                                if (*local_28 != 0) {
                                    local_28 = local_28 + 1;
                                }
                                break;
                            }
                            local_28 = local_28 + 1;
                            uVar6 = *local_28;
                        }
                    }
                } else {
                    if (*local_28 == 0x50) {
                        local_28 = puVar11 + 3;
                    }
                    if ((((*local_28 == 0x3c) && (local_28[1] != 0x21)) && (local_28[1] != 0x3d)) ||
                        (iVar7 = iVar9, *local_28 == 0x27)) {
                        uVar1 = uVar3 + 1;
                        *param_7 = uVar1;
                        if ((param_3 == 0) && (uVar1 == uVar10)) {
                            return (ulonglong) uVar1;
                        }
                        uVar6 = *local_28;
                        puVar11 = local_28 + 1;
                        if (uVar6 == 0x3c) {
                            uVar6 = 0x3e;
                        }
                        uVar2 = *puVar11;
                        local_28 = puVar11;
                        while (uVar2 != uVar6) {
                            local_28 = local_28 + 1;
                            uVar2 = *local_28;
                        }
                        iVar7 = iVar9;
                        if ((param_3 != 0) && (uVar10 == (uint) ((longlong) local_28 - (longlong) puVar11 >> 1))) {
                            iVar7 = FUN_1409199a0(param_3, puVar11, param_4 & 0xffffffff);
                            if (iVar7 == 0) {
                                return (ulonglong) *param_7;
                            }
                            uVar8 = param_4 & 0xffffffff;
                            iVar7 = iVar9;
                        }
                    }
                }
            }
        } else {
            uVar1 = uVar3 + 1;
            *param_7 = uVar1;
            iVar7 = iVar9;
            if ((param_3 == 0) && (uVar1 == uVar10)) {
                return (ulonglong) uVar1;
            }
        }
    }
    local_20 = (longlong) iVar7;
    local_38 = uVar3;
    if (local_28 < *(ushort **) (param_2 + 0x38)) {
        LAB_14090e9e0:
        uVar6 = *local_28;
        if (uVar6 == 0x5c) {
            local_28 = local_28 + 1;
            if (*local_28 != 0) {
                if (*local_28 == 0x51) {
                    do {
                        puVar11 = local_28;
                        local_28 = puVar11 + 1;
                        if (*local_28 == 0) goto LAB_14090ece9;
                    } while ((*local_28 != 0x5c) || (local_28 = puVar11 + 2, *local_28 != 0x45));
                }
                goto LAB_14090eb69;
            }
        } else {
            if (uVar6 == 0x5b) {
                bVar4 = false;
                puVar11 = local_28;
                while (true) {
                    do {
                        while (true) {
                            local_28 = puVar11;
                            if (local_28[1] == 0x5c) break;
                            if ((bVar4) || (local_28[1] != 0x5e)) goto LAB_14090eabf;
                            bVar4 = true;
                            puVar11 = local_28 + 1;
                        }
                        puVar11 = local_28 + 2;
                    } while (*puVar11 == 0x45);
                    iVar7 = FUN_140919950(puVar11, &DAT_1409cf188, 3);
                    if (iVar7 != 0) break;
                    puVar11 = local_28 + 4;
                }
                LAB_14090eabf:
                if ((local_28[1] == 0x5d) && ((*(uint *) (param_2 + 0x7c) & 0x2000000) == 0)) {
                    local_28 = local_28 + 1;
                }
                local_28 = local_28 + 1;
                uVar6 = *local_28;
                while (uVar6 != 0x5d) {
                    if (uVar6 == 0) {
                        return 0xffffffff;
                    }
                    if (uVar6 == 0x5c) {
                        local_28 = local_28 + 1;
                        if (*local_28 == 0) goto LAB_14090ece9;
                        if (*local_28 == 0x51) {
                            do {
                                puVar11 = local_28;
                                local_28 = puVar11 + 1;
                                if (*local_28 == 0) goto LAB_14090ece9;
                            } while ((*local_28 != 0x5c) || (local_28 = puVar11 + 2, *local_28 != 0x45));
                        }
                    }
                    local_28 = local_28 + 1;
                    uVar6 = *local_28;
                }
                goto LAB_14090eb69;
            }
            if ((param_5 == 0) || (uVar6 != 0x23)) {
                if (uVar6 == 0x28) {
                    uVar8 = FUN_14090e7b0(&local_28, param_2, param_3, uVar8, param_5, param_6, param_7);
                    if (0 < (int) uVar8) {
                        return uVar8;
                    }
                    uVar6 = *local_28;
                    goto joined_r0x00014090ec05;
                }
                if (uVar6 != 0x29) {
                    if ((uVar6 == 0x7c) && (local_20 != 0)) {
                        if (*param_7 != local_38 && (int) local_38 <= (int) *param_7) {
                            local_38 = *param_7;
                        }
                        *param_7 = uVar3;
                    }
                    goto LAB_14090eb69;
                }
                if ((bVar5) && ((int) *param_7 < (int) local_38)) {
                    *param_7 = local_38;
                }
            } else {
                local_28 = local_28 + 1;
                uVar6 = *local_28;
                if (uVar6 != 0) {
                    do {
                        if (*(int *) (param_2 + 0x94) == 0) {
                            if (((local_28 <=
                                  (ushort *)
                                          ((longlong) *(int *) (param_2 + 0x98) * -2 +
                                           *(longlong *) (param_2 + 0x38))) &&
                                 (uVar6 == *(ushort *) (param_2 + 0x9c))) &&
                                ((*(int *) (param_2 + 0x98) == 1 || (local_28[1] == *(ushort *) (param_2 + 0x9e)))))
                                goto LAB_14090ebee;
                        } else if ((local_28 < *(ushort **) (param_2 + 0x38)) &&
                                   (iVar7 = FUN_1409199e0(), iVar7 != 0))
                            goto LAB_14090ebee;
                        puVar11 = local_28 + 1;
                        if ((param_6 != 0) && ((*puVar11 & 0xfc00) == 0xdc00)) {
                            puVar11 = local_28 + 2;
                        }
                        local_28 = puVar11;
                        uVar6 = *local_28;
                        if (uVar6 == 0) break;
                    } while (true);
                }
            }
        }
    }
    LAB_14090ece9:
    *param_1 = local_28;
    return 0xffffffff;
    LAB_14090ebee:
    local_28 = local_28 + (*(int *) (param_2 + 0x98) + -1);
    uVar6 = *local_28;
    joined_r0x00014090ec05:
    if (uVar6 == 0) goto LAB_14090ece9;
    LAB_14090eb69:
    local_28 = local_28 + 1;
    if (*(ushort **) (param_2 + 0x38) <= local_28) goto LAB_14090ece9;
    uVar8 = param_4 & 0xffffffff;
    goto LAB_14090e9e0;
}


undefined8 FUN_14090ed10(ushort *param_1, uint param_2, longlong param_3, int param_4) {
    ushort *puVar1;
    ushort uVar2;
    int iVar3;
    uint uVar4;
    ulonglong uVar5;

    do {
        uVar2 = param_1[(byte) (&DAT_1409cfaa0)[*param_1]];
        puVar1 = param_1 + (byte) (&DAT_1409cfaa0)[*param_1];
        while (uVar2 - 4 < 0x88) {
            uVar5 = (ulonglong) uVar2;
            switch (IMAGE_DOS_HEADER_140000000.e_magic +
                    (&switchD_14090ed76::switchdataD_14090ee80)
                    [(&switchD_14090ed76::switchdataD_14090ee8c)[(int) (uVar2 - 4)]]) {
                case (char *) 0x14090ed78:
                    uVar2 = puVar1[(byte) (&DAT_1409cfaa0)[uVar5]];
                    puVar1 = puVar1 + (byte) (&DAT_1409cfaa0)[uVar5];
                    break;
                case (char *) 0x14090ed97:
                    goto switchD_14090ed76_caseD_4090ed97;
            }
        }
        switchD_14090ed76_caseD_4090ed97:
        uVar2 = *puVar1;
        iVar3 = param_4;
        uVar4 = param_2;
        if ((uVar2 - 0x7d < 2) || (uVar2 - 0x82 < 2)) {
            LAB_14090ee50:
            iVar3 = FUN_14090ed10(puVar1, uVar4, param_3, iVar3);
            joined_r0x00014090ee05:
            if (iVar3 != 0) {
                return 0;
            }
        } else {
            if ((uVar2 - 0x7f < 2) || (uVar2 - 0x84 < 2)) {
                uVar4 = 1;
                if (puVar1[2] < 0x20) {
                    uVar4 = 1 << ((byte) puVar1[2] & 0x1f);
                }
                uVar4 = uVar4 | param_2;
                goto LAB_14090ee50;
            }
            if ((uVar2 == 0x77) || (uVar2 == 0x81)) goto LAB_14090ee50;
            if (uVar2 - 0x7b < 2) {
                iVar3 = param_4 + 1;
                goto LAB_14090ee50;
            }
            if (((uVar2 - 0x55 & 0xfffffff6) == 0) && (uVar2 != 0x5d)) {
                if (puVar1[1] != 0xd) {
                    return 0;
                }
                if ((*(uint *) (param_3 + 0x74) & param_2) != 0) {
                    return 0;
                }
                if (0 < param_4) {
                    return 0;
                }
                iVar3 = *(int *) (param_3 + 0x8c);
                goto joined_r0x00014090ee05;
            }
            if ((1 < uVar2 - 1) && (uVar2 != 0x19)) {
                return 0;
            }
        }
        puVar1 = param_1 + param_1[1];
        param_1 = param_1 + param_1[1];
        if (*puVar1 != 0x71) {
            return 1;
        }
    } while (true);
}


bool FUN_14090ef20(short *param_1) {
    ushort *puVar1;
    ushort uVar2;
    short *psVar3;
    short *psVar4;

    if ((ushort) (*param_1 - 0x30U) < 10) {
        psVar3 = param_1 + 1;
        uVar2 = param_1[1];
        while ((0x2f < uVar2 && (uVar2 < 0x3a))) {
            puVar1 = (ushort *) (psVar3 + 1);
            psVar3 = psVar3 + 1;
            uVar2 = *puVar1;
        }
        if (*psVar3 == 0x7d) {
            return true;
        }
        if (*psVar3 == 0x2c) {
            if (psVar3[1] == 0x7d) {
                return true;
            }
            if ((ushort) (psVar3[1] - 0x30U) < 10) {
                psVar4 = psVar3 + 2;
                uVar2 = psVar3[2];
                while ((0x2f < uVar2 && (uVar2 < 0x3a))) {
                    puVar1 = (ushort *) (psVar4 + 1);
                    psVar4 = psVar4 + 1;
                    uVar2 = *puVar1;
                }
                return *psVar4 == 0x7d;
            }
        }
    }
    return false;
}


undefined8 FUN_14090efc0(ushort *param_1, uint param_2, longlong param_3, int param_4) {
    ushort uVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    ulonglong uVar5;
    ushort *puVar6;
    ushort *puVar7;

    do {
        uVar1 = param_1[(byte) (&DAT_1409cfaa0)[*param_1]];
        puVar7 = param_1 + (byte) (&DAT_1409cfaa0)[*param_1];
        while (uVar1 - 4 < 0x88) {
            uVar5 = (ulonglong) uVar1;
            switch (IMAGE_DOS_HEADER_140000000.e_magic +
                    (&switchD_14090f026::switchdataD_14090f1ec)
                    [(&switchD_14090f026::switchdataD_14090f1f8)[(int) (uVar1 - 4)]]) {
                case (char *) 0x14090f028:
                    uVar1 = puVar7[(byte) (&DAT_1409cfaa0)[uVar5]];
                    puVar7 = puVar7 + (byte) (&DAT_1409cfaa0)[uVar5];
                    break;
                case (char *) 0x14090f046:
                    goto switchD_14090f026_caseD_4090f046;
            }
        }
        switchD_14090f026_caseD_4090f046:
        uVar1 = *puVar7;
        if (uVar1 == 0x81) {
            puVar6 = puVar7 + 2;
            if (*puVar6 == 0x70) {
                puVar6 = puVar7 + 6;
            }
            if (*puVar6 - 0x87 < 5) {
                return 0;
            }
            iVar2 = FUN_14090efc0(puVar6, param_2, param_3, param_4);
            if (iVar2 == 0) {
                return 0;
            }
            do {
                puVar7 = puVar6 + puVar6[1];
                puVar6 = puVar6 + puVar6[1];
            } while (*puVar7 == 0x71);
            uVar1 = puVar6[2];
            puVar7 = puVar6 + 2;
            while (uVar1 - 4 < 0x88) {
                switch (IMAGE_DOS_HEADER_140000000.e_magic +
                        (&switchD_14090f0e6::switchdataD_14090f280)
                        [(&switchD_14090f0e6::switchdataD_14090f28c)[(int) (uVar1 - 4)]]) {
                    case (char *) 0x14090f0e8:
                        puVar7 = puVar7 + (byte) (&DAT_1409cfaa0)[*puVar7];
                        uVar1 = *puVar7;
                        break;
                    case (char *) 0x14090f105:
                        goto switchD_14090f0e6_caseD_4090f105;
                }
            }
            switchD_14090f0e6_caseD_4090f105:
            uVar1 = *puVar7;
        }
        uVar3 = (uint) uVar1;
        iVar2 = param_4;
        uVar4 = param_2;
        if ((uVar3 - 0x7d < 2) || (uVar3 - 0x82 < 2)) {
            LAB_14090f1bb:
            iVar2 = FUN_14090efc0(puVar7, uVar4, param_3, iVar2);
            joined_r0x00014090f1c8:
            if (iVar2 == 0) {
                return 0;
            }
        } else {
            if ((uVar3 - 0x7f < 2) || (uVar3 - 0x84 < 2)) {
                uVar4 = 1;
                if (puVar7[2] < 0x20) {
                    uVar4 = 1 << ((byte) puVar7[2] & 0x1f);
                }
                uVar4 = uVar4 | param_2;
                goto LAB_14090f1bb;
            }
            if (uVar3 == 0x77) goto LAB_14090f1bb;
            if (uVar3 - 0x7b < 2) {
                iVar2 = param_4 + 1;
                goto LAB_14090f1bb;
            }
            if (((uVar3 - 0x55 & 0xfffffff6) == 0) && (uVar3 != 0x5d)) {
                if (puVar7[1] != 0xc) {
                    return 0;
                }
                if ((*(uint *) (param_3 + 0x74) & param_2) != 0) {
                    return 0;
                }
                if (0 < param_4) {
                    return 0;
                }
                iVar2 = *(int *) (param_3 + 0x8c);
                goto joined_r0x00014090f1c8;
            }
            if (1 < uVar3 - 0x19) {
                return 0;
            }
        }
        puVar7 = param_1 + param_1[1];
        param_1 = param_1 + param_1[1];
        if (*puVar7 != 0x71) {
            return 1;
        }
    } while (true);
}


void FUN_14090f320(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
                   undefined8 param_5) {
    FUN_14090f350(param_1, param_2, 0, param_3, param_4, param_5);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14090f350(short *param_1, ulonglong param_2, int *param_3, char **param_4, undefined4 *param_5,
                   undefined *param_6) {
    short *psVar1;
    undefined4 *puVar2;
    longlong lVar3;
    char cVar4;
    short sVar5;
    ushort uVar6;
    undefined2 uVar7;
    undefined4 uVar8;
    undefined4 *puVar9;
    int iVar10;
    uint uVar11;
    uint uVar12;
    longlong lVar13;
    undefined4 *puVar14;
    longlong lVar15;
    uint uVar16;
    char *pcVar17;
    ushort uVar18;
    uint uVar19;
    undefined4 *puVar20;
    int iVar21;
    undefined *puVar22;
    ulonglong uVar23;
    undefined4 *puVar24;
    uint uVar25;
    undefined *puVar26;
    undefined8 unaff_R14;
    longlong lStackX8;
    undefined4 auStackX16[2];
    longlong lStackX24;
    ulonglong *puStackX32;
    uint local_1188[2];
    short *local_1180;
    uint local_1178;
    uint local_1174;
    undefined8 local_1170;
    ulonglong local_1168;
    uint local_1160;
    uint local_115c;
    undefined4 *local_1158;
    int *local_1150;
    undefined8 local_1148;
    undefined4 *local_1140;
    longlong local_1138;
    short *local_1130;
    char **local_1128;
    undefined4 *local_1120;
    undefined8 local_1118;
    undefined *local_1108;
    undefined *local_1100;
    undefined *local_10f8;
    undefined *local_10f0;
    undefined4 *local_10e8;
    undefined4 *local_10e0;
    short *local_10d8;
    short *local_10d0;
    undefined8 local_10c8;
    undefined4 *local_10c0;
    longlong local_10b8;
    undefined8 local_10b0;
    int local_10a8;
    ulonglong local_10a4;
    int local_109c;
    undefined8 local_1098;
    undefined4 local_1090;
    uint local_108c;
    ushort local_1088;
    undefined2 uStack4230;
    undefined4 uStack4228;
    int local_1080;
    undefined8 local_107c;
    undefined4 local_1074;
    undefined4 local_1070;
    ushort local_106c;
    ushort local_106a;
    undefined4 local_1058;
    short local_1054[2046];
    ulonglong local_58;
    undefined8 uStack64;

    uStack64 = 0x14090f36d;
    lVar13 = FUN_1407f0f60();
    local_1120 = param_5;
    lVar13 = -lVar13;
    local_58 = DAT_140c0f7b0 ^ (ulonglong) (&stack0xffffffffffffffc8 + lVar13);
    uVar23 = param_2 & 0xffffffff;
    local_1138 = 1;
    iVar21 = 0;
    *(undefined4 *) ((longlong) &param_5 + lVar13) = 0;
    local_1180 = param_1;
    local_1150 = param_3;
    local_1130 = param_1;
    local_1128 = param_4;
    if (param_4 == (char **) 0x0) {
        if (param_3 != (int *) 0x0) {
            *param_3 = 99;
        }
        goto LAB_14090ffff;
    }
    *param_4 = (char *) 0x0;
    if (param_3 != (int *) 0x0) {
        *param_3 = 0;
    }
    *(undefined8 *) (&stack0x00001190 + lVar13) = unaff_R14;
    if (local_1120 == (undefined4 *) 0x0) {
        iVar10 = 0x10;
        goto LAB_14090f944;
    }
    *local_1120 = 0;
    puVar26 = &DAT_1409cfca0;
    if (param_6 != (undefined *) 0x0) {
        puVar26 = param_6;
    }
    local_1100 = puVar26 + 0x100;
    local_10f8 = puVar26 + 0x200;
    local_10f0 = puVar26 + 0x340;
    local_1108 = puVar26;
    if ((param_2 & 0xd8038580) == 0) {
        sVar5 = *param_1;
        uVar12 = 0xd;
        do {
            uVar19 = (uint) uVar23;
            if ((sVar5 != 0x28) || (param_1[(longlong) iVar21 + 1] != 0x2a)) goto LAB_14090f643;
            psVar1 = param_1 + (longlong) iVar21 + 2;
            *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14090f48d;
            iVar10 = FUN_140919950(psVar1, "UTF16)");
            if (iVar10 == 0) {
                iVar21 = iVar21 + 8;
                uVar23 = (ulonglong) (uVar19 | 0x800);
            } else {
                *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14090f4b2;
                iVar10 = FUN_140919950(psVar1, &DAT_1409cf1a0);
                if (iVar10 == 0) {
                    iVar21 = iVar21 + 6;
                    uVar23 = (ulonglong) (uVar19 | 0x800);
                } else {
                    *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14090f4d7;
                    iVar10 = FUN_140919950(psVar1, &DAT_1409cf1a8);
                    if (iVar10 == 0) {
                        iVar21 = iVar21 + 6;
                        uVar23 = (ulonglong) (uVar19 | 0x20000000);
                    } else {
                        *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14090f4f9;
                        iVar10 = FUN_140919950(psVar1, "NO_START_OPT)");
                        if (iVar10 == 0) {
                            iVar21 = iVar21 + 0xf;
                            uVar23 = (ulonglong) (uVar19 | 0x4000000);
                        } else {
                            *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14090f51e;
                            iVar10 = FUN_140919950(psVar1, &DAT_1409cf1c0);
                            if (iVar10 == 0) {
                                iVar21 = iVar21 + 5;
                                uVar11 = 0x100000;
                                uVar19 = uVar19 & 0xff8fffff;
                            } else {
                                *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14090f54a;
                                iVar10 = FUN_140919950(psVar1, &DAT_1409cf1c4);
                                if (iVar10 == 0) {
                                    iVar21 = iVar21 + 5;
                                    uVar11 = 0x200000;
                                    uVar19 = uVar19 & 0xff8fffff;
                                } else {
                                    *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14090f576;
                                    iVar10 = FUN_140919950(psVar1, "CRLF)");
                                    if (iVar10 == 0) {
                                        iVar21 = iVar21 + 7;
                                        uVar11 = 0x300000;
                                        uVar19 = uVar19 & 0xff8fffff;
                                    } else {
                                        *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14090f5a2;
                                        iVar10 = FUN_140919950(psVar1, &DAT_1409cf1d0);
                                        if (iVar10 == 0) {
                                            iVar21 = iVar21 + 6;
                                            uVar11 = 0x400000;
                                            uVar19 = uVar19 & 0xff8fffff;
                                        } else {
                                            *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14090f5cb;
                                            iVar10 = FUN_140919950(psVar1, "ANYCRLF)");
                                            if (iVar10 == 0) {
                                                iVar21 = iVar21 + 10;
                                                uVar11 = 0x500000;
                                                uVar19 = uVar19 & 0xff8fffff;
                                            } else {
                                                *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14090f5f4;
                                                iVar10 = FUN_140919950(psVar1, "BSR_ANYCRLF)");
                                                if (iVar10 == 0) {
                                                    uVar11 = 0x800000;
                                                } else {
                                                    *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14090f614;
                                                    iVar10 = FUN_140919950(psVar1, "BSR_UNICODE)");
                                                    if (iVar10 != 0) goto LAB_14090f643;
                                                    uVar11 = 0x1000000;
                                                }
                                                iVar21 = iVar21 + 0xe;
                                                uVar19 = uVar19 & 0xfe7fffff;
                                            }
                                        }
                                    }
                                }
                            }
                            uVar23 = (ulonglong) (uVar19 | uVar11);
                        }
                    }
                }
            }
            sVar5 = param_1[iVar21];
        } while (true);
    }
    iVar10 = 0x11;
    LAB_14090f932:
    *local_1120 = (int) ((longlong) param_1 - (longlong) local_1130 >> 1);
    goto LAB_14090f944;
    code_r0x00014090fbe4:
    local_1180 = local_1180 + 1;
    *(short *) local_1158 = 0x71;
    *(short *) ((longlong) local_1158 + 2) = (short) ((longlong) local_1158 - (longlong) puVar20 >> 1);
    local_1140 = local_1158;
    local_1158 = local_1158 + 1;
    *(undefined8 *) ((longlong) &lStackX24 + lVar13 + 8) = 0;
    *(undefined ***) ((longlong) &lStackX24 + lVar13) = &local_1108;
    *(undefined4 *) ((longlong) auStackX16 + lVar13) = 0;
    *(undefined8 **) ((longlong) &lStackX8 + lVar13) = &local_1148;
    *(undefined **) ((longlong) &lStackX24 + (longlong) &DAT_ffffffffffffffe8 + lVar13) =
            &stack0x0000003c + lVar13;
    *(ulonglong **) (&stack0xfffffffffffffff8 + lVar13) = &local_1168;
    *(uint **) (&stack0xfffffffffffffff0 + lVar13) = &local_1178;
    *(uint **) (&stack0xffffffffffffffe8 + lVar13) = &local_1174;
    *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14090fc69;
    iVar21 = FUN_140909730((longlong) &param_6 + lVar13, &local_1158, &local_1180,
                           (longlong) &param_5 + lVar13);
    puVar20 = puVar9;
    if (iVar21 == 0) goto LAB_14090fc7e;
    goto LAB_14090fb50;
    LAB_14090f643:
    psVar1 = local_1130;
    param_1 = local_1180;
    local_115c = (uint) (uVar23 >> 0xb) & 1;
    if (((uVar23 >> 0xb & 1) == 0) || ((uVar19 >> 0xd & 1) != 0)) {
        LAB_14090f676:
        if ((uVar19 >> 0x1d & 1) == 0) {
            if ((uVar19 & 0x1800000) == 0x1800000) {
                iVar10 = 0x38;
            } else {
                uVar11 = uVar19 & 0x700000;
                if (uVar11 < 0x300001) {
                    if (uVar11 == 0x300000) {
                        uVar12 = 0xd0a;
                    } else {
                        if ((uVar23 & 0x700000) != 0) {
                            if (uVar11 == 0x100000) goto LAB_14090f6d3;
                            if (uVar11 != 0x200000) goto LAB_14090f72c;
                        }
                        uVar12 = 10;
                    }
                    LAB_14090f6d3:
                    local_1074 = 0;
                    local_106c = (ushort) uVar12;
                    if (uVar12 < 0x100) {
                        local_1070 = 1;
                    } else {
                        local_1070 = 2;
                        local_106a = local_106c & 0xff;
                        local_106c = (ushort) (uVar12 >> 8);
                    }
                } else if (uVar11 == 0x400000) {
                    local_1074 = 1;
                } else {
                    if (uVar11 != 0x500000) {
                        LAB_14090f72c:
                        iVar10 = 0x38;
                        goto LAB_14090f932;
                    }
                    local_1074 = 2;
                }
                local_10e0 = &local_1058;
                local_10c0 = &local_1058;
                local_10a8 = 0x800;
                local_10e8 = &local_1058;
                local_1098 = 0;
                local_10a4 = 0;
                local_10b0 = 0;
                local_10b8 = 0;
                *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14090f793;
                local_10d8 = psVar1;
                uVar12 = FUN_140919930(psVar1);
                local_10d0 = psVar1 + uVar12;
                local_1140 = &local_1058;
                local_1180 = local_1054;
                *(ulonglong **) ((longlong) &lStackX24 + lVar13 + 8) = &local_1168;
                *(undefined ***) ((longlong) &lStackX24 + lVar13) = &local_1108;
                *(undefined4 *) ((longlong) auStackX16 + lVar13) = 0;
                *(undefined8 **) ((longlong) &lStackX8 + lVar13) = &local_1148;
                local_1188[0] = uVar19;
                local_108c = uVar19;
                *(longlong *) ((longlong) &lStackX24 + (longlong) &DAT_ffffffffffffffe8 + lVar13) =
                        (longlong) &param_6 + lVar13;
                local_1088 = 0;
                uStack4230 = 0;
                uStack4228 = 0;
                *(uint **) (&stack0xfffffffffffffff8 + lVar13) = &local_1174;
                local_1090 = 0;
                *(uint **) (&stack0xfffffffffffffff0 + lVar13) = &local_1178;
                local_109c = 0;
                local_10c8 = 0;
                local_1058 = 0x7d;
                *(undefined **) (&stack0xffffffffffffffe8 + lVar13) = &stack0x00000038 + lVar13;
                local_1148 = 0;
                local_1168 = 4;
                *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14090f84c;
                local_1170 = psVar1 + iVar21;
                iVar10 = FUN_140909730(local_1188, &local_1180, &local_1170, (longlong) &param_5 + lVar13);
                uVar12 = 0xfffffffe;
                uVar19 = (uint) local_10a4;
                param_1 = local_1170;
                while (iVar10 != 0) {
                    if (uVar19 < (uint) local_10a4) {
                        uVar19 = (uint) local_10a4;
                    }
                    if (*param_1 != 0x7c) {
                        *local_1180 = 0x72;
                        local_1188[0] = 0;
                        local_1160 = 0xfffffffe;
                        *(undefined4 *) (&stack0x00000038 + lVar13) = 0;
                        local_1170._4_4_ = (undefined4) ((ulonglong) param_1 >> 0x20);
                        local_1170 = (short *) CONCAT44(local_1170._4_4_, 0xfffffffe);
                        local_1180[1] = (short) ((longlong) local_1180 - (longlong) &local_1058 >> 1);
                        local_10a4 = local_10a4 & 0xffffffff00000000 | (ulonglong) uVar19;
                        if ((longlong) local_1168 < 0x7fffffeb) {
                            local_1138 = local_1168 + 1;
                            goto LAB_14090f914;
                        }
                        iVar10 = 0x14;
                        goto LAB_14090f932;
                    }
                    local_1168 = local_1168 + 2;
                    local_1180 = local_1054;
                    *(ulonglong **) ((longlong) &lStackX24 + lVar13 + 8) = &local_1168;
                    *(undefined ***) ((longlong) &lStackX24 + lVar13) = &local_1108;
                    *(undefined4 *) ((longlong) auStackX16 + lVar13) = 0;
                    *(undefined8 **) ((longlong) &lStackX8 + lVar13) = &local_1148;
                    *(longlong *) ((longlong) &lStackX24 + (longlong) &DAT_ffffffffffffffe8 + lVar13) =
                            (longlong) &param_6 + lVar13;
                    local_1170 = param_1 + 1;
                    *(uint **) (&stack0xfffffffffffffff8 + lVar13) = &local_1174;
                    *(uint **) (&stack0xfffffffffffffff0 + lVar13) = &local_1178;
                    *(undefined **) (&stack0xffffffffffffffe8 + lVar13) = &stack0x00000038 + lVar13;
                    *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14090f8ea;
                    iVar10 = FUN_140909730(local_1188, &local_1180, &local_1170, (longlong) &param_5 + lVar13);
                    param_1 = local_1170;
                }
                local_1188[0] = *(uint *) ((longlong) &param_6 + lVar13);
                *(undefined4 *) (&stack0x00000038 + lVar13) = *(undefined4 *) ((longlong) &param_6 + lVar13);
                local_1170 = (short *) ((ulonglong) param_1 & 0xffffffff00000000 |
                                        (ulonglong) *(uint *) ((longlong) &param_6 + lVar13));
                LAB_14090f914:
                iVar10 = *(int *) ((longlong) &param_5 + lVar13);
                param_3 = local_1150;
                if (iVar10 == 0) {
                    if (local_1138 < 0x10001) {
                        local_10b0._4_4_ = (int) (local_10b0 >> 0x20);
                        iVar10 = (int) local_1138;
                        *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14090f9e8;
                        puVar14 = (undefined4 *) (*(code *) PTR_FUN_140c1b1e0)();
                        if (puVar14 == (undefined4 *) 0x0) {
                            iVar10 = 0x15;
                            param_3 = local_1150;
                        } else {
                            puVar14[1] = (local_10b0._4_4_ * (int) local_10b0 + iVar10) * 2 + 0x30;
                            *puVar14 = 0x50435245;
                            puVar14[2] = local_108c;
                            puVar22 = (undefined *) 0x0;
                            *(ushort *) (puVar14 + 3) = local_1088;
                            puVar14[5] = 0;
                            *(undefined8 *) ((longlong) &lStackX24 + lVar13 + 8) = 0;
                            local_1148 = 0;
                            local_1118 = 4;
                            *(undefined2 *) (puVar14 + 6) = 0x18;
                            *(undefined2 *) ((longlong) puVar14 + 0x1a) = local_10b0._4_2_;
                            *(undefined2 *) ((longlong) puVar14 + 0x1e) = 0;
                            *(undefined2 *) (puVar14 + 7) = (undefined2) local_10b0;
                            *(undefined8 *) (puVar14 + 10) = 0;
                            *(undefined4 *) (&stack0x00000040 + lVar13) = 0;
                            if (puVar26 == &DAT_1409cfca0) {
                                puVar26 = puVar22;
                            }
                            *(undefined **) (puVar14 + 8) = puVar26;
                            local_10a4 = local_10a4 << 0x20;
                            local_1090 = 0;
                            local_109c = 0;
                            local_10b0 = local_10b0 & 0xffffffff00000000;
                            local_10b8 = (longlong) puVar14 + (ulonglong) *(ushort *) (puVar14 + 6) * 2;
                            uStack4228 = 0;
                            local_1080 = 0;
                            puVar2 = (undefined4 *)
                                    (local_10b8 +
                                     (longlong)
                                             (int) ((uint) *(ushort *) ((longlong) puVar14 + 0x1a) *
                                                    (uint) *(ushort *) (puVar14 + 7)) * 2);
                            local_107c = 0;
                            local_10c0 = local_10e8;
                            local_10c8 = 0;
                            *(short *) puVar2 = 0x7d;
                            uVar8 = puVar14[2];
                            *(short *) ((longlong) puVar2 + 2) = 0;
                            local_10a4._0_4_ = 0;
                            *(undefined4 *) ((longlong) &param_6 + lVar13) = uVar8;
                            local_1158 = puVar2 + 1;
                            *(undefined ***) ((longlong) &lStackX24 + lVar13) = &local_1108;
                            *(undefined4 *) ((longlong) auStackX16 + lVar13) = 0;
                            *(undefined8 **) ((longlong) &lStackX8 + lVar13) = &local_1148;
                            local_1180 = psVar1 + iVar21;
                            local_1140 = puVar2;
                            local_10e0 = puVar2;
                            *(undefined **) ((longlong) &lStackX24 + (longlong) &DAT_ffffffffffffffe8 + lVar13) =
                                    &stack0x0000003c + lVar13;
                            *(ulonglong **) (&stack0xfffffffffffffff8 + lVar13) = &local_1168;
                            *(uint **) (&stack0xfffffffffffffff0 + lVar13) = &local_1178;
                            *(uint **) (&stack0xffffffffffffffe8 + lVar13) = &local_1174;
                            *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14090fb42;
                            iVar21 = FUN_140909730();
                            puVar20 = puVar2;
                            puVar24 = puVar2;
                            uVar19 = uVar12;
                            uVar11 = (uint) local_10a4;
                            if (iVar21 != 0) {
                                LAB_14090fb50:
                                puVar9 = local_1158;
                                if (uVar11 < (uint) local_10a4) {
                                    uVar11 = (uint) local_10a4;
                                }
                                if (*(short *) puVar20 == 0x71) {
                                    if ((int) uVar19 < 0) {
                                        LAB_14090fb99:
                                        uVar25 = *(uint *) (&stack0x00000040 + lVar13);
                                        if ((int) local_1178 < 0) goto LAB_14090fbb5;
                                        uVar16 = *(uint *) (&stack0x0000003c + lVar13);
                                        if ((int) *(uint *) (&stack0x0000003c + lVar13) < 0) {
                                            local_1168 = local_1168 & 0xffffffff00000000 | (ulonglong) local_1174;
                                            *(uint *) (&stack0x0000003c + lVar13) = local_1178;
                                            uVar16 = local_1178;
                                        }
                                    } else {
                                        uVar25 = *(uint *) (&stack0x00000040 + lVar13);
                                        if ((uVar19 != local_1178) || (uVar25 != local_1174)) {
                                            if ((int) uVar12 < 0) {
                                                puVar22 = (undefined *) (ulonglong) uVar25;
                                                uVar12 = uVar19;
                                            }
                                            uVar19 = 0xffffffff;
                                            goto LAB_14090fb99;
                                        }
                                        LAB_14090fbb5:
                                        uVar16 = *(uint *) (&stack0x0000003c + lVar13);
                                    }
                                    if ((((uVar16 ^ uVar12) & 0xfffffffd) == 0) &&
                                        ((int) puVar22 == (int) local_1168)) {
                                        puVar22 = (undefined *) (local_1168 & 0xffffffff);
                                        uVar12 = uVar12 | uVar16;
                                    } else {
                                        uVar12 = 0xffffffff;
                                    }
                                } else {
                                    puVar22 = (undefined *) (local_1168 & 0xffffffff);
                                    uVar12 = *(uint *) (&stack0x0000003c + lVar13);
                                    *(uint *) (&stack0x00000040 + lVar13) = local_1174;
                                    uVar19 = local_1178;
                                    uVar25 = local_1174;
                                }
                                if (*local_1180 == 0x7c) goto code_r0x00014090fbe4;
                                uVar23 = (longlong) local_1158 - (longlong) puVar20 >> 1;
                                do {
                                    uVar18 = *(ushort *) ((longlong) puVar20 + 2);
                                    *(short *) ((longlong) puVar20 + 2) = (short) uVar23;
                                    uVar23 = (ulonglong) uVar18;
                                    puVar20 = (undefined4 *) ((longlong) puVar20 + (ulonglong) uVar18 * -2);
                                } while (uVar18 != 0);
                                *(short *) local_1158 = 0x72;
                                *(int *) (&stack0x00000038 + lVar13) = (int) puVar22;
                                local_1170 = (short *) ((ulonglong) local_1170 & 0xffffffff00000000 |
                                                        (ulonglong) uVar12);
                                *(short *) ((longlong) local_1158 + 2) =
                                        (short) ((longlong) local_1158 - (longlong) puVar2 >> 1);
                                local_10a4 = local_10a4 & 0xffffffff00000000 | (ulonglong) uVar11;
                                puVar24 = local_1158 + 1;
                                local_1188[0] = uVar25;
                                local_1160 = uVar19;
                            }
                            LAB_14090fc7e:
                            uVar12 = local_115c;
                            param_1 = local_1180;
                            lVar15 = 0;
                            *(undefined2 *) (puVar14 + 4) = (undefined2) local_10a4;
                            *(undefined2 *) ((longlong) puVar14 + 0x12) = (undefined2) local_1098;
                            *(undefined2 *) ((longlong) puVar14 + 0xe) = (undefined2) local_109c;
                            *(ushort *) (puVar14 + 3) = local_1088 | 2;
                            if (local_1080 != 0) {
                                *(undefined4 *) (&stack0x00000038 + lVar13) = 0;
                                local_1170 = (short *) CONCAT44(local_1170._4_4_, 0xffffffff);
                            }
                            iVar21 = *(int *) ((longlong) &param_5 + lVar13);
                            if (iVar21 == 0) {
                                if (*local_1180 != 0) {
                                    iVar21 = 0x16;
                                }
                                *(int *) ((longlong) &param_5 + lVar13) = iVar21;
                            }
                            *(short *) puVar24 = 0;
                            iVar21 = *(int *) ((longlong) &param_5 + lVar13);
                            if (local_1138 < (longlong) puVar24 + (2 - (longlong) puVar2) >> 1) {
                                iVar21 = 0x17;
                            }
                            *(int *) ((longlong) &param_5 + lVar13) = iVar21;
                            if (local_10e8 < local_10c0) {
                                uVar19 = 0xffffffff;
                                while (true) {
                                    if ((iVar21 != 0) || (local_10c0 <= local_10e8)) goto LAB_14090fde5;
                                    local_10c0 = (undefined4 *) ((longlong) local_10c0 + -2);
                                    uVar18 = *(ushort *) local_10c0;
                                    uVar6 = *(ushort *) ((ulonglong) uVar18 * 2 + (longlong) puVar2);
                                    if (uVar6 != uVar19) {
                                        *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14090fd54;
                                        lVar15 = FUN_140907af0(puVar2, uVar12);
                                        uVar19 = (uint) uVar6;
                                    }
                                    if (lVar15 == 0) break;
                                    *(short *) ((ulonglong) uVar18 * 2 + (longlong) puVar2) =
                                            (short) (lVar15 - (longlong) puVar2 >> 1);
                                    iVar21 = *(int *) ((longlong) &param_5 + lVar13);
                                }
                                iVar21 = 0x35;
                                *(undefined4 *) ((longlong) &param_5 + lVar13) = 0x35;
                            }
                            LAB_14090fde5:
                            if (0x800 < local_10a8) {
                                *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14090fdf7;
                                (*(code *) PTR_thunk_FUN_140001e60_140c1b1e8)();
                                iVar21 = *(int *) ((longlong) &param_5 + lVar13);
                            }
                            if (iVar21 == 0) {
                                if (*(ushort *) (puVar14 + 4) <= *(ushort *) ((longlong) puVar14 + 0x12) &&
                                    *(ushort *) ((longlong) puVar14 + 0x12) != *(ushort *) (puVar14 + 4)) {
                                    iVar21 = 0xf;
                                }
                                *(int *) ((longlong) &param_5 + lVar13) = iVar21;
                            }
                            if (local_107c._4_4_ != 0) {
                                *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14090fe2d;
                                lVar15 = FUN_140907af0();
                                if (lVar15 != 0) {
                                    do {
                                        if (*(short *) (lVar15 + 2) == 0) {
                                            uVar7 = *(undefined2 *) (lVar15 + -4 +
                                                                     (ulonglong) *(ushort *) (lVar15 + -2) * 2);
                                            lVar3 = lVar15 + (ulonglong) *(ushort *) (lVar15 + -2) * 2;
                                            *(undefined2 *) (lVar3 + -4) = 0;
                                            *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14090fe69;
                                            iVar10 = FUN_14090e350();
                                            *(undefined2 *) (lVar3 + -4) = uVar7;
                                            if (iVar10 < 0) {
                                                if (iVar10 == -2) {
                                                    *(undefined4 *) ((longlong) &param_5 + lVar13) = 0x24;
                                                    *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14090fec8;
                                                    (*(code *) PTR_thunk_FUN_140001e60_140c1b1e8)(puVar14);
                                                    iVar10 = *(int *) ((longlong) &param_5 + lVar13);
                                                    param_3 = local_1150;
                                                    goto LAB_14090f932;
                                                }
                                                iVar21 = 0x19;
                                                if (iVar10 == -4) {
                                                    iVar21 = 0x46;
                                                }
                                                *(int *) ((longlong) &param_5 + lVar13) = iVar21;
                                                goto LAB_14090fe9c;
                                            }
                                            if (local_109c < iVar10) {
                                                local_109c = iVar10;
                                            }
                                            *(short *) (lVar15 + 2) = (short) iVar10;
                                        }
                                        *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14090fe90;
                                        lVar15 = FUN_140907af0();
                                    } while (lVar15 != 0);
                                    iVar21 = *(int *) ((longlong) &param_5 + lVar13);
                                }
                            }
                            LAB_14090fe9c:
                            if (iVar21 == 0) {
                                uVar12 = puVar14[2];
                                if ((uVar12 & 0x10) == 0) {
                                    *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14090ff02;
                                    iVar21 = FUN_14090ed10(puVar2, 0, &local_1108, 0);
                                    if (iVar21 == 0) {
                                        uVar12 = local_1188[0];
                                        if ((int) local_1160 < 0) {
                                            *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14090ff77;
                                            uVar12 = FUN_14090e0a0(puVar2, &local_1160, 0);
                                            if ((int) local_1160 < 0) {
                                                *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14090ff91;
                                                iVar21 = FUN_14090efc0(puVar2, 0, &local_1108, 0);
                                                if (iVar21 != 0) {
                                                    *(ushort *) (puVar14 + 3) = *(ushort *) (puVar14 + 3) | 0x100;
                                                }
                                                goto LAB_14090ff14;
                                            }
                                        }
                                        uVar18 = (ushort) uVar12;
                                        *(ushort *) (puVar14 + 5) = uVar18;
                                        if ((((local_1160 & 1) != 0) && (uVar18 < 0x100)) &&
                                            ((byte) local_1100[(ulonglong) uVar12 & 0xffff] != uVar18)) {
                                            *(ushort *) (puVar14 + 3) = *(ushort *) (puVar14 + 3) | 0x20;
                                        }
                                        *(ushort *) (puVar14 + 3) = *(ushort *) (puVar14 + 3) | 0x10;
                                    } else {
                                        puVar14[2] = uVar12 | 0x10;
                                    }
                                }
                                LAB_14090ff14:
                                if ((-1 < (int) local_1170) &&
                                    (((*(byte *) (puVar14 + 2) & 0x10) == 0 || (((ulonglong) local_1170 & 2) != 0)))) {
                                    uVar12 = *(uint *) (&stack0x00000038 + lVar13);
                                    uVar18 = (ushort) uVar12;
                                    *(ushort *) ((longlong) puVar14 + 0x16) = uVar18;
                                    if ((((ulonglong) local_1170 & 1) != 0) &&
                                        ((uVar18 < 0x100 && ((byte) local_1100[uVar12 & 0xffff] != uVar18)))) {
                                        *(ushort *) (puVar14 + 3) = *(ushort *) (puVar14 + 3) | 0x80;
                                    }
                                    *(ushort *) (puVar14 + 3) = *(ushort *) (puVar14 + 3) | 0x40;
                                }
                                goto LAB_14090ffff;
                            }
                            *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14090fea9;
                            (*(code *) PTR_thunk_FUN_140001e60_140c1b1e8)(puVar14);
                            iVar10 = *(int *) ((longlong) &param_5 + lVar13);
                            param_3 = local_1150;
                        }
                    } else {
                        iVar10 = 0x14;
                    }
                }
            }
        } else {
            iVar10 = 0x43;
        }
        goto LAB_14090f932;
    }
    *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14090f664;
    iVar10 = FUN_140919bd0(local_1130, 0xffffffff);
    *(int *) ((longlong) &param_5 + lVar13) = iVar10;
    if (iVar10 == 0) goto LAB_14090f676;
    iVar10 = 0x4a;
    LAB_14090f944:
    pcVar17 = "no error";
    for (iVar21 = iVar10; 0 < iVar21; iVar21 = iVar21 + -1) {
        do {
            cVar4 = *pcVar17;
            pcVar17 = pcVar17 + 1;
        } while (cVar4 != '\0');
        if (*pcVar17 == '\0') {
            pcVar17 = "Error text not found (please report)";
            break;
        }
    }
    *local_1128 = pcVar17;
    if (param_3 != (int *) 0x0) {
        *param_3 = iVar10;
    }
    LAB_14090ffff:
    *(undefined8 *) ((longlong) &uStack64 + lVar13) = 0x14091000e;
    FUN_1407db4f0(local_58 ^ (ulonglong) (&stack0xffffffffffffffc8 + lVar13));
    return;
}


