//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_1407f6460(void)

{
    FUN_1407f615c();
    return;
}



// Library Function - Single Match
//  _set_errno_from_matherr
//
// Libraries: Visual Studio 2012 Release, Visual Studio 2019 Release

void _set_errno_from_matherr(int param_1)

{
    int *piVar1;

    if (param_1 == 1) {
        piVar1 = _errno();
        *piVar1 = 0x21;
    }
    else if (param_1 - 2U < 2) {
        piVar1 = _errno();
        *piVar1 = 0x22;
    }
    return;
}



undefined8
FUN_1407f64bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined4 param_5_00,int param_6_00,undefined8 param_7,undefined8 param_8,
              undefined8 param_5,undefined8 param_6)

{
    int *piVar1;
    int iVar2;
    undefined4 local_res18;
    undefined4 uStackX28;
    undefined4 local_res20;
    undefined4 uStackX36;
    undefined4 local_38 [2];
    undefined *local_30;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;
    undefined4 uStack20;

    iVar2 = 0;
    piVar1 = &DAT_140c104e0;
    do {
        if (*piVar1 == param_6_00) {
            local_30 = (&PTR_DAT_140c104e8)[(longlong)iVar2 * 2];
            goto LAB_1407f6502;
        }
        piVar1 = piVar1 + 4;
        iVar2 = iVar2 + 1;
    } while ((longlong)piVar1 < 0x140c106b0);
    local_30 = (undefined *)0x0;
    LAB_1407f6502:
    if (local_30 == (undefined *)0x0) {
        _ctrlfp(param_6,0xffc0);
        _set_errno_from_matherr(param_5_00);
    }
    else {
        local_res18 = (undefined4)param_3;
        local_28 = local_res18;
        uStackX28 = (undefined4)((ulonglong)param_3 >> 0x20);
        local_24 = uStackX28;
        local_res20 = (undefined4)param_4;
        local_20 = local_res20;
        uStackX36 = (undefined4)((ulonglong)param_4 >> 0x20);
        local_1c = uStackX36;
        local_18 = (undefined4)param_5;
        uStack20 = param_5._4_4_;
        local_38[0] = param_5_00;
        _ctrlfp(param_6,0xffc0);
        iVar2 = FUN_1407f6660(local_38);
        if (iVar2 == 0) {
            _set_errno_from_matherr(param_5_00);
        }
        param_5 = CONCAT44(uStack20,local_18);
    }
    return param_5;
}



// Library Function - Single Match
//  _clrfp
//
// Library: Visual Studio

uint _clrfp(void)

{
    uint uVar1;

    uVar1 = _get_fpsr();
    _fclrf();
    return uVar1 & 0x3f;
}



// Library Function - Single Match
//  _ctrlfp
//
// Library: Visual Studio 2012 Release

uint _ctrlfp(uint param_1,uint param_2)

{
    uint uVar1;
    uint uVar2;

    uVar1 = _get_fpsr();
    uVar2 = (~param_2 | 0xffff807f) & uVar1 | param_1 & param_2;
    if ((DAT_140c106b0 == '\0') || ((uVar2 & 0x40) == 0)) {
        FUN_1407f8470(uVar2 & 0xffffffbf);
    }
    else {
        FUN_1407f8470();
    }
    return uVar1;
}



// Library Function - Single Match
//  _set_statfp
//
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2019 Release

void _set_statfp(uint param_1)

{
    uint uVar1;

    uVar1 = _get_fpsr();
    FUN_1407f8470(uVar1 | param_1 & 0x3f);
    return;
}



uint FUN_1407f664c(void)

{
    uint uVar1;

    uVar1 = _get_fpsr();
    return uVar1 & 0x3f;
}



undefined8 FUN_1407f6660(void)

{
    return 0;
}



undefined2 FUN_1407f66c8(ushort param_1,FILE *param_2)

{
    uint uVar1;
    uint _FileHandle;
    int iVar2;
    int iVar3;
    int *piVar4;
    longlong lVar5;
    undefined *puVar6;
    ulonglong uVar7;
    ushort local_res10 [4];

    _FileHandle = _fileno(param_2);
    uVar1 = param_2->_flag;
    uVar7 = (ulonglong)(int)_FileHandle;
    if ((uVar1 & 0x82) == 0) {
        piVar4 = _errno();
        *piVar4 = 9;
    }
    else if ((uVar1 & 0x40) == 0) {
        iVar3 = 0;
        if ((uVar1 & 1) != 0) {
            param_2->_cnt = 0;
            if ((uVar1 & 0x10) == 0) {
                param_2->_flag = uVar1 | 0x20;
                return 0xffff;
            }
            param_2->_ptr = param_2->_base;
            param_2->_flag = uVar1 & 0xfffffffe;
        }
        uVar1 = param_2->_flag;
        param_2->_cnt = 0;
        param_2->_flag = uVar1 & 0xffffffef | 2;
        if (((uVar1 & 0x10c) == 0) &&
            (((lVar5 = FUN_1407ddfa0(), param_2 != (FILE *)(lVar5 + 0x30) &&
                                        (lVar5 = FUN_1407ddfa0(), param_2 != (FILE *)(lVar5 + 0x60))) ||
              (iVar2 = _isatty(_FileHandle), iVar2 == 0)))) {
            _getbuf(param_2);
        }
        if ((param_2->_flag & 0x108U) == 0) {
            iVar2 = 2;
            local_res10[0] = param_1;
            iVar3 = FUN_1407eef4c(uVar7 & 0xffffffff,local_res10,2);
        }
        else {
            iVar2 = *(int *)&param_2->_ptr - *(int *)&param_2->_base;
            param_2->_ptr = param_2->_base + 2;
            param_2->_cnt = param_2->_bufsiz + -2;
            if (iVar2 < 1) {
                if (_FileHandle + 2 < 2) {
                    puVar6 = &DAT_140c0ffb0;
                }
                else {
                    puVar6 = (undefined *)
                            ((ulonglong)(_FileHandle & 0x1f) * 0x58 + (&DAT_140c60410)[(longlong)uVar7 >> 5])
                            ;
                }
                if (((puVar6[8] & 0x20) != 0) &&
                    (lVar5 = FUN_1407f0fb0(uVar7 & 0xffffffff,0,2), lVar5 == -1)) goto LAB_1407f66fe;
            }
            else {
                iVar3 = FUN_1407eef4c(uVar7 & 0xffffffff,param_2->_base,iVar2);
            }
            *(ushort *)param_2->_base = param_1;
        }
        if (iVar3 == iVar2) {
            return param_1;
        }
    }
    else {
        piVar4 = _errno();
        *piVar4 = 0x22;
    }
    LAB_1407f66fe:
    param_2->_flag = param_2->_flag | 0x20;
    return 0xffff;
}



uint FUN_1407f6858(uint param_1,localeinfo_struct *param_2)

{
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

    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_2);
    if (param_1 < 0x100) {
        if ((local_28.locinfo)->mb_cur_max < 2) {
            uVar1 = (local_28.locinfo)->pctype[(int)param_1] & 1;
        }
        else {
            uVar1 = FUN_1407ea448(param_1,1,&local_28);
        }
        if (uVar1 == 0) {
            LAB_1407f68c3:
            if (local_10 == '\0') {
                return param_1;
            }
            *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
            return param_1;
        }
        uVar1 = (uint)(local_28.locinfo)->pclmap[(int)param_1];
    }
    else {
        if (((local_28.locinfo)->mb_cur_max < 2) ||
            (iVar2 = _isleadbyte_l((int)param_1 >> 8 & 0xff,&local_28), iVar2 == 0)) {
            piVar3 = _errno();
            uVar4 = 1;
            *piVar3 = 0x2a;
            local_res9 = 0;
            local_res8 = (char)param_1;
        }
        else {
            local_resa = 0;
            uVar4 = 2;
            local_res8 = (char)(param_1 >> 8);
            local_res9 = (char)param_1;
        }
        iVar2 = FUN_1407f09f8(&local_28,(local_28.locinfo)->locale_name[2],0x100,&local_res8,uVar4,
                              &local_res18,3,(local_28.locinfo)->lc_codepage,1);
        if (iVar2 == 0) goto LAB_1407f68c3;
        uVar1 = (uint)local_res18;
        if (iVar2 != 1) {
            uVar1 = (uint)CONCAT11(local_res18,local_res19);
        }
    }
    if (local_10 != '\0') {
        *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
    }
    return uVar1;
}



// Library Function - Single Match
//  tolower
//
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release

int tolower(int _C)

{
    int iVar1;
    undefined4 in_register_0000000c;
    ulonglong uVar2;

    uVar2 = CONCAT44(in_register_0000000c,_C);
    if (DAT_140c5f560 == 0) {
        if (_C - 0x41U < 0x1a) {
            uVar2 = (ulonglong)(_C + 0x20);
        }
        return (int)uVar2;
    }
    iVar1 = FUN_1407f6858(uVar2,0);
    return iVar1;
}



int FUN_1407f69cc(char *param_1,ulonglong param_2,int param_3,longlong param_4)

{
    char *pcVar1;
    int *piVar2;
    char *pcVar3;
    longlong lVar4;
    char *pcVar5;
    char cVar6;
    int iVar7;

    pcVar5 = *(char **)(param_4 + 0x10);
    if ((param_1 == (char *)0x0) || (param_2 == 0)) {
        piVar2 = _errno();
        iVar7 = 0x16;
    }
    else {
        *param_1 = '\0';
        iVar7 = 0;
        if (0 < param_3) {
            iVar7 = param_3;
        }
        if ((ulonglong)(longlong)(iVar7 + 1) < param_2) {
            pcVar1 = param_1 + 1;
            *param_1 = '0';
            pcVar3 = pcVar1;
            for (; 0 < param_3; param_3 = param_3 + -1) {
                if (*pcVar5 == '\0') {
                    cVar6 = '0';
                }
                else {
                    cVar6 = *pcVar5;
                    pcVar5 = pcVar5 + 1;
                }
                *pcVar3 = cVar6;
                pcVar3 = pcVar3 + 1;
            }
            *pcVar3 = '\0';
            if ((-1 < param_3) && ('4' < *pcVar5)) {
                while (pcVar3 = pcVar3 + -1, *pcVar3 == '9') {
                    *pcVar3 = '0';
                }
                *pcVar3 = *pcVar3 + '\x01';
            }
            if (*param_1 == '1') {
                *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
            }
            else {
                lVar4 = FUN_1407e1990(pcVar1);
                FUN_1407db590(param_1,pcVar1,lVar4 + 1);
            }
            return 0;
        }
        piVar2 = _errno();
        iVar7 = 0x22;
    }
    *piVar2 = iVar7;
    FUN_1407dc370();
    return iVar7;
}



void FUN_1407f6a98(undefined8 param_1,undefined8 param_2,localeinfo_struct *param_3)

{
    undefined auStack136 [32];
    undefined4 local_68;
    undefined4 local_60;
    undefined4 local_58;
    _LocaleUpdate *local_50;
    _LocaleUpdate local_48 [16];
    longlong local_38;
    char local_30;
    undefined local_28 [8];
    undefined local_20 [16];
    ulonglong local_10;

    local_10 = DAT_140c0f7b0 ^ (ulonglong)auStack136;
    _LocaleUpdate::_LocaleUpdate(local_48,param_3);
    local_50 = local_48;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    FUN_1407f2eac(local_20,local_28,param_2,0);
    FUN_1407f234c(local_20,param_1);
    if (local_30 != '\0') {
        *(uint *)(local_38 + 200) = *(uint *)(local_38 + 200) & 0xfffffffd;
    }
    FUN_1407db4f0(local_10 ^ (ulonglong)auStack136);
    return;
}



void FUN_1407f6b60(undefined8 param_1,undefined8 param_2,localeinfo_struct *param_3)

{
    undefined auStack136 [32];
    undefined4 local_68;
    undefined4 local_60;
    undefined4 local_58;
    _LocaleUpdate *local_50;
    _LocaleUpdate local_48 [16];
    longlong local_38;
    char local_30;
    undefined local_28 [8];
    undefined local_20 [16];
    ulonglong local_10;

    local_10 = DAT_140c0f7b0 ^ (ulonglong)auStack136;
    _LocaleUpdate::_LocaleUpdate(local_48,param_3);
    local_50 = local_48;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    FUN_1407f2eac(local_20,local_28,param_2,0);
    FUN_1407f28fc(local_20,param_1);
    if (local_30 != '\0') {
        *(uint *)(local_38 + 200) = *(uint *)(local_38 + 200) & 0xfffffffd;
    }
    FUN_1407db4f0(local_10 ^ (ulonglong)auStack136);
    return;
}



void FUN_1407f6c28(uint *param_1,uint *param_2)

{
    uint uVar1;
    uint uVar2;
    ushort uVar3;
    uint uVar4;
    ushort uVar5;

    uVar4 = param_2[1];
    uVar5 = *(ushort *)((longlong)param_2 + 6) & 0x8000;
    uVar1 = *param_2;
    uVar3 = *(ushort *)((longlong)param_2 + 6) >> 4 & 0x7ff;
    uVar2 = 0x80000000;
    if (uVar3 == 0) {
        if (((uVar4 & 0xfffff) == 0) && (uVar1 == 0)) {
            param_1[1] = 0;
            *param_1 = 0;
            goto LAB_1407f6cea;
        }
        uVar3 = 0x3c01;
        uVar2 = 0;
    }
    else if (uVar3 == 0x7ff) {
        uVar3 = 0x7fff;
    }
    else {
        uVar3 = uVar3 + 0x3c00;
    }
    *param_1 = uVar1 << 0xb;
    uVar4 = uVar1 >> 0x15 | (uVar4 & 0xfffff) << 0xb | uVar2;
    param_1[1] = uVar4;
    if (uVar2 == 0) {
        do {
            uVar4 = *param_1 >> 0x1f | uVar4 * 2;
            *param_1 = *param_1 * 2;
            uVar3 = uVar3 - 1;
        } while (-1 < (int)uVar4);
        param_1[1] = uVar4;
    }
    uVar5 = uVar5 | uVar3;
    LAB_1407f6cea:
    *(ushort *)(param_1 + 2) = uVar5;
    return;
}



void FUN_1407f6cf8(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
    code *pcVar1;
    int iVar2;
    undefined auStack168 [32];
    undefined8 local_88;
    undefined8 local_78;
    undefined2 local_70;
    undefined8 local_68;
    undefined2 local_60;
    short local_58;
    char local_56;
    undefined local_54 [28];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack168;
    local_78 = param_1;
    FUN_1407f6c28(&local_68,&local_78);
    local_78 = local_68;
    local_70 = local_60;
    iVar2 = FUN_1407f84b0(&local_78,0x11,0,&local_58);
    *param_2 = (int)local_56;
    param_2[1] = (int)local_58;
    param_2[2] = iVar2;
    iVar2 = FUN_1407ea194(param_3,param_4,local_54);
    if (iVar2 == 0) {
        *(undefined8 *)(param_2 + 4) = param_3;
        FUN_1407db4f0(local_38 ^ (ulonglong)auStack168);
        return;
    }
    local_88 = 0;
    FUN_1407dc390(0,0,0,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
}



void FUN_1407f6db0(char *param_1,int param_2,undefined8 *param_3)

{
    undefined8 uVar1;
    uint uVar2;
    bool bVar3;
    bool bVar4;
    uint uVar5;
    short sVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    uint uVar10;

    *(uint *)param_3 = 0;
    *(uint *)((longlong)param_3 + 4) = 0;
    *(uint *)(param_3 + 1) = 0;
    sVar6 = 0x404e;
    if (param_2 != 0) {
        uVar8 = 0;
        uVar5 = 0;
        uVar10 = 0;
        bVar4 = true;
        do {
            uVar1 = *param_3;
            uVar9 = *(uint *)(param_3 + 1);
            uVar2 = uVar8 * 4;
            uVar7 = (uVar5 * 2 | uVar8 >> 0x1f) * 2 | uVar8 * 2 >> 0x1f;
            uVar10 = (uVar10 * 2 | uVar5 >> 0x1f) * 2 | uVar5 * 2 >> 0x1f;
            uVar8 = (uint)uVar1;
            *(uint *)param_3 = uVar2;
            uVar5 = uVar2 + uVar8;
            *(uint *)((longlong)param_3 + 4) = uVar7;
            *(uint *)(param_3 + 1) = uVar10;
            if ((uVar5 < uVar2) || (bVar3 = false, uVar5 < uVar8)) {
                bVar3 = bVar4;
            }
            *(uint *)param_3 = uVar5;
            uVar8 = uVar7;
            if (bVar3) {
                uVar8 = uVar7 + 1;
                if ((uVar8 < uVar7) || (bVar3 = false, uVar8 == 0)) {
                    bVar3 = bVar4;
                }
                *(uint *)((longlong)param_3 + 4) = uVar8;
                if (bVar3) {
                    uVar10 = uVar10 + 1;
                    *(uint *)(param_3 + 1) = uVar10;
                }
            }
            uVar2 = (uint)((ulonglong)uVar1 >> 0x20);
            uVar7 = uVar8 + uVar2;
            if ((uVar7 < uVar8) || (bVar3 = false, uVar7 < uVar2)) {
                bVar3 = bVar4;
            }
            *(uint *)((longlong)param_3 + 4) = uVar7;
            if (bVar3) {
                uVar10 = uVar10 + 1;
                *(uint *)(param_3 + 1) = uVar10;
            }
            uVar2 = uVar5 * 2;
            uVar10 = (uVar10 + uVar9) * 2 | uVar7 >> 0x1f;
            *(uint *)param_3 = uVar2;
            *(uint *)(param_3 + 1) = uVar10;
            uVar9 = uVar7 * 2 | uVar5 >> 0x1f;
            *(uint *)((longlong)param_3 + 4) = uVar9;
            uVar8 = uVar2 + (int)*param_1;
            if ((uVar8 < uVar2) || (bVar3 = false, uVar8 < (uint)(int)*param_1)) {
                bVar3 = bVar4;
            }
            *(uint *)param_3 = uVar8;
            uVar5 = uVar9;
            if (bVar3) {
                uVar5 = uVar9 + 1;
                if ((uVar5 < uVar9) || (bVar3 = false, uVar5 == 0)) {
                    bVar3 = bVar4;
                }
                *(uint *)((longlong)param_3 + 4) = uVar5;
                if (bVar3) {
                    uVar10 = uVar10 + 1;
                    *(uint *)(param_3 + 1) = uVar10;
                }
            }
            param_1 = param_1 + 1;
            *(uint *)((longlong)param_3 + 4) = uVar5;
            *(uint *)(param_3 + 1) = uVar10;
            param_2 = param_2 + -1;
        } while (param_2 != 0);
    }
    if (*(uint *)(param_3 + 1) == 0) {
        uVar5 = *(uint *)((longlong)param_3 + 4);
        do {
            uVar8 = *(uint *)param_3;
            uVar9 = uVar5 >> 0x10;
            *(uint *)param_3 = uVar8 << 0x10;
            uVar10 = uVar8 >> 0x10 | uVar5 << 0x10;
            sVar6 = sVar6 + -0x10;
            uVar8 = uVar5 >> 0x10;
            uVar5 = uVar10;
        } while (uVar8 == 0);
        *(uint *)((longlong)param_3 + 4) = uVar10;
        *(uint *)(param_3 + 1) = uVar9;
    }
    uVar5 = *(uint *)(param_3 + 1);
    if ((uVar5 & 0x8000) == 0) {
        uVar8 = *(uint *)param_3;
        uVar10 = *(uint *)((longlong)param_3 + 4);
        do {
            uVar9 = uVar5 * 2;
            uVar5 = uVar10 >> 0x1f;
            uVar10 = uVar10 * 2 | uVar8 >> 0x1f;
            uVar5 = uVar9 | uVar5;
            sVar6 = sVar6 + -1;
            uVar8 = uVar8 * 2;
        } while ((uVar9 & 0x8000) == 0);
        *(uint *)param_3 = uVar8;
        *(uint *)((longlong)param_3 + 4) = uVar10;
        *(uint *)(param_3 + 1) = uVar5;
    }
    *(short *)((longlong)param_3 + 10) = sVar6;
    return;
}



ulonglong FUN_1407f6fdc(FILE *param_1)

{
    byte bVar1;
    int iVar2;
    uint uVar3;
    int *piVar4;
    undefined *puVar5;

    if (param_1 == (FILE *)0x0) {
        piVar4 = _errno();
        *piVar4 = 0x16;
        FUN_1407dc370();
    }
    else {
        uVar3 = param_1->_flag;
        if (((uVar3 & 0x83) != 0) && ((uVar3 & 0x40) == 0)) {
            if ((uVar3 & 2) == 0) {
                param_1->_flag = uVar3 | 1;
                if ((uVar3 & 0x10c) == 0) {
                    _getbuf(param_1);
                }
                else {
                    param_1->_ptr = param_1->_base;
                }
                iVar2 = _fileno(param_1);
                iVar2 = FUN_1407f7568(iVar2,param_1->_base,param_1->_bufsiz);
                param_1->_cnt = iVar2;
                if (1 < iVar2 + 1U) {
                    if ((*(byte *)&param_1->_flag & 0x82) == 0) {
                        iVar2 = _fileno(param_1);
                        if ((iVar2 == -1) || (iVar2 = _fileno(param_1), iVar2 == -2)) {
                            puVar5 = &DAT_140c0ffb0;
                        }
                        else {
                            iVar2 = _fileno(param_1);
                            uVar3 = _fileno(param_1);
                            puVar5 = (undefined *)
                                    ((ulonglong)(uVar3 & 0x1f) * 0x58 + (&DAT_140c60410)[(longlong)iVar2 >> 5]);
                        }
                        if ((puVar5[8] & 0x82) == 0x82) {
                            param_1->_flag = param_1->_flag | 0x2000;
                        }
                    }
                    if (((param_1->_bufsiz == 0x200) && ((*(byte *)&param_1->_flag & 8) != 0)) &&
                        ((param_1->_flag & 0x400U) == 0)) {
                        param_1->_bufsiz = 0x1000;
                    }
                    param_1->_cnt = param_1->_cnt + -1;
                    bVar1 = *param_1->_ptr;
                    param_1->_ptr = param_1->_ptr + 1;
                    return (ulonglong)bVar1;
                }
                param_1->_flag = param_1->_flag | (-(uint)(iVar2 != 0) & 0x10) + 0x10;
                param_1->_cnt = 0;
            }
            else {
                param_1->_flag = uVar3 | 0x20;
            }
        }
    }
    return 0xffffffff;
}



uint FUN_1407f7120(uint param_1,FILE *param_2)

{
    char *pcVar1;
    uint uVar2;
    int *piVar3;
    undefined *puVar4;
    undefined *puVar5;

    if ((*(byte *)&param_2->_flag & 0x40) == 0) {
        uVar2 = _fileno(param_2);
        puVar4 = &DAT_140c0ffb0;
        if (uVar2 + 2 < 2) {
            puVar5 = &DAT_140c0ffb0;
        }
        else {
            puVar5 = (undefined *)
                    ((ulonglong)(uVar2 & 0x1f) * 0x58 + (&DAT_140c60410)[(longlong)(int)uVar2 >> 5]);
        }
        if ((puVar5[0x38] & 0x7f) == 0) {
            if (1 < uVar2 + 2) {
                puVar4 = (undefined *)
                        ((ulonglong)(uVar2 & 0x1f) * 0x58 + (&DAT_140c60410)[(longlong)(int)uVar2 >> 5]);
            }
            if ((puVar4[0x38] & 0x80) == 0) goto LAB_1407f71c0;
        }
        piVar3 = _errno();
        *piVar3 = 0x16;
        FUN_1407dc370();
    }
    else {
        LAB_1407f71c0:
        if ((param_1 != 0xffffffff) &&
            (((*(byte *)&param_2->_flag & 1) != 0 ||
              (((*(byte *)&param_2->_flag & 0x80) != 0 && ((*(byte *)&param_2->_flag & 2) == 0)))))) {
            if (param_2->_base == (char *)0x0) {
                _getbuf(param_2);
            }
            if (param_2->_ptr == param_2->_base) {
                if (param_2->_cnt != 0) {
                    return 0xffffffff;
                }
                param_2->_ptr = param_2->_ptr + 1;
            }
            param_2->_ptr = param_2->_ptr + -1;
            pcVar1 = param_2->_ptr;
            if ((*(byte *)&param_2->_flag & 0x40) == 0) {
                *pcVar1 = (char)param_1;
            }
            else if (*pcVar1 != (char)param_1) {
                param_2->_ptr = pcVar1 + 1;
                return 0xffffffff;
            }
            param_2->_cnt = param_2->_cnt + 1;
            param_2->_flag = param_2->_flag & 0xffffffef;
            param_2->_flag = param_2->_flag | 1;
            return param_1 & 0xff;
        }
    }
    return 0xffffffff;
}



// Library Function - Single Match
//  ungetc
//
// Libraries: Visual Studio 2010 Release, Visual Studio 2015 Release

int ungetc(int _Ch,FILE *_File)

{
    int iVar1;
    int *piVar2;

    if (_File == (FILE *)0x0) {
        piVar2 = _errno();
        *piVar2 = 0x16;
        FUN_1407dc370();
        iVar1 = -1;
    }
    else {
        _lock_file(_File);
        iVar1 = FUN_1407f7120(_Ch,_File);
        _unlock_file(_File);
    }
    return iVar1;
}



undefined2 FUN_1407f7288(FILE *param_1)

{
    undefined2 uVar1;
    int iVar2;
    uint uVar3;
    int *piVar4;
    undefined *puVar5;

    if (param_1 == (FILE *)0x0) {
        piVar4 = _errno();
        *piVar4 = 0x16;
        FUN_1407dc370();
    }
    else {
        uVar3 = param_1->_flag;
        if (((uVar3 & 0x83) != 0) && ((uVar3 & 0x40) == 0)) {
            if ((uVar3 & 2) == 0) {
                param_1->_flag = uVar3 | 1;
                if ((uVar3 & 0x10c) == 0) {
                    _getbuf(param_1);
                }
                else {
                    param_1->_ptr = param_1->_base;
                }
                iVar2 = _fileno(param_1);
                iVar2 = FUN_1407f7568(iVar2,param_1->_base,param_1->_bufsiz);
                param_1->_cnt = iVar2;
                if (2 < iVar2 + 1U) {
                    if ((*(byte *)&param_1->_flag & 0x82) == 0) {
                        iVar2 = _fileno(param_1);
                        if ((iVar2 == -1) || (iVar2 = _fileno(param_1), iVar2 == -2)) {
                            puVar5 = &DAT_140c0ffb0;
                        }
                        else {
                            iVar2 = _fileno(param_1);
                            uVar3 = _fileno(param_1);
                            puVar5 = (undefined *)
                                    ((ulonglong)(uVar3 & 0x1f) * 0x58 + (&DAT_140c60410)[(longlong)iVar2 >> 5]);
                        }
                        if ((puVar5[8] & 0x82) == 0x82) {
                            param_1->_flag = param_1->_flag | 0x2000;
                        }
                    }
                    if (((param_1->_bufsiz == 0x200) && ((*(byte *)&param_1->_flag & 8) != 0)) &&
                        ((param_1->_flag & 0x400U) == 0)) {
                        param_1->_bufsiz = 0x1000;
                    }
                    param_1->_cnt = param_1->_cnt + -2;
                    uVar1 = *(undefined2 *)param_1->_ptr;
                    param_1->_ptr = (char *)((longlong)param_1->_ptr + 2);
                    return uVar1;
                }
                param_1->_flag = param_1->_flag | (-(uint)(iVar2 != 0) & 0x10) + 0x10;
                param_1->_cnt = 0;
            }
            else {
                param_1->_flag = uVar3 | 0x20;
            }
        }
    }
    return 0xffff;
}



int FUN_1407f73d0(ulonglong param_1,longlong param_2)

{
    undefined4 uVar1;
    int iVar2;
    BOOL BVar3;
    DWORD DVar4;
    longlong lVar5;
    longlong lVar6;
    HANDLE pvVar7;
    LPVOID lpMem;
    int *piVar8;
    ulong *puVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    longlong lVar12;
    ulonglong uVar13;

    lVar12 = 0;
    uVar11 = param_1 & 0xffffffff;
    lVar5 = FUN_1407f1094(param_1,0,1);
    if ((lVar5 == -1) || (lVar6 = FUN_1407f1094(uVar11,0,2), lVar6 == -1)) goto LAB_1407f7458;
    uVar10 = param_2 - lVar6;
    if ((longlong)uVar10 < 1) {
        if ((longlong)uVar10 < 0) {
            lVar12 = FUN_1407f1094(uVar11,param_2,0);
            if (lVar12 == -1) goto LAB_1407f7458;
            pvVar7 = (HANDLE)_get_osfhandle((int)uVar11);
            BVar3 = SetEndOfFile(pvVar7);
            lVar12 = (ulonglong)(BVar3 != 0) - 1;
            if (lVar12 == -1) {
                piVar8 = _errno();
                *piVar8 = 0xd;
                puVar9 = __doserrno();
                DVar4 = GetLastError();
                *puVar9 = DVar4;
                goto LAB_1407f7540;
            }
        }
    }
    else {
        pvVar7 = GetProcessHeap();
        lpMem = HeapAlloc(pvVar7,8,0x1000);
        if (lpMem == (LPVOID)0x0) {
            piVar8 = _errno();
            *piVar8 = 0xc;
            goto LAB_1407f7458;
        }
        uVar1 = FUN_1407f7f18(uVar11,0x8000);
        do {
            uVar13 = uVar10 & 0xffffffff;
            if (0xfff < (longlong)uVar10) {
                uVar13 = 0x1000;
            }
            iVar2 = FUN_1407ef02c(uVar11,lpMem,uVar13);
            if (iVar2 == -1) {
                puVar9 = __doserrno();
                if (*puVar9 == 5) {
                    piVar8 = _errno();
                    *piVar8 = 0xd;
                }
                lVar12 = -1;
                break;
            }
            uVar10 = uVar10 - (longlong)iVar2;
        } while (0 < (longlong)uVar10);
        FUN_1407f7f18(uVar11,uVar1);
        pvVar7 = GetProcessHeap();
        HeapFree(pvVar7,0,lpMem);
        LAB_1407f7540:
        if (lVar12 == -1) goto LAB_1407f7458;
    }
    lVar5 = FUN_1407f1094(uVar11,lVar5,0);
    if (lVar5 != -1) {
        return 0;
    }
    LAB_1407f7458:
    piVar8 = _errno();
    return *piVar8;
}



undefined4 FUN_1407f7568(uint param_1,undefined8 param_2,uint param_3)

{
    undefined4 uVar1;
    ulong *puVar2;
    int *piVar3;
    longlong lVar4;
    longlong lVar5;

    if (param_1 == 0xfffffffe) {
        puVar2 = __doserrno();
        *puVar2 = 0;
        piVar3 = _errno();
        *piVar3 = 9;
        return 0xffffffff;
    }
    if ((-1 < (int)param_1) && (param_1 < DAT_140dc523c)) {
        lVar5 = (longlong)(int)param_1 >> 5;
        lVar4 = (ulonglong)(param_1 & 0x1f) * 0x58;
        if ((*(byte *)((&DAT_140c60410)[lVar5] + 8 + lVar4) & 1) != 0) {
            if (param_3 < 0x80000000) {
                FUN_1407f5268((longlong)(int)param_1 & 0xffffffff);
                if ((*(byte *)((&DAT_140c60410)[lVar5] + 8 + lVar4) & 1) == 0) {
                    piVar3 = _errno();
                    *piVar3 = 9;
                    puVar2 = __doserrno();
                    *puVar2 = 0;
                    uVar1 = 0xffffffff;
                }
                else {
                    uVar1 = FUN_1407f7684(param_1,param_2,param_3);
                }
                FUN_1407f56c8(param_1);
                return uVar1;
            }
            puVar2 = __doserrno();
            *puVar2 = 0;
            piVar3 = _errno();
            *piVar3 = 0x16;
            goto LAB_1407f7662;
        }
    }
    puVar2 = __doserrno();
    *puVar2 = 0;
    piVar3 = _errno();
    *piVar3 = 9;
    LAB_1407f7662:
    FUN_1407dc370();
    return 0xffffffff;
}



// WARNING: Could not reconcile some variable overlaps

int FUN_1407f7684(uint param_1,LPWSTR param_2,ulonglong param_3)

{
    byte *pbVar1;
    char cVar2;
    undefined uVar3;
    WCHAR WVar4;
    longlong lVar5;
    byte bVar6;
    int iVar7;
    uint uVar8;
    BOOL BVar9;
    ulong uVar10;
    DWORD DVar11;
    ulong *puVar12;
    int *piVar13;
    LPWSTR lpMultiByteStr;
    undefined8 uVar14;
    int iVar15;
    LPWSTR pWVar16;
    WCHAR *pWVar17;
    longlong lVar18;
    LPWSTR pWVar19;
    LPWSTR pWVar20;
    longlong lVar21;
    int iVar22;
    bool bVar23;
    char local_res18 [8];
    LPWSTR local_res20;
    undefined2 local_68;
    DWORD local_64;
    int local_60;
    LPWSTR local_58;
    uint local_50;

    param_3 = param_3 & 0xffffffff;
    local_60 = -2;
    local_58 = (LPWSTR)((ulonglong)local_58 & 0xffffffff00000000);
    local_50 = (uint)param_3;
    if (param_1 == 0xfffffffe) {
        puVar12 = __doserrno();
        *puVar12 = 0;
        piVar13 = _errno();
        *piVar13 = 9;
        return -1;
    }
    if ((-1 < (int)param_1) && (param_1 < DAT_140dc523c)) {
        lVar21 = (longlong)(int)param_1 >> 5;
        lVar18 = (ulonglong)(param_1 & 0x1f) * 0x58;
        bVar6 = *(byte *)((&DAT_140c60410)[lVar21] + 8 + lVar18);
        if ((bVar6 & 1) != 0) {
            if (local_50 < 0x80000000) {
                if ((local_50 == 0) || ((bVar6 & 2) != 0)) {
                    return 0;
                }
                if (param_2 != (LPWSTR)0x0) {
                    local_res20._0_1_ =
                            (char)(*(char *)((&DAT_140c60410)[lVar21] + 0x38 + lVar18) * '\x02') >> 1;
                    local_res20 = (LPWSTR)((ulonglong)local_res20 & 0xffffffffffffff00 |
                                           (ulonglong)(byte)local_res20);
                    if ((byte)local_res20 == 1) {
                        if ((~local_50 & 1) == 0) goto LAB_1407f771e;
                        uVar8 = local_50 >> 1;
                        if (local_50 >> 1 < 4) {
                            uVar8 = 4;
                        }
                        param_3 = (ulonglong)uVar8;
                        lpMultiByteStr = (LPWSTR)FUN_1407e2c30(param_3);
                        if (lpMultiByteStr == (LPWSTR)0x0) {
                            piVar13 = _errno();
                            *piVar13 = 0xc;
                            puVar12 = __doserrno();
                            *puVar12 = 8;
                            return -1;
                        }
                        uVar14 = FUN_1407f1094(param_1);
                        *(undefined8 *)((&DAT_140c60410)[lVar21] + 0x40 + lVar18) = uVar14;
                    }
                    else {
                        lpMultiByteStr = param_2;
                        if ((byte)local_res20 == 2) {
                            if ((~local_50 & 1) == 0) goto LAB_1407f771e;
                            param_3 = (ulonglong)(local_50 & 0xfffffffe);
                        }
                    }
                    pWVar19 = lpMultiByteStr;
                    iVar22 = 0;
                    if ((((*(byte *)((&DAT_140c60410)[lVar21] + 8 + lVar18) & 0x48) != 0) &&
                         (cVar2 = *(char *)((&DAT_140c60410)[lVar21] + 9 + lVar18), iVar22 = 0, cVar2 != '\n'))
                        && (iVar7 = (int)param_3, iVar7 != 0)) {
                        *(char *)lpMultiByteStr = cVar2;
                        param_3 = (ulonglong)(iVar7 - 1U);
                        pWVar19 = (LPWSTR)((longlong)lpMultiByteStr + 1);
                        iVar22 = 1;
                        *(undefined *)((&DAT_140c60410)[lVar21] + 9 + lVar18) = 10;
                        if ((((byte)local_res20 != 0) &&
                             (cVar2 = *(char *)((&DAT_140c60410)[lVar21] + 0x39 + lVar18), cVar2 != '\n')) &&
                            (iVar7 - 1U != 0)) {
                            *(char *)pWVar19 = cVar2;
                            param_3 = (ulonglong)(iVar7 - 2U);
                            pWVar19 = lpMultiByteStr + 1;
                            iVar22 = 2;
                            *(undefined *)((&DAT_140c60410)[lVar21] + 0x39 + lVar18) = 10;
                            if ((((byte)local_res20 == 1) &&
                                 (cVar2 = *(char *)((&DAT_140c60410)[lVar21] + 0x3a + lVar18), cVar2 != '\n')) &&
                                (iVar7 - 2U != 0)) {
                                *(char *)pWVar19 = cVar2;
                                pWVar19 = (LPWSTR)((longlong)lpMultiByteStr + 3);
                                iVar22 = 3;
                                param_3 = (ulonglong)(iVar7 - 3);
                                *(undefined *)((&DAT_140c60410)[lVar21] + 0x3a + lVar18) = 10;
                            }
                        }
                    }
                    iVar7 = _isatty(param_1);
                    if ((iVar7 == 0) || ((*(byte *)((&DAT_140c60410)[lVar21] + 8 + lVar18) & 0x80) == 0)) {
                        LAB_1407f7921:
                        BVar9 = ReadFile(*(HANDLE *)((&DAT_140c60410)[lVar21] + lVar18),pWVar19,(DWORD)param_3,
                                         &local_64,(LPOVERLAPPED)0x0);
                        if (((BVar9 != 0) && (-1 < (int)local_64)) &&
                            ((ulonglong)(longlong)(int)local_64 <= param_3)) {
                            LAB_1407f7968:
                            iVar22 = iVar22 + local_64;
                            lVar5 = (&DAT_140c60410)[lVar21];
                            bVar6 = *(byte *)(lVar5 + 8 + lVar18);
                            iVar7 = local_60;
                            if (-1 < (char)bVar6) goto LAB_1407f7cc2;
                            iVar15 = (int)lpMultiByteStr;
                            if ((byte)local_res20 == '\x02') {
                                if ((int)local_58 == 0) {
                                    if ((local_64 == 0) || (*lpMultiByteStr != L'\n')) {
                                        bVar6 = bVar6 & 0xfb;
                                    }
                                    else {
                                        bVar6 = bVar6 | 4;
                                    }
                                    *(byte *)(lVar5 + 8 + lVar18) = bVar6;
                                    local_res20 = (LPWSTR)((longlong)iVar22 + (longlong)lpMultiByteStr);
                                    pWVar17 = lpMultiByteStr;
                                    pWVar19 = lpMultiByteStr;
                                    if (lpMultiByteStr < local_res20) {
                                        do {
                                            WVar4 = *pWVar19;
                                            if (WVar4 == L'\x1a') {
                                                bVar6 = *(byte *)((&DAT_140c60410)[lVar21] + 8 + lVar18);
                                                if ((bVar6 & 0x40) == 0) {
                                                    *(byte *)((&DAT_140c60410)[lVar21] + 8 + lVar18) = bVar6 | 2;
                                                }
                                                else {
                                                    *pWVar17 = *pWVar19;
                                                    pWVar17 = pWVar17 + 1;
                                                }
                                                break;
                                            }
                                            if (WVar4 == L'\r') {
                                                if (pWVar19 < local_res20 + -1) {
                                                    if (pWVar19[1] == L'\n') {
                                                        pWVar16 = pWVar19 + 2;
                                                        goto LAB_1407f7e07;
                                                    }
                                                    LAB_1407f7e3f:
                                                    pWVar16 = pWVar19 + 1;
                                                    *pWVar17 = L'\r';
                                                }
                                                else {
                                                    pWVar16 = pWVar19 + 1;
                                                    BVar9 = ReadFile(*(HANDLE *)((&DAT_140c60410)[lVar21] + lVar18),&local_68,
                                                                     2,&local_64,(LPOVERLAPPED)0x0);
                                                    if (((BVar9 == 0) && (DVar11 = GetLastError(), DVar11 != 0)) ||
                                                        (local_64 == 0)) goto LAB_1407f7e3f;
                                                    if ((*(byte *)((&DAT_140c60410)[lVar21] + 8 + lVar18) & 0x48) == 0) {
                                                        if ((pWVar17 == lpMultiByteStr) && (local_68 == 10)) goto LAB_1407f7e07;
                                                        FUN_1407f1094(param_1,0xfffffffffffffffe,1);
                                                        if (local_68 == 10) goto LAB_1407f7e47;
                                                        goto LAB_1407f7e3f;
                                                    }
                                                    if (local_68 == 10) {
                                                        LAB_1407f7e07:
                                                        *pWVar17 = L'\n';
                                                    }
                                                    else {
                                                        *pWVar17 = L'\r';
                                                        *(undefined *)((&DAT_140c60410)[lVar21] + 9 + lVar18) =
                                                                (undefined)local_68;
                                                        *(undefined *)((&DAT_140c60410)[lVar21] + 0x39 + lVar18) =
                                                                local_68._1_1_;
                                                        *(undefined *)((&DAT_140c60410)[lVar21] + 0x3a + lVar18) = 10;
                                                    }
                                                }
                                                pWVar17 = pWVar17 + 1;
                                            }
                                            else {
                                                *pWVar17 = WVar4;
                                                pWVar17 = pWVar17 + 1;
                                                pWVar16 = pWVar19 + 1;
                                            }
                                            LAB_1407f7e47:
                                            pWVar19 = pWVar16;
                                        } while (pWVar16 < local_res20);
                                    }
                                    iVar22 = (int)pWVar17 - iVar15;
                                    iVar7 = local_60;
                                }
                                else {
                                    pWVar17 = lpMultiByteStr;
                                    pWVar19 = lpMultiByteStr;
                                    while (pWVar19 < lpMultiByteStr + iVar22 / 2) {
                                        WVar4 = *pWVar19;
                                        if (WVar4 == L'\x1a') {
                                            pbVar1 = (byte *)((&DAT_140c60410)[lVar21] + 8 + lVar18);
                                            *pbVar1 = *pbVar1 | 2;
                                            break;
                                        }
                                        if (WVar4 == L'\r') {
                                            if (pWVar19 < lpMultiByteStr + iVar22 / 2 + -1) {
                                                pWVar19 = pWVar19 + 1;
                                                if (*pWVar19 == L'\n') {
                                                    *pWVar17 = L'\n';
                                                }
                                                else {
                                                    *pWVar17 = L'\r';
                                                }
                                                pWVar17 = pWVar17 + 1;
                                            }
                                        }
                                        else {
                                            *pWVar17 = WVar4;
                                            pWVar17 = pWVar17 + 1;
                                            pWVar19 = pWVar19 + 1;
                                        }
                                    }
                                    iVar22 = (int)((longlong)pWVar17 - (longlong)lpMultiByteStr >> 1) * 2;
                                }
                                goto LAB_1407f7cc2;
                            }
                            if ((local_64 == 0) || (*(char *)lpMultiByteStr != '\n')) {
                                bVar6 = bVar6 & 0xfb;
                            }
                            else {
                                bVar6 = bVar6 | 4;
                            }
                            *(byte *)(lVar5 + 8 + lVar18) = bVar6;
                            local_58 = (LPWSTR)((longlong)iVar22 + (longlong)lpMultiByteStr);
                            pWVar19 = lpMultiByteStr;
                            pWVar16 = lpMultiByteStr;
                            if (lpMultiByteStr < local_58) {
                                do {
                                    cVar2 = *(char *)pWVar16;
                                    if (cVar2 == '\x1a') {
                                        bVar6 = *(byte *)((&DAT_140c60410)[lVar21] + 8 + lVar18);
                                        if ((bVar6 & 0x40) == 0) {
                                            *(byte *)((&DAT_140c60410)[lVar21] + 8 + lVar18) = bVar6 | 2;
                                        }
                                        else {
                                            *(undefined *)pWVar19 = *(undefined *)pWVar16;
                                            pWVar19 = (LPWSTR)((longlong)pWVar19 + 1);
                                        }
                                        break;
                                    }
                                    if (cVar2 == '\r') {
                                        if (pWVar16 < (LPWSTR)((longlong)local_58 + -1)) {
                                            if (*(char *)((longlong)pWVar16 + 1) == '\n') {
                                                pWVar20 = pWVar16 + 1;
                                                goto LAB_1407f7a89;
                                            }
                                            LAB_1407f7abe:
                                            pWVar20 = (LPWSTR)((longlong)pWVar16 + 1);
                                            *(undefined *)pWVar19 = 0xd;
                                        }
                                        else {
                                            pWVar20 = (LPWSTR)((longlong)pWVar16 + 1);
                                            BVar9 = ReadFile(*(HANDLE *)((&DAT_140c60410)[lVar21] + lVar18),local_res18,1,
                                                             &local_64,(LPOVERLAPPED)0x0);
                                            if (((BVar9 == 0) && (DVar11 = GetLastError(), DVar11 != 0)) ||
                                                (local_64 == 0)) goto LAB_1407f7abe;
                                            if ((*(byte *)((&DAT_140c60410)[lVar21] + 8 + lVar18) & 0x48) == 0) {
                                                if ((pWVar19 == lpMultiByteStr) && (local_res18[0] == '\n'))
                                                    goto LAB_1407f7a89;
                                                FUN_1407f1094(param_1,0xffffffffffffffff,1);
                                                if (local_res18[0] == '\n') goto LAB_1407f7ac4;
                                                goto LAB_1407f7abe;
                                            }
                                            if (local_res18[0] == '\n') {
                                                LAB_1407f7a89:
                                                *(undefined *)pWVar19 = 10;
                                            }
                                            else {
                                                *(undefined *)pWVar19 = 0xd;
                                                *(char *)((&DAT_140c60410)[lVar21] + 9 + lVar18) = local_res18[0];
                                            }
                                        }
                                        pWVar19 = (LPWSTR)((longlong)pWVar19 + 1);
                                    }
                                    else {
                                        *(char *)pWVar19 = cVar2;
                                        pWVar19 = (LPWSTR)((longlong)pWVar19 + 1);
                                        pWVar20 = (LPWSTR)((longlong)pWVar16 + 1);
                                    }
                                    LAB_1407f7ac4:
                                    pWVar16 = pWVar20;
                                } while (pWVar20 < local_58);
                            }
                            iVar22 = (int)pWVar19 - iVar15;
                            iVar7 = local_60;
                            if (((byte)local_res20 != '\x01') || (iVar22 == 0)) goto LAB_1407f7cc2;
                            if ((*(byte *)(LPWSTR)((longlong)pWVar19 + -1) & 0x80) != 0) {
                                iVar7 = 1;
                                for (pWVar19 = (LPWSTR)((longlong)pWVar19 + -1);
                                     (((&DAT_140c10980)[*(byte *)pWVar19] == '\0' && (iVar7 < 5)) &&
                                      (lpMultiByteStr <= pWVar19)); pWVar19 = (LPWSTR)((longlong)pWVar19 + -1)) {
                                    iVar7 = iVar7 + 1;
                                }
                                if ((&DAT_140c10980)[*(byte *)pWVar19] == '\0') {
                                    piVar13 = _errno();
                                    *piVar13 = 0x2a;
                                    goto LAB_1407f790e;
                                }
                                if ((char)(&DAT_140c10980)[*(byte *)pWVar19] + 1 == iVar7) {
                                    pWVar19 = (LPWSTR)((longlong)pWVar19 + (longlong)iVar7);
                                }
                                else if ((*(byte *)((&DAT_140c60410)[lVar21] + 8 + lVar18) & 0x48) == 0) {
                                    FUN_1407f1094(param_1,(longlong)-iVar7,1);
                                }
                                else {
                                    pWVar16 = (LPWSTR)((longlong)pWVar19 + 1);
                                    *(byte *)((&DAT_140c60410)[lVar21] + 9 + lVar18) = *(byte *)pWVar19;
                                    if (1 < iVar7) {
                                        uVar3 = *(undefined *)pWVar16;
                                        pWVar16 = pWVar19 + 1;
                                        *(undefined *)((&DAT_140c60410)[lVar21] + 0x39 + lVar18) = uVar3;
                                    }
                                    if (iVar7 == 3) {
                                        uVar3 = *(undefined *)pWVar16;
                                        pWVar16 = (LPWSTR)((longlong)pWVar16 + 1);
                                        *(undefined *)((&DAT_140c60410)[lVar21] + 0x3a + lVar18) = uVar3;
                                    }
                                    pWVar19 = (LPWSTR)((longlong)pWVar16 - (longlong)iVar7);
                                }
                            }
                            iVar15 = (int)pWVar19 - iVar15;
                            iVar22 = MultiByteToWideChar(0xfde9,0,(LPCSTR)lpMultiByteStr,iVar15,param_2,
                                                         local_50 >> 1);
                            if (iVar22 == 0) {
                                DVar11 = GetLastError();
                                _dosmaperr(DVar11);
                                iVar7 = -1;
                            }
                            else {
                                bVar23 = iVar22 != iVar15;
                                iVar22 = iVar22 * 2;
                                *(uint *)((&DAT_140c60410)[lVar21] + 0x48 + lVar18) = (uint)bVar23;
                                iVar7 = local_60;
                            }
                            goto LAB_1407f7cc2;
                        }
                        uVar10 = GetLastError();
                        if (uVar10 != 5) {
                            iVar7 = 0;
                            if (uVar10 == 0x6d) goto LAB_1407f7cc2;
                            goto LAB_1407f7907;
                        }
                        piVar13 = _errno();
                        *piVar13 = 9;
                        puVar12 = __doserrno();
                        *puVar12 = 5;
                    }
                    else {
                        uVar8 = GetConsoleMode(*(HANDLE *)((&DAT_140c60410)[lVar21] + lVar18),(LPDWORD)&local_58
                        );
                        local_58 = (LPWSTR)((ulonglong)local_58 & 0xffffffff00000000 | (ulonglong)uVar8);
                        if ((uVar8 == 0) || ((byte)local_res20 != '\x02')) goto LAB_1407f7921;
                        BVar9 = ReadConsoleW(*(HANDLE *)((&DAT_140c60410)[lVar21] + lVar18),pWVar19,
                                             (DWORD)(param_3 >> 1),&local_64,(PCONSOLE_READCONSOLE_CONTROL)0x0);
                        if (BVar9 != 0) {
                            local_64 = local_64 * 2;
                            goto LAB_1407f7968;
                        }
                        uVar10 = GetLastError();
                        LAB_1407f7907:
                        _dosmaperr(uVar10);
                    }
                    LAB_1407f790e:
                    iVar7 = -1;
                    LAB_1407f7cc2:
                    if (lpMultiByteStr != param_2) {
                        free(lpMultiByteStr);
                    }
                    if (iVar7 == -2) {
                        return iVar22;
                    }
                    return iVar7;
                }
            }
            LAB_1407f771e:
            puVar12 = __doserrno();
            *puVar12 = 0;
            piVar13 = _errno();
            *piVar13 = 0x16;
            goto LAB_1407f7ece;
        }
    }
    puVar12 = __doserrno();
    *puVar12 = 0;
    piVar13 = _errno();
    *piVar13 = 9;
    LAB_1407f7ece:
    FUN_1407dc370();
    return -1;
}



undefined8 FUN_1407f7ee8(undefined4 *param_1)

{
    int *piVar1;
    undefined8 uVar2;

    if (param_1 == (undefined4 *)0x0) {
        piVar1 = _errno();
        *piVar1 = 0x16;
        FUN_1407dc370();
        uVar2 = 0x16;
    }
    else {
        *param_1 = DAT_140c608ec;
        uVar2 = 0;
    }
    return uVar2;
}



int FUN_1407f7f18(uint param_1,int param_2)

{
    byte *pbVar1;
    char cVar2;
    byte bVar3;
    longlong lVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;

    lVar7 = (longlong)(int)param_1 >> 5;
    lVar6 = (ulonglong)(param_1 & 0x1f) * 0x58;
    lVar4 = (&DAT_140c60410)[lVar7];
    cVar2 = *(char *)(lVar4 + 0x38 + lVar6);
    bVar3 = *(byte *)(lVar4 + 8 + lVar6);
    if (param_2 == 0x4000) {
        *(byte *)(lVar4 + 8 + lVar6) = bVar3 | 0x80;
        pbVar1 = (byte *)((&DAT_140c60410)[lVar7] + 0x38 + lVar6);
        *pbVar1 = *pbVar1 & 0x80;
    }
    else if (param_2 == 0x8000) {
        *(byte *)(lVar4 + 8 + lVar6) = bVar3 & 0x7f;
    }
    else if ((param_2 - 0x10000U & 0xfffeffff) == 0) {
        *(byte *)(lVar4 + 8 + lVar6) = bVar3 | 0x80;
        lVar4 = (&DAT_140c60410)[lVar7];
        pbVar1 = (byte *)(lVar4 + 0x38 + lVar6);
        *pbVar1 = *pbVar1 & 0x82;
        pbVar1 = (byte *)(lVar4 + 0x38 + lVar6);
        *pbVar1 = *pbVar1 | 2;
    }
    else if (param_2 == 0x40000) {
        *(byte *)(lVar4 + 8 + lVar6) = bVar3 | 0x80;
        lVar4 = (&DAT_140c60410)[lVar7];
        pbVar1 = (byte *)(lVar4 + 0x38 + lVar6);
        *pbVar1 = *pbVar1 & 0x81;
        pbVar1 = (byte *)(lVar4 + 0x38 + lVar6);
        *pbVar1 = *pbVar1 | 1;
    }
    if ((bVar3 & 0x80) == 0) {
        iVar5 = 0x8000;
    }
    else {
        iVar5 = (-(uint)((char)(cVar2 * '\x02') >> 1 != '\0') & 0xc000) + 0x4000;
    }
    return iVar5;
}



void FUN_1407f7ff8(void)

{
    if (1 < (longlong)DAT_140c10a80 + 2U) {
        CloseHandle(DAT_140c10a80);
    }
    return;
}



void FUN_1407f8018(void)

{
    DAT_140c10a80 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    return;
}



ulonglong FUN_1407f8070(ulonglong *param_1,longlong param_2,ulonglong param_3)

{
    byte bVar1;
    ulonglong uVar2;
    bool bVar3;

    param_2 = param_2 - (longlong)param_1;
    if (param_3 != 0) {
        uVar2 = (ulonglong)param_1 & 7;
        while( true ) {
            if (uVar2 == 0) {
                while ((((int)param_1 + (int)param_2 & 0xfffU) < 0xff9 &&
                        (uVar2 = *param_1, uVar2 == *(ulonglong *)((longlong)param_1 + param_2)))) {
                    param_1 = param_1 + 1;
                    bVar3 = param_3 < 8;
                    param_3 = param_3 - 8;
                    if (bVar3 || param_3 == 0) {
                        return 0;
                    }
                    if ((~uVar2 & uVar2 + 0xfefefefefefefeff & 0x8080808080808080) != 0) {
                        return 0;
                    }
                }
            }
            bVar1 = *(byte *)param_1;
            if (bVar1 != *(byte *)((longlong)param_1 + param_2)) {
                return -(ulonglong)(bVar1 < *(byte *)((longlong)param_1 + param_2)) | 1;
            }
            param_1 = (ulonglong *)((longlong)param_1 + 1);
            param_3 = param_3 - 1;
            if ((param_3 == 0) || (bVar1 == 0)) break;
            uVar2 = (ulonglong)param_1 & 7;
        }
    }
    return 0;
}



int FUN_1407f80f0(byte *param_1,byte *param_2,longlong param_3)

{
    byte bVar1;
    uint uVar2;
    uint uVar3;

    if (param_3 != 0) {
        do {
            bVar1 = *param_1;
            uVar3 = (uint)bVar1;
            param_1 = param_1 + 1;
            if (bVar1 - 0x41 < 0x1a) {
                uVar3 = bVar1 + 0x20;
            }
            bVar1 = *param_2;
            uVar2 = (uint)bVar1;
            param_2 = param_2 + 1;
            if (bVar1 - 0x41 < 0x1a) {
                uVar2 = bVar1 + 0x20;
            }
            param_3 = param_3 + -1;
        } while (((param_3 != 0) && (uVar3 != 0)) && (uVar3 == uVar2));
        return uVar3 - uVar2;
    }
    return 0;
}



undefined8 FUN_1407f8138(longlong param_1,longlong param_2,ulonglong param_3)

{
    int *piVar1;
    undefined8 uVar2;

    if (DAT_140c5f560 != 0) {
        uVar2 = FUN_1407f8188();
        return uVar2;
    }
    if (((param_1 != 0) && (param_2 != 0)) && (param_3 < 0x80000000)) {
        uVar2 = FUN_1407f80f0();
        return uVar2;
    }
    piVar1 = _errno();
    *piVar1 = 0x16;
    FUN_1407dc370();
    return 0x7fffffff;
}



int FUN_1407f8188(longlong param_1,undefined *param_2,ulonglong param_3,localeinfo_struct *param_4)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    longlong local_28 [2];
    longlong local_18;
    char local_10;

    if (param_3 == 0) {
        iVar1 = 0;
    }
    else {
        _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,param_4);
        iVar1 = 0x7fffffff;
        if (((param_1 == 0) || (param_2 == (undefined *)0x0)) || (0x7fffffff < param_3)) {
            piVar3 = _errno();
            *piVar3 = 0x16;
            FUN_1407dc370();
        }
        else if (*(longlong *)(local_28[0] + 0x138) == 0) {
            iVar1 = FUN_1407f80f0(param_1,param_2,param_3);
        }
        else {
            param_1 = param_1 - (longlong)param_2;
            do {
                iVar1 = FUN_1407f6858(param_2[param_1],local_28);
                iVar2 = FUN_1407f6858(*param_2,local_28);
                param_2 = param_2 + 1;
                param_3 = param_3 - 1;
                if ((param_3 == 0) || (iVar1 == 0)) break;
            } while (iVar1 == iVar2);
            iVar1 = iVar1 - iVar2;
        }
        if (local_10 != '\0') {
            *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
        }
    }
    return iVar1;
}



// WARNING: Could not reconcile some variable overlaps

double FUN_1407f8264(double param_1,undefined8 param_2,int *param_3)

{
    double dVar1;
    int iVar2;
    undefined8 local_res8;
    ulonglong local_res10;

    local_res8 = 0.0;
    if (param_1 == 0.0) {
        iVar2 = 0;
    }
    else if ((((ulonglong)param_1 & 0x7ff0000000000000) == 0) &&
             ((local_res8._0_4_ = SUB84(param_1,0), ((ulonglong)param_1 >> 0x20 & 0xfffff) != 0 ||
                                                    ((int)local_res8 != 0)))) {
        iVar2 = -0x3fd;
        local_res8 = param_1;
        if (((ulonglong)param_1 >> 0x30 & 0x10) == 0) {
            local_res8._4_4_ = (uint)((ulonglong)param_1 >> 0x20);
            do {
                local_res8._4_4_ = local_res8._4_4_ * 2;
                if ((int)local_res8 < 0) {
                    local_res8._4_4_ = local_res8._4_4_ | 1;
                }
                local_res8._0_4_ = (int)local_res8 * 2;
                iVar2 = iVar2 + -1;
            } while ((local_res8._4_4_ & 0x100000) == 0);
        }
        dVar1 = local_res8;
        local_res8 = (double)((ulonglong)local_res8 & 0xffefffffffffffff);
        if (param_1 < 0.0) {
            local_res8 = (double)((ulonglong)dVar1 & 0xffefffffffffffff | 0x8000000000000000);
        }
        local_res8 = (double)((ulonglong)local_res8 & 0xbfefffffffffffff | 0x3fe0000000000000);
    }
    else {
        local_res10 = (ulonglong)param_1 & 0xbfefffffffffffff | 0x3fe0000000000000;
        iVar2 = (short)((ushort)((ulonglong)param_1 >> 0x34) & 0x7ff) + -0x3fe;
        local_res8 = (double)local_res10;
    }
    *param_3 = iVar2;
    return local_res8;
}



// Library Function - Single Match
//  _set_exp
//
// Libraries: Visual Studio 2012 Release, Visual Studio 2019 Release

ulonglong _set_exp(ulonglong param_1,undefined8 param_2,short param_3)

{
    ulonglong local_res18;

    local_res18 = param_1 & 0xffffffffffff |
                  (ulonglong)(ushort)((ushort)(param_1 >> 0x30) & 0x800f | (param_3 + 0x3fe) * 0x10)
                          << 0x30;
    return local_res18;
}



undefined8 FUN_1407f83d0(ulonglong param_1)

{
    int iVar1;
    int iVar2;
    ushort uVar3;

    iVar2 = (int)(param_1 >> 0x20);
    iVar1 = (int)param_1;
    if ((iVar2 == 0x7ff00000) && (iVar1 == 0)) {
        return 1;
    }
    if ((iVar2 == -0x100000) && (iVar1 == 0)) {
        return 2;
    }
    uVar3 = (ushort)(param_1 >> 0x30) & 0x7ff8;
    if (uVar3 == 0x7ff8) {
        return 3;
    }
    if ((uVar3 == 0x7ff0) && (((param_1 >> 0x20 & 0x7ffff) != 0 || (iVar1 != 0)))) {
        return 4;
    }
    return 0;
}



// Library Function - Single Match
//  _get_fpsr
//
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2015 Release,
// Visual Studio 2019 Release

undefined4 _get_fpsr(void)

{
    undefined4 in_MXCSR;

    return in_MXCSR;
}



void FUN_1407f8470(void)

{
    return;
}



// Library Function - Single Match
//  _fclrf
//
// Library: Visual Studio

void _fclrf(void)

{
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1407f84b0(int *param_1,int param_2,uint param_3,short *param_4)

{
    short *psVar1;
    code *pcVar2;
    undefined3 uVar3;
    bool bVar4;
    undefined uVar5;
    ushort uVar6;
    short sVar7;
    ushort uVar8;
    int iVar9;
    uint uVar10;
    uint *puVar11;
    uint uVar12;
    ulonglong uVar13;
    uint uVar14;
    undefined4 *puVar15;
    ushort uVar16;
    uint uVar17;
    uint uVar18;
    int iVar19;
    longlong lVar20;
    char cVar21;
    uint uVar22;
    uint uVar23;
    short *psVar24;
    short *psVar25;
    ulonglong *puVar26;
    int iVar27;
    ushort *puVar28;
    undefined auStack248 [32];
    undefined8 local_d8;
    ushort local_c8;
    ushort local_c6;
    int local_c4;
    uint local_c0;
    undefined2 local_bc;
    longlong local_b8;
    uint local_b0;
    int local_ac;
    int local_a8;
    short *local_a0;
    uint local_98;
    ulonglong *local_90;
    byte local_88;
    undefined uStack135;
    ushort uStack134;
    ushort auStack132 [6];
    ushort local_78 [4];
    ushort uStack112;
    undefined uStack110;
    byte bStack109;
    int local_68;
    int local_64;
    undefined4 local_60;
    ulonglong local_58;
    int local_50;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack248;
    iVar19 = *param_1;
    uVar22 = param_1[1];
    local_c6 = *(ushort *)(param_1 + 2) & 0x8000;
    uVar16 = *(ushort *)(param_1 + 2) & 0x7fff;
    local_68 = -0x33333334;
    local_64 = -0x33333334;
    local_60 = 0x3ffbcccc;
    if (local_c6 == 0) {
        *(undefined *)(param_4 + 1) = 0x20;
    }
    else {
        *(undefined *)(param_4 + 1) = 0x2d;
    }
    local_ac = param_2;
    local_a0 = param_4;
    local_98 = param_3;
    if (uVar16 == 0) {
        if ((uVar22 != 0) || (iVar19 != 0)) goto LAB_1407f8641;
        uVar5 = 0x20;
        if (local_c6 == 0x8000) {
            uVar5 = 0x2d;
        }
        LAB_1407f855c:
        *param_4 = 0;
        *(undefined *)(param_4 + 1) = uVar5;
        *(undefined2 *)((longlong)param_4 + 3) = 0x3001;
    }
    else {
        if (uVar16 == 0x7fff) {
            *param_4 = 1;
            if (((uVar22 == 0x80000000) && (iVar19 == 0)) || ((uVar22 >> 0x1e & 1) != 0)) {
                if ((local_c6 == 0) || (uVar22 != 0xc0000000)) {
                    if ((uVar22 != 0x80000000) || (iVar19 != 0)) goto LAB_1407f8618;
                    iVar19 = FUN_1407ea194(param_4 + 2,0x16,"1#INF");
                    if (iVar19 != 0) {
                        local_d8 = 0;
                        FUN_1407dc390(0,0,0,0);
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                    }
                }
                else {
                    if (iVar19 != 0) {
                        LAB_1407f8618:
                        iVar19 = FUN_1407ea194(param_4 + 2,0x16,"1#QNAN");
                        if (iVar19 != 0) {
                            local_d8 = 0;
                            FUN_1407dc390(0,0,0,0);
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                        }
                        goto LAB_1407f8635;
                    }
                    iVar19 = FUN_1407ea194(param_4 + 2,0x16,"1#IND");
                    if (iVar19 != 0) {
                        local_d8 = 0;
                        FUN_1407dc390(0,0,0,0);
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                    }
                }
                *(undefined *)((longlong)param_4 + 3) = 5;
            }
            else {
                iVar19 = FUN_1407ea194(param_4 + 2,0x16,"1#SNAN");
                if (iVar19 != 0) {
                    local_d8 = 0;
                    FUN_1407dc390(0,0,0,0);
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                }
                LAB_1407f8635:
                *(undefined *)((longlong)param_4 + 3) = 6;
            }
            goto LAB_1407f8ec2;
        }
        LAB_1407f8641:
        local_78[3] = (ushort)uVar22;
        uStack112 = (ushort)(uVar22 >> 0x10);
        local_78[1] = (ushort)iVar19;
        local_78[2] = (ushort)((uint)iVar19 >> 0x10);
        lVar20 = 0x140c10660;
        uStack110 = (undefined)uVar16;
        bStack109 = (byte)(uVar16 >> 8);
        local_78[0] = 0;
        iVar9 = (uint)uVar16 * 0x4d10 + -0x134312f4 +
                ((uint)(uVar16 >> 8) + (uVar22 >> 0x18) * 2) * 0x4d;
        local_a8 = 5;
        local_c0 = iVar9 >> 0x10;
        sVar7 = (short)((uint)iVar9 >> 0x10);
        uVar22 = (uint)sVar7;
        if (-uVar22 == 0) {
            LAB_1407f8a16:
            uVar23 = CONCAT22(local_78[3],local_78[2]);
            uVar22 = iVar19 << 0x10;
        }
        else {
            uVar14 = -uVar22;
            if (0 < (int)uVar22) {
                lVar20 = 0x140c107c0;
                uVar14 = uVar22;
            }
            if (uVar14 == 0) goto LAB_1407f8a16;
            uVar23 = CONCAT22(local_78[3],local_78[2]);
            uVar22 = iVar19 << 0x10;
            do {
                iVar19 = 0;
                lVar20 = lVar20 + 0x54;
                local_b0 = (int)uVar14 >> 3;
                if ((uVar14 & 7) != 0) {
                    local_90 = (ulonglong *)(lVar20 + (longlong)(int)(uVar14 & 7) * 0xc);
                    if (0x7fff < *(ushort *)local_90) {
                        uVar13 = *local_90;
                        puVar26 = local_90 + 1;
                        local_90 = &local_58;
                        local_50 = *(int *)puVar26;
                        local_58._0_6_ = CONCAT42((int)(uVar13 >> 0x10) + -1,(short)uVar13);
                        local_58 = uVar13 & 0xffff000000000000 | (ulonglong)(uint6)local_58;
                    }
                    local_c4 = 0;
                    uVar8 = *(ushort *)((longlong)local_90 + 10) & 0x7fff;
                    local_88 = 0;
                    uStack135 = 0;
                    uStack134 = 0;
                    auStack132[0] = 0;
                    auStack132[1] = 0;
                    uVar6 = CONCAT11(bStack109,uStack110) & 0x7fff;
                    auStack132[2] = 0;
                    auStack132[3] = 0;
                    local_c8 = (*(ushort *)((longlong)local_90 + 10) ^ CONCAT11(bStack109,uStack110)) & 0x8000
                            ;
                    uVar16 = uVar6 + uVar8;
                    if (((uVar6 < 0x7fff) && (uVar8 < 0x7fff)) && (uVar16 < 0xbffe)) {
                        if (0x3fbf < uVar16) {
                            if (((uVar6 == 0) &&
                                 (uVar16 = uVar16 + 1,
                                         (CONCAT13(bStack109,CONCAT12(uStack110,uStack112)) & 0x7fffffff) == 0)) &&
                                ((uVar23 == 0 && (uVar22 == 0)))) {
                                uStack110 = 0;
                                bStack109 = 0;
                                goto LAB_1407f89ff;
                            }
                            if (((uVar8 == 0) &&
                                 (uVar16 = uVar16 + 1, (*(uint *)(local_90 + 1) & 0x7fffffff) == 0)) &&
                                ((*(int *)((longlong)local_90 + 4) == 0 && (*(int *)local_90 == 0))))
                                goto LAB_1407f8788;
                            puVar11 = (uint *)&local_88;
                            iVar9 = 5;
                            do {
                                if (0 < iVar9) {
                                    puVar26 = local_90 + 1;
                                    puVar28 = (ushort *)((longlong)local_78 + (longlong)(iVar19 * 2));
                                    iVar27 = iVar9;
                                    do {
                                        uVar22 = *puVar11 + (uint)*puVar28 * (uint)*(ushort *)puVar26;
                                        if ((uVar22 < *puVar11) ||
                                            (bVar4 = false, uVar22 < (uint)*puVar28 * (uint)*(ushort *)puVar26)) {
                                            bVar4 = true;
                                        }
                                        *puVar11 = uVar22;
                                        if (bVar4) {
                                            *(short *)(puVar11 + 1) = *(short *)(puVar11 + 1) + 1;
                                        }
                                        iVar27 = iVar27 + -1;
                                        puVar28 = puVar28 + 1;
                                        puVar26 = (ulonglong *)((longlong)puVar26 + -2);
                                    } while (0 < iVar27);
                                }
                                iVar9 = iVar9 + -1;
                                puVar11 = (uint *)((longlong)puVar11 + 2);
                                iVar19 = iVar19 + 1;
                            } while (0 < iVar9);
                            uVar14 = CONCAT22(auStack132[3],auStack132[2]);
                            uVar22 = CONCAT22(uStack134,CONCAT11(uStack135,local_88));
                            uVar16 = uVar16 + 0xc002;
                            uVar23 = uVar22;
                            if ((short)uVar16 < 1) {
                                LAB_1407f88b8:
                                uVar16 = uVar16 - 1;
                                if (-1 < (short)uVar16) goto LAB_1407f8925;
                                uVar13 = (ulonglong)(ushort)-uVar16;
                                local_bc = 0;
                                iVar19 = local_c4;
                                do {
                                    uVar23 = uVar14;
                                    if ((local_88 & 1) != 0) {
                                        iVar19 = iVar19 + 1;
                                    }
                                    uVar17 = CONCAT22(auStack132[1],auStack132[0]);
                                    uVar10 = uVar22 >> 1;
                                    auStack132[1] = auStack132[1] >> 1 | (ushort)((uVar23 << 0x1f) >> 0x10);
                                    uVar14 = uVar23 >> 1;
                                    uVar22 = uVar10 | uVar17 << 0x1f;
                                    auStack132[0] = (ushort)(uVar17 >> 1);
                                    local_88 = (byte)uVar10;
                                    uStack135 = (undefined)(uVar10 >> 8);
                                    uStack134 = (ushort)(uVar22 >> 0x10);
                                    uVar13 = uVar13 - 1;
                                } while (uVar13 != 0);
                                uVar16 = 0;
                                auStack132[2] = (ushort)uVar14;
                                auStack132[3] = (ushort)(uVar23 >> 0x11);
                                if (iVar19 == 0) goto LAB_1407f8925;
                                uVar6 = (ushort)uVar10 | 1;
                                local_88 = (byte)uVar6;
                                uVar22 = uVar10 | 1;
                            }
                            else {
                                do {
                                    uVar22 = uVar23;
                                    if ((uVar14 & 0x80000000) != 0) break;
                                    uVar17 = uVar14 * 2;
                                    uVar22 = uVar23 * 2;
                                    iVar19 = CONCAT22(auStack132[1],auStack132[0]) * 2;
                                    uVar16 = uVar16 - 1;
                                    auStack132[0] = (ushort)iVar19 | (ushort)(uVar23 >> 0x1f);
                                    uVar14 = uVar17 | auStack132[1] >> 0xf;
                                    local_88 = (byte)uVar22;
                                    uStack135 = (undefined)(uVar22 >> 8);
                                    uStack134 = (ushort)(uVar22 >> 0x10);
                                    auStack132[1] = (ushort)((uint)iVar19 >> 0x10);
                                    auStack132[2] = (ushort)uVar14;
                                    auStack132[3] = (ushort)(uVar17 >> 0x10);
                                    uVar23 = uVar22;
                                } while (0 < (short)uVar16);
                                if ((short)uVar16 < 1) goto LAB_1407f88b8;
                                LAB_1407f8925:
                                uVar6 = CONCAT11(uStack135,local_88);
                            }
                            if ((0x8000 < uVar6) || ((uVar22 & 0x1ffff) == 0x18000)) {
                                if (CONCAT22(auStack132[0],uStack134) == -1) {
                                    uStack134 = 0;
                                    auStack132[0] = 0;
                                    if (CONCAT22(auStack132[2],auStack132[1]) == -1) {
                                        auStack132[1] = 0;
                                        auStack132[2] = 0;
                                        if (auStack132[3] == 0xffff) {
                                            auStack132[3] = 0x8000;
                                            uVar16 = uVar16 + 1;
                                        }
                                        else {
                                            auStack132[3] = auStack132[3] + 1;
                                        }
                                    }
                                    else {
                                        iVar19 = CONCAT22(auStack132[2],auStack132[1]) + 1;
                                        auStack132[1] = (ushort)iVar19;
                                        auStack132[2] = (ushort)((uint)iVar19 >> 0x10);
                                    }
                                    uVar14 = CONCAT22(auStack132[3],auStack132[2]);
                                }
                                else {
                                    iVar19 = CONCAT22(auStack132[0],uStack134) + 1;
                                    uStack134 = (ushort)iVar19;
                                    auStack132[0] = (ushort)((uint)iVar19 >> 0x10);
                                }
                            }
                            if (uVar16 < 0x7fff) {
                                bStack109 = (byte)(uVar16 >> 8) | (byte)(local_c8 >> 8);
                                local_78[3] = (ushort)uVar14;
                                uStack112 = (ushort)(uVar14 >> 0x10);
                                local_78[0] = uStack134;
                                local_78[1] = auStack132[0];
                                local_78[2] = auStack132[1];
                                uVar23 = CONCAT22(local_78[3],auStack132[1]);
                                uVar22 = CONCAT22(auStack132[0],uStack134);
                                uStack110 = (undefined)uVar16;
                                goto LAB_1407f89ff;
                            }
                            goto LAB_1407f89e1;
                        }
                        LAB_1407f8788:
                        local_78[2] = 0;
                        local_78[3] = 0;
                        uStack112 = 0;
                        uStack110 = 0;
                        bStack109 = 0;
                    }
                    else {
                        LAB_1407f89e1:
                        local_78[2] = 0;
                        local_78[3] = 0;
                        iVar19 = (-(uint)(local_c8 != 0) & 0x80000000) + 0x7fff8000;
                        uStack112 = (ushort)iVar19;
                        uStack110 = (undefined)((uint)iVar19 >> 0x10);
                        bStack109 = (byte)((uint)iVar19 >> 0x18);
                    }
                    local_78[3] = 0;
                    local_78[2] = 0;
                    uVar23 = 0;
                    local_78[0] = 0;
                    local_78[1] = 0;
                    uVar22 = uVar23;
                }
                LAB_1407f89ff:
                uVar14 = local_b0;
                local_b8 = lVar20;
            } while (local_b0 != 0);
        }
        iVar19 = 0;
        uVar14 = CONCAT13(bStack109,CONCAT12(uStack110,uStack112));
        uVar16 = (ushort)(uVar14 >> 0x10);
        uVar17 = uVar23;
        if (0x3ffe < uVar16) {
            local_c0 = local_c0 & 0xffff0000 | (uint)(ushort)(sVar7 + 1);
            uVar17 = 0;
            local_c4 = 0;
            local_88 = 0;
            uStack135 = 0;
            uStack134 = 0;
            auStack132[0] = 0;
            auStack132[1] = 0;
            auStack132[2] = 0;
            auStack132[3] = 0;
            uVar8 = (local_60._2_2_ ^ uVar16) & 0x8000;
            uVar6 = (uVar16 & 0x7fff) + (local_60._2_2_ & 0x7fff);
            if ((((uVar16 & 0x7fff) < 0x7fff) && ((local_60._2_2_ & 0x7fff) < 0x7fff)) && (uVar6 < 0xbffe)
                    ) {
                if (uVar6 < 0x3fc0) {
                    LAB_1407f8a9a:
                    uStack112 = 0;
                    uStack110 = 0;
                    bStack109 = 0;
                    uVar22 = uVar17;
                }
                else if ((((uVar14 & 0x7fff0000) == 0) &&
                          (uVar6 = uVar6 + 1,
                                  (CONCAT13(bStack109,CONCAT12(uStack110,uStack112)) & 0x7fffffff) == 0)) &&
                         ((uVar23 == 0 && (uVar22 == 0)))) {
                    uStack110 = 0;
                    bStack109 = 0;
                    uVar17 = uVar23;
                }
                else {
                    if ((((local_60 & 0x7fff0000) == 0) && (uVar6 = uVar6 + 1, (local_60 & 0x7fffffff) == 0))
                        && ((local_64 == 0 && (local_68 == 0)))) goto LAB_1407f8a9a;
                    puVar11 = (uint *)&local_88;
                    do {
                        if (0 < local_a8) {
                            puVar15 = &local_60;
                            puVar28 = (ushort *)((longlong)local_78 + (longlong)(iVar19 * 2));
                            iVar9 = local_a8;
                            do {
                                uVar22 = *puVar11 + (uint)*(ushort *)puVar15 * (uint)*puVar28;
                                if ((uVar22 < *puVar11) ||
                                    (bVar4 = false, uVar22 < (uint)*(ushort *)puVar15 * (uint)*puVar28)) {
                                    bVar4 = true;
                                }
                                *puVar11 = uVar22;
                                if (bVar4) {
                                    *(short *)(puVar11 + 1) = *(short *)(puVar11 + 1) + 1;
                                }
                                iVar9 = iVar9 + -1;
                                puVar28 = puVar28 + 1;
                                puVar15 = (undefined4 *)((longlong)puVar15 + -2);
                            } while (0 < iVar9);
                        }
                        local_a8 = local_a8 + -1;
                        puVar11 = (uint *)((longlong)puVar11 + 2);
                        iVar19 = iVar19 + 1;
                    } while (0 < local_a8);
                    uVar14 = CONCAT22(auStack132[3],auStack132[2]);
                    uVar22 = CONCAT22(uStack134,CONCAT11(uStack135,local_88));
                    uVar6 = uVar6 + 0xc002;
                    uVar23 = uVar22;
                    if ((short)uVar6 < 1) {
                        LAB_1407f8bbf:
                        uVar6 = uVar6 - 1;
                        if (-1 < (short)uVar6) goto LAB_1407f8c24;
                        uVar13 = (ulonglong)(ushort)-uVar6;
                        uVar6 = 0;
                        iVar19 = local_c4;
                        do {
                            uVar23 = uVar14;
                            if ((local_88 & 1) != 0) {
                                iVar19 = iVar19 + 1;
                            }
                            uVar17 = CONCAT22(auStack132[1],auStack132[0]);
                            uVar10 = uVar22 >> 1;
                            auStack132[1] = auStack132[1] >> 1 | (ushort)((uVar23 << 0x1f) >> 0x10);
                            uVar14 = uVar23 >> 1;
                            uVar22 = uVar10 | uVar17 << 0x1f;
                            auStack132[0] = (ushort)(uVar17 >> 1);
                            local_88 = (byte)uVar10;
                            uStack135 = (undefined)(uVar10 >> 8);
                            uStack134 = (ushort)(uVar22 >> 0x10);
                            uVar13 = uVar13 - 1;
                        } while (uVar13 != 0);
                        auStack132[2] = (ushort)uVar14;
                        auStack132[3] = (ushort)(uVar23 >> 0x11);
                        if (iVar19 == 0) goto LAB_1407f8c24;
                        uVar16 = (ushort)uVar10 | 1;
                        local_88 = (byte)uVar16;
                        uVar22 = uVar10 | 1;
                    }
                    else {
                        do {
                            uVar22 = uVar23;
                            if ((uVar14 & 0x80000000) != 0) break;
                            uVar17 = uVar14 * 2;
                            uVar22 = uVar23 * 2;
                            iVar19 = CONCAT22(auStack132[1],auStack132[0]) * 2;
                            uVar6 = uVar6 - 1;
                            auStack132[0] = (ushort)iVar19 | (ushort)(uVar23 >> 0x1f);
                            uVar14 = uVar17 | auStack132[1] >> 0xf;
                            local_88 = (byte)uVar22;
                            uStack135 = (undefined)(uVar22 >> 8);
                            uStack134 = (ushort)(uVar22 >> 0x10);
                            auStack132[1] = (ushort)((uint)iVar19 >> 0x10);
                            auStack132[2] = (ushort)uVar14;
                            auStack132[3] = (ushort)(uVar17 >> 0x10);
                            uVar23 = uVar22;
                        } while (0 < (short)uVar6);
                        if ((short)uVar6 < 1) goto LAB_1407f8bbf;
                        LAB_1407f8c24:
                        uVar16 = CONCAT11(uStack135,local_88);
                    }
                    if ((0x8000 < uVar16) || ((uVar22 & 0x1ffff) == 0x18000)) {
                        if (CONCAT22(auStack132[0],uStack134) == -1) {
                            uStack134 = 0;
                            auStack132[0] = 0;
                            if (CONCAT22(auStack132[2],auStack132[1]) == -1) {
                                auStack132[1] = 0;
                                auStack132[2] = 0;
                                if (auStack132[3] == 0xffff) {
                                    auStack132[3] = 0x8000;
                                    uVar6 = uVar6 + 1;
                                }
                                else {
                                    auStack132[3] = auStack132[3] + 1;
                                }
                            }
                            else {
                                iVar19 = CONCAT22(auStack132[2],auStack132[1]) + 1;
                                auStack132[1] = (ushort)iVar19;
                                auStack132[2] = (ushort)((uint)iVar19 >> 0x10);
                            }
                            uVar14 = CONCAT22(auStack132[3],auStack132[2]);
                        }
                        else {
                            iVar19 = CONCAT22(auStack132[0],uStack134) + 1;
                            uStack134 = (ushort)iVar19;
                            auStack132[0] = (ushort)((uint)iVar19 >> 0x10);
                        }
                    }
                    if (uVar6 < 0x7fff) {
                        bStack109 = (byte)(uVar6 >> 8) | (byte)(uVar8 >> 8);
                        local_78[3] = (ushort)uVar14;
                        uStack112 = (ushort)(uVar14 >> 0x10);
                        local_78[0] = uStack134;
                        uStack110 = (undefined)uVar6;
                        local_78[1] = auStack132[0];
                        local_78[2] = auStack132[1];
                        uVar17 = CONCAT22(local_78[3],auStack132[1]);
                        uVar22 = CONCAT22(auStack132[0],uStack134);
                    }
                    else {
                        iVar19 = (-(uint)(uVar8 != 0) & 0x80000000) + 0x7fff8000;
                        uStack112 = (ushort)iVar19;
                        uStack110 = (undefined)((uint)iVar19 >> 0x10);
                        bStack109 = (byte)((uint)iVar19 >> 0x18);
                        uVar17 = 0;
                        uVar22 = 0;
                    }
                }
            }
            else {
                iVar19 = (-(uint)(uVar8 != 0) & 0x80000000) + 0x7fff8000;
                uStack112 = (ushort)iVar19;
                uStack110 = (undefined)((uint)iVar19 >> 0x10);
                bStack109 = (byte)((uint)iVar19 >> 0x18);
                uVar22 = uVar17;
            }
        }
        *param_4 = (short)local_c0;
        if (((param_3 & 1) != 0) && (param_2 = param_2 + (short)local_c0, param_2 < 1)) {
            uVar5 = 0x20;
            if (local_c6 == 0x8000) {
                uVar5 = 0x2d;
            }
            goto LAB_1407f855c;
        }
        uVar3 = CONCAT12(uStack110,uStack112);
        uStack110 = 0;
        uVar14 = (uint)uStack112;
        lVar20 = 8;
        if (0x15 < param_2) {
            param_2 = 0x15;
        }
        iVar19 = (CONCAT13(bStack109,uVar3) >> 0x10) - 0x3ffe;
        do {
            uVar23 = uVar17 * 2;
            uVar10 = uVar17 >> 0x1f;
            uVar17 = uVar23 | uVar22 >> 0x1f;
            uVar14 = uVar14 * 2 | uVar10;
            uVar22 = uVar22 * 2;
            lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        local_78[2] = (ushort)uVar17;
        local_78[3] = (ushort)(uVar23 >> 0x10);
        local_78[0] = (ushort)uVar22;
        local_78[1] = (ushort)(uVar22 >> 0x10);
        if ((iVar19 < 0) && (uVar23 = -iVar19 & 0xff, uVar23 != 0)) {
            do {
                uVar12 = uVar22 >> 1;
                uVar18 = uVar17 >> 1;
                uVar10 = uVar14 << 0x1f;
                uVar22 = uVar17 << 0x1f;
                uVar23 = uVar23 - 1;
                uVar14 = uVar14 >> 1;
                uVar17 = uVar18 | uVar10;
                uVar22 = uVar12 | uVar22;
            } while (0 < (int)uVar23);
            local_78[2] = (ushort)uVar18;
            local_78[3] = (ushort)(uVar17 >> 0x10);
            local_78[0] = (ushort)uVar12;
            local_78[1] = (ushort)(uVar22 >> 0x10);
        }
        param_2 = param_2 + 1;
        psVar1 = param_4 + 2;
        psVar24 = psVar1;
        if (0 < param_2) {
            while( true ) {
                uVar10 = CONCAT22(local_78[1],local_78[0]);
                local_58 = CONCAT26(local_78[3],CONCAT24(local_78[2],uVar10));
                uVar12 = (uVar17 * 2 | uVar22 >> 0x1f) * 2 | uVar22 * 2 >> 0x1f;
                uVar23 = uVar10 + uVar22 * 4;
                uVar18 = (uVar14 * 2 | uVar17 >> 0x1f) * 2 | uVar17 * 2 >> 0x1f;
                if ((uVar23 < uVar22 * 4) || (uVar22 = uVar12, uVar23 < uVar10)) {
                    uVar22 = uVar12 + 1;
                    bVar4 = false;
                    if ((uVar22 < uVar12) || (uVar22 == 0)) {
                        bVar4 = true;
                    }
                    if (bVar4) {
                        uVar18 = uVar18 + 1;
                    }
                }
                uVar17 = (uint)(local_58 >> 0x20);
                uVar10 = uVar22 + uVar17;
                if ((uVar10 < uVar22) || (uVar10 < uVar17)) {
                    uVar18 = uVar18 + 1;
                }
                uVar17 = uVar10 * 2 | uVar23 >> 0x1f;
                uVar14 = (uVar18 + uVar14) * 2;
                uStack112 = (ushort)uVar14 | (ushort)(uVar10 >> 0x1f);
                uVar22 = uVar23 * 2;
                param_2 = param_2 + -1;
                uStack110 = (undefined)(uVar14 >> 0x10);
                local_78[0] = (ushort)uVar22;
                local_78[1] = (ushort)(uVar22 >> 0x10);
                local_78[2] = (ushort)uVar17;
                local_78[3] = (ushort)(uVar10 * 2 >> 0x10);
                *(char *)psVar24 = (char)(uVar14 >> 0x18) + '0';
                psVar24 = (short *)((longlong)psVar24 + 1);
                if (param_2 < 1) break;
                uVar14 = uVar14 & 0xffffff | uVar10 >> 0x1f;
            }
        }
        bStack109 = 0;
        psVar25 = psVar24 + -1;
        if ('4' < *(char *)((longlong)psVar24 + -1)) {
            for (; (psVar1 <= psVar25 && (*(char *)psVar25 == '9'));
                   psVar25 = (short *)((longlong)psVar25 + -1)) {
                *(undefined *)psVar25 = 0x30;
            }
            if (psVar25 < psVar1) {
                psVar25 = (short *)((longlong)psVar25 + 1);
                *param_4 = *param_4 + 1;
            }
            *(char *)psVar25 = *(char *)psVar25 + '\x01';
            LAB_1407f8eae:
            cVar21 = ((char)psVar25 - (char)param_4) + -3;
            *(char *)((longlong)param_4 + 3) = cVar21;
            *(undefined *)((longlong)cVar21 + 4 + (longlong)param_4) = 0;
            goto LAB_1407f8ec2;
        }
        for (; (psVar1 <= psVar25 && (*(char *)psVar25 == '0'));
               psVar25 = (short *)((longlong)psVar25 + -1)) {
        }
        if (psVar1 <= psVar25) goto LAB_1407f8eae;
        *param_4 = 0;
        *(undefined *)((longlong)param_4 + 3) = 1;
        uVar5 = 0x20;
        if (local_c6 == 0x8000) {
            uVar5 = 0x2d;
        }
        *(undefined *)(param_4 + 1) = uVar5;
        *(undefined *)psVar1 = 0x30;
    }
    *(undefined *)((longlong)param_4 + 5) = 0;
    LAB_1407f8ec2:
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack248);
    return;
}


