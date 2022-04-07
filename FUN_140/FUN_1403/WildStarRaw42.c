//
// Created by flop on 04.04.22.
//
#include "../../include.h"

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1403e1400(undefined8 *param_1)

{
    longlong *plVar1;
    undefined4 uVar2;
    int *piVar3;
    undefined2 *puVar4;
    undefined *puVar5;
    undefined8 uVar6;
    longlong lVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    int iVar10;
    undefined8 *puVar11;
    undefined8 *puVar12;
    longlong lVar13;
    uint uVar14;
    longlong lVar15;
    uint uVar16;
    float fVar17;
    undefined4 uVar18;
    undefined4 uVar19;
    undefined4 uVar20;
    undefined4 uVar21;
    undefined4 local_res8 [2];
    uint uStack84;

    *param_1 = &PTR_LAB_140b55048;
    *(undefined4 *)(param_1 + 1) = 1;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *param_1 = &PTR_LAB_140b66880;
    param_1[9] = &PTR_FUN_140b66900;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)((longlong)param_1 + 100) = 1000;
    *(undefined4 *)(param_1 + 0xd) = 5000;
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0xffffffff;
    param_1[0xe] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    puVar4 = (undefined2 *)FUN_14018b280(0x10);
    param_1[0x11] = puVar4;
    param_1[0x12] = puVar4;
    param_1[0x13] = puVar4 + 8;
    if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
    }
    FUN_1403faa60(param_1 + 0x14);
    param_1[0xae] = 0;
    param_1[0xad] = 0;
    iVar10 = 0xb;
    puVar9 = param_1 + 0xaf;
    do {
        iVar10 = iVar10 + -1;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        puVar9[6] = 0;
        *(undefined4 *)(puVar9 + 7) = 0xffffffff;
        puVar9[8] = 0;
        puVar9 = puVar9 + 9;
    } while (-1 < iVar10);
    lVar15 = 4;
    iVar10 = 4;
    puVar9 = param_1 + 0x11b;
    do {
        iVar10 = iVar10 + -1;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        puVar9[6] = 0;
        *(undefined4 *)(puVar9 + 7) = 0xffffffff;
        puVar9[8] = 0;
        puVar9 = puVar9 + 9;
    } while (-1 < iVar10);
    param_1[0x14b] = 0;
    param_1[0x14c] = 0;
    param_1[0x14e] = 0;
    param_1[0x14f] = 0;
    *(undefined4 *)(param_1 + 0x149) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0xa8c) = 0;
    param_1[0x153] = 0;
    param_1[0x152] = 0;
    puVar5 = (undefined *)FUN_14018b280(0x30);
    param_1[0x156] = 0;
    param_1[0x155] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0x155] + 8) = 0;
    *(undefined8 *)(param_1[0x155] + 0x10) = param_1[0x155];
    *(undefined8 *)(param_1[0x155] + 0x18) = param_1[0x155];
    puVar5 = (undefined *)FUN_14018b280(0x28);
    param_1[0x28d] = 0;
    param_1[0x28c] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0x28c] + 8) = 0;
    *(undefined8 *)(param_1[0x28c] + 0x10) = param_1[0x28c];
    *(undefined8 *)(param_1[0x28c] + 0x18) = param_1[0x28c];
    puVar5 = (undefined *)FUN_14018b280(0x38);
    param_1[0x291] = 0;
    param_1[0x290] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0x290] + 8) = 0;
    *(undefined8 *)(param_1[0x290] + 0x10) = param_1[0x290];
    *(undefined8 *)(param_1[0x290] + 0x18) = param_1[0x290];
    param_1[0x296] = 0;
    param_1[0x297] = 0;
    param_1[0x299] = 0;
    param_1[0x29a] = 0;
    *(undefined4 *)(param_1 + 0x294) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x14e4) = 0;
    param_1[0x2a0] = 0;
    param_1[0x2a1] = 0;
    param_1[0x2a3] = 0;
    param_1[0x2a4] = 0;
    *(undefined4 *)(param_1 + 0x29e) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x1534) = 0;
    param_1[0x2a9] = 0;
    param_1[0x2aa] = 0;
    param_1[0x2ac] = 0;
    param_1[0x2ad] = 0;
    *(undefined4 *)(param_1 + 0x2a7) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x157c) = 0;
    puVar5 = (undefined *)FUN_14018b280(0x30);
    param_1[0x2b2] = 0;
    param_1[0x2b1] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0x2b1] + 8) = 0;
    *(undefined8 *)(param_1[0x2b1] + 0x10) = param_1[0x2b1];
    *(undefined8 *)(param_1[0x2b1] + 0x18) = param_1[0x2b1];
    puVar5 = (undefined *)FUN_14018b280(0x28);
    param_1[0x2b6] = 0;
    param_1[0x2b5] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0x2b5] + 8) = 0;
    *(undefined8 *)(param_1[0x2b5] + 0x10) = param_1[0x2b5];
    *(undefined8 *)(param_1[0x2b5] + 0x18) = param_1[0x2b5];
    puVar5 = (undefined *)FUN_14018b280(0x28);
    param_1[0x2ba] = 0;
    param_1[0x2b9] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0x2b9] + 8) = 0;
    *(undefined8 *)(param_1[0x2b9] + 0x10) = param_1[0x2b9];
    *(undefined8 *)(param_1[0x2b9] + 0x18) = param_1[0x2b9];
    param_1[700] = 0;
    param_1[0x2bd] = 0;
    FUN_1405e48c0(param_1 + 0x2d3);
    puVar5 = (undefined *)FUN_14018b280(0x28);
    param_1[0x374] = 0;
    param_1[0x373] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0x373] + 8) = 0;
    *(undefined8 *)(param_1[0x373] + 0x10) = param_1[0x373];
    *(undefined8 *)(param_1[0x373] + 0x18) = param_1[0x373];
    puVar5 = (undefined *)FUN_14018b280(0x28);
    param_1[0x378] = 0;
    param_1[0x377] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0x377] + 8) = 0;
    *(undefined8 *)(param_1[0x377] + 0x10) = param_1[0x377];
    *(undefined8 *)(param_1[0x377] + 0x18) = param_1[0x377];
    puVar5 = (undefined *)FUN_14018b280(0x28);
    param_1[0x37c] = 0;
    param_1[0x37b] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0x37b] + 8) = 0;
    *(undefined8 *)(param_1[0x37b] + 0x10) = param_1[0x37b];
    *(undefined8 *)(param_1[0x37b] + 0x18) = param_1[0x37b];
    puVar5 = (undefined *)FUN_14018b280(0x48);
    param_1[0x381] = 0;
    param_1[0x380] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0x380] + 8) = 0;
    iVar10 = 0x3e;
    *(undefined8 *)(param_1[0x380] + 0x10) = param_1[0x380];
    *(undefined8 *)(param_1[0x380] + 0x18) = param_1[0x380];
    puVar9 = param_1 + 0x39a;
    do {
        iVar10 = iVar10 + -1;
        puVar9[-1] = 0;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9 = puVar9 + 0x24;
    } while (-1 < iVar10);
    param_1[0xc60] = &PTR_FUN_140b66870;
    puVar5 = (undefined *)FUN_14018b280(0x50);
    param_1[0xc63] = 0;
    param_1[0xc62] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0xc62] + 8) = 0;
    *(undefined8 *)(param_1[0xc62] + 0x10) = param_1[0xc62];
    *(undefined8 *)(param_1[0xc62] + 0x18) = param_1[0xc62];
    param_1[0xc60] = &PTR_LAB_140b66868;
    param_1[0xc67] = 0;
    param_1[0xc66] = 0;
    param_1[0xc68] = 0;
    param_1[0xc69] = 0;
    param_1[0xc6b] = 0;
    param_1[0xc6e] = 0;
    param_1[0xc6d] = 0;
    param_1[0xc71] = 0;
    param_1[0xc72] = 0;
    param_1[0xc73] = 0;
    param_1[0xc74] = 0;
    *(undefined4 *)(param_1 + 0xc75) = 0;
    param_1[0xc78] = 0;
    param_1[0xc79] = 0;
    param_1[0xc7b] = 0;
    param_1[0xc7c] = 0;
    *(undefined4 *)(param_1 + 0xc76) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x63f4) = 0;
    param_1[0xc7f] = 0;
    param_1[0xc82] = 0;
    param_1[0xc83] = 0;
    param_1[0xc89] = 0;
    param_1[0xc8a] = 0;
    param_1[0xc8c] = 0;
    param_1[0xc8d] = 0;
    *(undefined4 *)(param_1 + 0xc87) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x647c) = 0;
    param_1[0xc9f] = 0;
    param_1[0xca0] = 0;
    param_1[0xcaa] = 0;
    param_1[0xcab] = 0;
    param_1[0xcac] = 0;
    param_1[0xcad] = 0;
    param_1[0xcae] = 0;
    param_1[0xcaf] = 0;
    param_1[0xcb0] = 0;
    param_1[0xcb1] = 0;
    param_1[0xcb2] = 0;
    *(undefined4 *)(param_1 + 0xcb3) = 0;
    *(undefined4 *)(param_1 + 0xcb5) = 0;
    *(undefined4 *)((longlong)param_1 + 0x65ac) = 1;
    *(undefined4 *)(param_1 + 0xcbc) = 0;
    *(undefined4 *)((longlong)param_1 + 0x65e4) = 0xfe;
    param_1[0xcbe] = 0;
    param_1[0xc9e] = &PTR_LAB_140b6fae0;
    uVar20 = uRam0000000140c7845c;
    uVar19 = uRam0000000140c78458;
    uVar18 = uRam0000000140c78454;
    *(undefined4 *)(param_1 + 0xcc0) = _DAT_140c78450;
    *(undefined4 *)((longlong)param_1 + 0x6604) = uVar18;
    *(undefined4 *)(param_1 + 0xcc1) = uVar19;
    *(undefined4 *)((longlong)param_1 + 0x660c) = uVar20;
    *(undefined (*) [16])(param_1 + 0xcc2) = ZEXT816(0);
    *(undefined4 *)(param_1 + 0xcc4) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x6624) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xcc5) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x662c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xcc9) = 0xb;
    param_1[0xccd] = 0;
    param_1[0xcce] = 0;
    param_1[0xcd0] = 0;
    param_1[0xcd1] = 0;
    *(undefined4 *)(param_1 + 0xccb) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x669c) = 0;
    *(undefined4 *)(param_1 + 0xcd5) = 300;
    *(undefined4 *)((longlong)param_1 + 0x66ac) = 0xffffffff;
    puVar5 = (undefined *)FUN_14018b280(0x28);
    param_1[0xcd9] = puVar5;
    param_1[0xcda] = 0;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0xcd9] + 8) = 0;
    *(undefined8 *)(param_1[0xcd9] + 0x10) = param_1[0xcd9];
    *(undefined8 *)(param_1[0xcd9] + 0x18) = param_1[0xcd9];
    param_1[0xcde] = 0;
    param_1[0xcdd] = 0;
    puVar5 = (undefined *)FUN_14018b280(0x28);
    param_1[0xce1] = 0;
    param_1[0xce0] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0xce0] + 8) = 0;
    *(undefined8 *)(param_1[0xce0] + 0x10) = param_1[0xce0];
    *(undefined8 *)(param_1[0xce0] + 0x18) = param_1[0xce0];
    param_1[0xce8] = 0;
    param_1[0xce7] = 0;
    param_1[0xcec] = 0;
    param_1[0xcef] = 0;
    param_1[0xcf0] = 0;
    param_1[0xcf2] = 0;
    param_1[0xcf3] = 0;
    *(undefined4 *)(param_1 + 0xced) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x67ac) = 0;
    puVar5 = (undefined *)FUN_14018b280(0x30);
    param_1[0xcf9] = 0;
    param_1[0xcf8] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0xcf8] + 8) = 0;
    *(undefined8 *)(param_1[0xcf8] + 0x10) = param_1[0xcf8];
    *(undefined8 *)(param_1[0xcf8] + 0x18) = param_1[0xcf8];
    param_1[0xcfd] = 0;
    param_1[0xcfe] = 0;
    param_1[0xcff] = 0;
    param_1[0xd00] = 0;
    FUN_1403fb7c0();
    param_1[0xd01] = 0;
    param_1[0xd02] = 0;
    param_1[0xd03] = 0;
    FUN_1405dd5a0(param_1 + 0xd07);
    iVar10 = DAT_140c636a8;
    *(undefined4 *)((longlong)param_1 + 0x6bcc) = DAT_140c4aa08;
    *(undefined4 *)(param_1 + 0xd79) = 0;
    *(undefined4 *)((longlong)param_1 + 0x6bd4) = 0;
    *(undefined4 *)(param_1 + 0xd7b) = 51000;
    *(undefined4 *)((longlong)param_1 + 0x6bdc) = 0x33;
    *(undefined4 *)(param_1 + 0xd7c) = 1000;
    *(int *)(param_1 + 0xd7a) = iVar10 + -51000;
    param_1[0xd7e] = 0;
    param_1[0xd7d] = 0;
    param_1[0xd7f] = 0;
    param_1[0xd81] = 0;
    param_1[0xd80] = 0;
    param_1[0xd86] = 0;
    param_1[0xd87] = 0;
    param_1[0xd88] = 0;
    param_1[0xd89] = 0;
    param_1[0xd8a] = 0;
    param_1[0xd8b] = 0;
    *(undefined4 *)(param_1 + 0xd8c) = 0;
    param_1[0xd8d] = 0;
    param_1[0xd90] = 0;
    param_1[0xd91] = 0;
    param_1[0xd93] = 0;
    param_1[0xd94] = 0;
    *(undefined4 *)(param_1 + 0xd8e) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x6cb4) = 0;
    param_1[0xd82] = 0;
    param_1[0xd83] = 0;
    param_1[0xd84] = 0;
    param_1[0xd85] = 0;
    param_1[0xd97] = 0;
    param_1[0xd98] = 0;
    param_1[0xd99] = 0;
    param_1[0xd9a] = 0;
    param_1[0xd9b] = 0;
    param_1[0xd9c] = 0;
    *(undefined4 *)(param_1 + 0xd9f) = 300;
    *(undefined4 *)((longlong)param_1 + 0x6cfc) = 0xffffffff;
    param_1[0xd9d] = 0;
    *(undefined4 *)(param_1 + 0xd9e) = 0;
    *(undefined4 *)((longlong)param_1 + 0x6cf4) = 6;
    *(undefined4 *)(param_1 + 0xd9f) = 300;
    *(undefined4 *)((longlong)param_1 + 0x6cfc) = 0xffffffff;
    lVar13 = 9;
    *(undefined4 *)(param_1 + 0xda0) = 9;
    puVar5 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xda7] = 0;
    param_1[0xda6] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0xda6] + 8) = 0;
    *(undefined8 *)(param_1[0xda6] + 0x10) = param_1[0xda6];
    *(undefined8 *)(param_1[0xda6] + 0x18) = param_1[0xda6];
    FUN_1403fb600(param_1 + 0xda9);
    param_1[0xdae] = 0;
    puVar5 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xdb5] = 0;
    param_1[0xdb4] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0xdb4] + 8) = 0;
    *(undefined8 *)(param_1[0xdb4] + 0x10) = param_1[0xdb4];
    *(undefined8 *)(param_1[0xdb4] + 0x18) = param_1[0xdb4];
    puVar5 = (undefined *)FUN_14018b280(0x28,0);
    param_1[0xdb9] = 0;
    param_1[0xdb8] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0xdb8] + 8) = 0;
    *(undefined8 *)(param_1[0xdb8] + 0x10) = param_1[0xdb8];
    *(undefined8 *)(param_1[0xdb8] + 0x18) = param_1[0xdb8];
    param_1[0xdcf] = 0;
    param_1[0xdce] = 0;
    param_1[0xdd1] = 0;
    param_1[0xdd0] = 0;
    param_1[0xdd3] = 0;
    param_1[0xdd2] = 0;
    param_1[0xdd5] = 0;
    param_1[0xdd4] = 0;
    param_1[0xdd7] = 0;
    param_1[0xdd6] = 0;
    puVar5 = (undefined *)FUN_14018b280(0x28,0);
    param_1[0xdd9] = puVar5;
    param_1[0xdda] = 0;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0xdd9] + 8) = 0;
    *(undefined8 *)(param_1[0xdd9] + 0x10) = param_1[0xdd9];
    *(undefined8 *)(param_1[0xdd9] + 0x18) = param_1[0xdd9];
    puVar5 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xddf] = 0;
    param_1[0xdde] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0xdde] + 8) = 0;
    *(undefined8 *)(param_1[0xdde] + 0x10) = param_1[0xdde];
    *(undefined8 *)(param_1[0xdde] + 0x18) = param_1[0xdde];
    FUN_1403fb670(param_1 + 0xde1);
    param_1[0xde6] = 0;
    param_1[0xde7] = 0;
    param_1[0xde8] = 0;
    param_1[0xde9] = 0;
    param_1[0xdea] = 0;
    puVar5 = (undefined *)FUN_14018b280(0x38,0);
    param_1[0xded] = 0;
    param_1[0xdec] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0xdec] + 8) = 0;
    *(undefined8 *)(param_1[0xdec] + 0x10) = param_1[0xdec];
    *(undefined8 *)(param_1[0xdec] + 0x18) = param_1[0xdec];
    puVar5 = (undefined *)FUN_14018b280(0x38,0);
    param_1[0xdf1] = 0;
    param_1[0xdf0] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0xdf0] + 8) = 0;
    *(undefined8 *)(param_1[0xdf0] + 0x10) = param_1[0xdf0];
    *(undefined8 *)(param_1[0xdf0] + 0x18) = param_1[0xdf0];
    puVar5 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xdf6] = 0;
    param_1[0xdf5] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0xdf5] + 8) = 0;
    *(undefined8 *)(param_1[0xdf5] + 0x10) = param_1[0xdf5];
    *(undefined8 *)(param_1[0xdf5] + 0x18) = param_1[0xdf5];
    param_1[0xe08] = 0;
    param_1[0xe09] = 0;
    param_1[0xe0b] = 0;
    param_1[0xe0c] = 0;
    *(undefined4 *)(param_1 + 0xe06) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x7074) = 0;
    param_1[0xe11] = 0;
    *(undefined4 *)(param_1 + 0xe12) = 0;
    param_1[0xe13] = 0;
    *(undefined4 *)(param_1 + 0xe16) = 0;
    *(undefined4 *)((longlong)param_1 + 0x70b4) = 0xffffffff;
    param_1[0xe17] = 0;
    *(undefined4 *)(param_1 + 0xe18) = 0;
    *(undefined8 *)((longlong)param_1 + 0x70ec) = 0;
    *(undefined *)((longlong)param_1 + 0x70f4) = 0;
    *(undefined4 *)(param_1 + 0xe1f) = 300;
    *(undefined8 *)((longlong)param_1 + 0x70fc) = 0xffffffffffffffff;
    *(undefined4 *)((longlong)param_1 + 0x7104) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x710c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xe26) = 0;
    param_1[0xe27] = 0;
    param_1[0xe28] = 0;
    puVar5 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xe2d] = 0;
    param_1[0xe2c] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0xe2c] + 8) = 0;
    *(undefined8 *)(param_1[0xe2c] + 0x10) = param_1[0xe2c];
    *(undefined8 *)(param_1[0xe2c] + 0x18) = param_1[0xe2c];
    param_1[0xe2f] = 0;
    param_1[0xe34] = 0;
    param_1[0xe35] = 0;
    param_1[0xe36] = 0;
    param_1[0xe37] = 0;
    param_1[0xe38] = 0;
    param_1[0xe39] = 0;
    *(undefined4 *)(param_1 + 0xe3a) = 0;
    param_1[0xe47] = 0;
    puVar5 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xe50] = 0;
    param_1[0xe4f] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0xe4f] + 8) = 0;
    *(undefined8 *)(param_1[0xe4f] + 0x10) = param_1[0xe4f];
    *(undefined8 *)(param_1[0xe4f] + 0x18) = param_1[0xe4f];
    param_1[0xe54] = 0;
    param_1[0xe55] = 0;
    param_1[0xe56] = 0;
    param_1[0xe57] = 0;
    FUN_1403fb7c0();
    param_1[0xe5d] = 0;
    puVar5 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xe63] = 0;
    param_1[0xe62] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0xe62] + 8) = 0;
    *(undefined8 *)(param_1[0xe62] + 0x10) = param_1[0xe62];
    *(undefined8 *)(param_1[0xe62] + 0x18) = param_1[0xe62];
    param_1[0xe66] = 0;
    param_1[0xe67] = 0;
    param_1[0xe70] = 0;
    param_1[0xe71] = 0;
    param_1[0xe73] = 0;
    param_1[0xe74] = 0;
    *(undefined4 *)(param_1 + 0xe6e) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x73b4) = 0;
    param_1[0xe78] = 0;
    puVar5 = (undefined *)FUN_14018b280(0x28,0);
    param_1[0xe7c] = 0;
    param_1[0xe7b] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0xe7b] + 8) = 0;
    plVar1 = param_1 + 0xe81;
    *(undefined8 *)(param_1[0xe7b] + 0x10) = param_1[0xe7b];
    *(undefined8 *)(param_1[0xe7b] + 0x18) = param_1[0xe7b];
    iVar10 = DAT_140c636a8;
    *(int *)(param_1 + 0xe82) = DAT_140c636a8;
    *plVar1 = (longlong)&PTR_FUN_140b54e00;
    param_1[0xe84] = 0;
    *(undefined4 *)(param_1 + 0xe83) = 0;
    *(undefined *)((longlong)param_1 + 0x741c) = 0;
    *(int *)(param_1 + 0xe86) = iVar10;
    param_1[0xe85] = &PTR_FUN_140b54e00;
    param_1[0xe88] = 0;
    *(undefined4 *)(param_1 + 0xe87) = 0;
    *(undefined *)((longlong)param_1 + 0x743c) = 0;
    *(undefined4 *)(param_1 + 0xea0) = 0;
    param_1[0xea1] = 0;
    param_1[0xea5] = 0;
    param_1[0xea4] = 0;
    param_1[0xea7] = 0;
    param_1[0xea6] = 0;
    param_1[0xea8] = 0;
    param_1[0xeac] = 0;
    param_1[0xead] = 0;
    param_1[0xeae] = 0;
    param_1[0xeaf] = 0;
    FUN_1403fb7c0();
    param_1[0xec3] = 0;
    param_1[0xec4] = 0;
    param_1[0xec6] = 0;
    param_1[0xec7] = 0;
    *(undefined4 *)(param_1 + 0xec1) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x764c) = 0;
    param_1[0xecc] = 0;
    param_1[0xecd] = 0;
    param_1[0xecf] = 0;
    param_1[0xed0] = 0;
    *(undefined4 *)(param_1 + 0xeca) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x7694) = 0;
    param_1[0xed5] = 0;
    param_1[0xed6] = 0;
    param_1[0xed8] = 0;
    param_1[0xed9] = 0;
    *(undefined4 *)(param_1 + 0xed3) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x76dc) = 0;
    param_1[0xede] = 0;
    param_1[0xedf] = 0;
    param_1[0xee1] = 0;
    param_1[0xee2] = 0;
    *(undefined4 *)(param_1 + 0xedc) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x7724) = 0;
    param_1[0xee7] = 0;
    param_1[0xee8] = 0;
    param_1[0xeea] = 0;
    param_1[0xeeb] = 0;
    lVar7 = DAT_140c635f0;
    *(undefined4 *)(param_1 + 0xee5) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x776c) = 0;
    param_1[0xef0] = 0;
    param_1[0xef1] = 0;
    param_1[0xef3] = 0;
    param_1[0xef4] = 0;
    *(undefined4 *)(param_1 + 0xeee) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x77b4) = 0;
    param_1[0xef9] = 0;
    param_1[0xefa] = 0;
    param_1[0xefc] = 0;
    param_1[0xefd] = 0;
    *(undefined4 *)(param_1 + 0xef7) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x77fc) = 0;
    param_1[0xf02] = 0;
    param_1[0xf03] = 0;
    param_1[0xf05] = 0;
    param_1[0xf06] = 0;
    *(undefined4 *)(param_1 + 0xf00) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x7844) = 0;
    param_1[0xf0b] = 0;
    param_1[0xf0c] = 0;
    param_1[0xf0e] = 0;
    param_1[0xf0f] = 0;
    *(undefined4 *)(param_1 + 0xf09) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x788c) = 0;
    param_1[0xf14] = 0;
    param_1[0xf15] = 0;
    param_1[0xf17] = 0;
    param_1[0xf18] = 0;
    *(undefined4 *)(param_1 + 0xf12) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x78d4) = 0;
    param_1[0xf24] = lVar7 + 0x16b8;
    FUN_1401095e0(param_1 + 0xf26);
    FUN_14062d1c0(param_1 + 0xf2d);
    param_1[0xf43] = 0;
    FUN_1403fb6f0(param_1 + 0xf44);
    param_1[0xf4a] = 0;
    param_1[0xf49] = 0;
    param_1[0xf4c] = 0;
    param_1[0xf4b] = 0;
    param_1[0xf4e] = 0;
    param_1[0xf4d] = 0;
    param_1[0xf50] = 0;
    param_1[0xf4f] = 0;
    param_1[0xf52] = 0;
    param_1[0xf51] = 0;
    FUN_14062dc90();
    puVar5 = (undefined *)FUN_14018b280(0x30);
    param_1[0xf59] = 0;
    param_1[0xf58] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0xf58] + 8) = 0;
    *(undefined8 *)(param_1[0xf58] + 0x10) = param_1[0xf58];
    *(undefined8 *)(param_1[0xf58] + 0x18) = param_1[0xf58];
    param_1[0xf5d] = 0;
    param_1[0xf5e] = 0;
    param_1[0xf60] = 0;
    param_1[0xf61] = 0;
    *(undefined4 *)(param_1 + 0xf5b) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x7b1c) = 0;
    param_1[0xf64] = 0;
    puVar5 = (undefined *)FUN_14018b280(0x28);
    param_1[0xf66] = puVar5;
    param_1[0xf67] = 0;
    *puVar5 = 0;
    puVar11 = param_1 + 0xf76;
    iVar10 = 2;
    *(undefined8 *)(param_1[0xf66] + 8) = 0;
    puVar9 = param_1 + 0xf7a;
    *(undefined8 *)(param_1[0xf66] + 0x10) = param_1[0xf66];
    *(undefined8 *)(param_1[0xf66] + 0x18) = param_1[0xf66];
    do {
        puVar9[-1] = 0;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar4 = (undefined2 *)FUN_14018b280(0x10);
        puVar9[-1] = puVar4;
        *puVar9 = puVar4;
        puVar9[1] = puVar4 + 8;
        if (puVar4 != (undefined2 *)0x0) {
            *puVar4 = 0;
        }
        uVar18 = DAT_140c63664;
        *puVar11 = 0;
        *(undefined4 *)((longlong)puVar9 + -0x14) = 0x3f800000;
        *(undefined4 *)(puVar9 + -3) = uVar18;
        puVar9 = puVar9 + 6;
        puVar11 = puVar11 + 6;
        iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
    uVar16 = 0;
    puVar9 = (undefined8 *)0x0;
    param_1[0xf89] = 0;
    param_1[0xf8a] = 0;
    param_1[0xf8b] = 0;
    uVar6 = FUN_14018b280(0xb0);
    param_1[0xf8d] = uVar6;
    *(undefined8 *)uVar6 = uVar6;
    *(undefined8 *)(param_1[0xf8d] + 8) = param_1[0xf8d];
    uVar6 = FUN_14018b280(0xb0);
    param_1[0xf8f] = uVar6;
    *(undefined8 *)uVar6 = uVar6;
    *(undefined8 *)(param_1[0xf8f] + 8) = param_1[0xf8f];
    uVar6 = FUN_14018b280(0xb0);
    param_1[0xf91] = uVar6;
    *(undefined8 *)uVar6 = uVar6;
    *(undefined8 *)(param_1[0xf91] + 8) = param_1[0xf91];
    uVar6 = FUN_14018b280(0x80);
    param_1[0xf93] = uVar6;
    *(undefined8 *)uVar6 = uVar6;
    *(undefined8 *)(param_1[0xf93] + 8) = param_1[0xf93];
    uVar6 = FUN_14018b280(0x50);
    param_1[0xf95] = uVar6;
    *(undefined8 *)uVar6 = uVar6;
    *(undefined8 *)(param_1[0xf95] + 8) = param_1[0xf95];
    param_1[0xf97] = 0;
    param_1[0xf98] = 0;
    param_1[0xf99] = 0;
    puVar5 = (undefined *)FUN_14018b280(0x38);
    param_1[0xf9b] = puVar5;
    param_1[0xf9c] = 0;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0xf9b] + 8) = 0;
    *(undefined8 *)(param_1[0xf9b] + 0x10) = param_1[0xf9b];
    *(undefined8 *)(param_1[0xf9b] + 0x18) = param_1[0xf9b];
    puVar5 = (undefined *)FUN_14018b280(0x38);
    param_1[4000] = 0;
    param_1[3999] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[3999] + 8) = 0;
    *(undefined8 *)(param_1[3999] + 0x10) = param_1[3999];
    *(undefined8 *)(param_1[3999] + 0x18) = param_1[3999];
    puVar5 = (undefined *)FUN_14018b280(0x30);
    param_1[0xfa4] = 0;
    param_1[0xfa3] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0xfa3] + 8) = 0;
    *(undefined8 *)(param_1[0xfa3] + 0x10) = param_1[0xfa3];
    *(undefined8 *)(param_1[0xfa3] + 0x18) = param_1[0xfa3];
    puVar5 = (undefined *)FUN_14018b280(0x30);
    param_1[0xfa7] = puVar5;
    param_1[0xfa8] = 0;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0xfa7] + 8) = 0;
    *(undefined8 *)(param_1[0xfa7] + 0x10) = param_1[0xfa7];
    *(undefined8 *)(param_1[0xfa7] + 0x18) = param_1[0xfa7];
    puVar5 = (undefined *)FUN_14018b280(0x30);
    param_1[0xfac] = 0;
    param_1[0xfab] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0xfab] + 8) = 0;
    *(undefined8 *)(param_1[0xfab] + 0x10) = param_1[0xfab];
    *(undefined8 *)(param_1[0xfab] + 0x18) = param_1[0xfab];
    uVar6 = FUN_14018b280(0x80);
    param_1[0xfb4] = uVar6;
    *(undefined8 *)uVar6 = uVar6;
    *(undefined8 *)(param_1[0xfb4] + 8) = param_1[0xfb4];
    param_1[0xfb8] = 0;
    param_1[0xfb9] = 0;
    param_1[0xfba] = 0;
    param_1[0xfbb] = 0;
    param_1[0xfbc] = 0;
    param_1[0xfbf] = 0;
    param_1[0xfc0] = 0;
    param_1[0xfc2] = 0;
    param_1[0xfc3] = 0;
    *(undefined4 *)(param_1 + 0xfbd) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x7e2c) = 0;
    param_1[0xfc7] = 0;
    param_1[0xfc6] = 0;
    param_1[0xfc9] = 0;
    param_1[0xfc8] = 0;
    param_1[0xfcb] = 0;
    param_1[0xfca] = 0;
    puVar5 = (undefined *)FUN_14018b280(0x38);
    param_1[0xfcf] = 0;
    param_1[0xfce] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0xfce] + 8) = 0;
    *(undefined8 *)(param_1[0xfce] + 0x10) = param_1[0xfce];
    *(undefined8 *)(param_1[0xfce] + 0x18) = param_1[0xfce];
    puVar5 = (undefined *)FUN_14018b280(0x30);
    param_1[0xfd3] = 0;
    param_1[0xfd2] = puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1[0xfd2] + 8) = 0;
    *(undefined8 *)(param_1[0xfd2] + 0x10) = param_1[0xfd2];
    *(undefined8 *)(param_1[0xfd2] + 0x18) = param_1[0xfd2];
    FUN_140028fc0(param_1 + 0xfd5);
    param_1[0xfd9] = 0;
    FUN_1400b6000(param_1 + 0xfe6);
    param_1[0xfec] = 0;
    param_1[0xfeb] = 0;
    param_1[0xff0] = 0;
    param_1[0xff1] = 0;
    param_1[0xff2] = 0;
    param_1[0xff5] = 0;
    param_1[0xff6] = 0;
    param_1[0xff8] = 0;
    param_1[0xff9] = 0;
    *(undefined4 *)(param_1 + 0xff3) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x7fdc) = 0;
    param_1[0xffe] = 0;
    param_1[0xffd] = 0;
    lVar7 = FUN_140200220(0x947);
    uVar14 = uVar16;
    if (lVar7 != 0) {
        uVar14 = *(uint *)(lVar7 + 8);
    }
    lVar7 = FUN_140200220();
    if (lVar7 != 0) {
        uVar16 = *(uint *)(lVar7 + 4);
    }
    *(uint *)(param_1 + 0x1000) = uVar16;
    *(undefined4 *)((longlong)param_1 + 0x7ffc) = 0;
    iVar10 = DAT_140c636a8;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    DAT_140c65898 = param_1;
    *(uint *)(param_1 + 0xfff) = DAT_140c636a8 - uVar16;
    if (uVar14 == 0) {
        uVar14 = 1;
    }
    *(uint *)((longlong)param_1 + 0x8004) = uVar14;
    piVar3 = DAT_140c63750;
    uVar16 = uVar16 / uVar14;
    if (uVar16 == 0) {
        uVar16 = 1;
    }
    *(uint *)(param_1 + 0x1001) = uVar16;
    param_1[0x1003] = 0;
    param_1[0x1002] = 0;
    *(int *)((longlong)param_1 + 0x7b4c) = iVar10;
    *(undefined4 *)(param_1 + 0xf69) = 0;
    param_1[0xf25] = 0;
    param_1[0xe48] = 0;
    param_1[0xe49] = 0;
    param_1[0xe4a] = 0;
    param_1[0xdf8] = 0;
    param_1[0xdf9] = 0;
    param_1[0xdfa] = 0;
    param_1[0xdfb] = 0;
    param_1[0xdfc] = 0;
    *(undefined (*) [16])(param_1 + 0xe4c) = ZEXT816(0);
    *(int *)(param_1 + 0xe5a) = iVar10;
    param_1[0xe58] = 0;
    *(undefined4 *)(param_1 + 0xe59) = 1000;
    *(undefined4 *)((longlong)param_1 + 0x72cc) = 0x42accccd;
    *(undefined4 *)((longlong)param_1 + 0x72d4) = 0;
    *(undefined4 *)(param_1 + 0xe5e) = DAT_140c449e0;
    iVar10 = DAT_140c46480;
    if (*piVar3 < DAT_140c46480) {
        iVar10 = *piVar3;
    }
    *(undefined4 *)((longlong)param_1 + 0x72f4) =
            *(undefined4 *)(&DAT_140c46490 + (longlong)iVar10 * 4);
    iVar10 = DAT_140c464e0;
    if (*piVar3 < DAT_140c464e0) {
        iVar10 = *piVar3;
    }
    *(undefined4 *)(param_1 + 0xe5f) = *(undefined4 *)(&DAT_140c464f0 + (longlong)iVar10 * 4);
    iVar10 = DAT_140c46540;
    if (*piVar3 < DAT_140c46540) {
        iVar10 = *piVar3;
    }
    *(undefined4 *)((longlong)param_1 + 0x72fc) =
            *(undefined4 *)(&DAT_140c46550 + (longlong)iVar10 * 4);
    iVar10 = DAT_140c465d0;
    if (*piVar3 < DAT_140c465d0) {
        iVar10 = *piVar3;
    }
    uVar2 = *(undefined4 *)(&DAT_140c465e0 + (longlong)iVar10 * 4);
    param_1[0xf] = 0;
    *(undefined4 *)(param_1 + 0xe60) = uVar2;
    FUN_1403b55e0(param_1);
    *(undefined4 *)((longlong)param_1 + 0x55c) = 0;
    *(undefined4 *)(param_1 + 0x148) = 0xffffffff;
    FUN_1407e4830(param_1 + 0x2bf,0,0x78);
    *(undefined8 *)((longlong)param_1 + 0x6dec) = 0;
    param_1[0xdcc] = 0;
    *(undefined4 *)(param_1 + 0xdcd) = 0;
    FUN_1407e4830((longlong)param_1 + 0x6df4,0,0x6c);
    param_1[0xc92] = 0;
    param_1[0xc91] = 0;
    *(undefined4 *)(param_1 + 0xc90) = 0;
    *(undefined4 *)((longlong)param_1 + 0x64c4) = 0;
    *(undefined8 *)((longlong)param_1 + 0x64cc) = 0;
    *(undefined4 *)((longlong)param_1 + 0x64d4) = DAT_140c77760;
    *(undefined4 *)(param_1 + 0xc9b) = DAT_140c77764;
    *(undefined4 *)(param_1 + 0xc9c) = 0;
    *(undefined4 *)(param_1 + 0xcc8) = 0;
    *(undefined4 *)((longlong)param_1 + 0x6644) = 0x65;
    *(undefined4 *)(param_1 + 0x2cf) = 0;
    param_1[0x2d0] = 0;
    param_1[0x2ce] = 0;
    *(undefined4 *)((longlong)param_1 + 0x1694) = 0;
    param_1[0xd04] = 0;
    param_1[0xe15] = 0;
    param_1[0xd05] = 0;
    *(undefined4 *)(param_1 + 0xd06) = 0;
    *(undefined4 *)(param_1 + 0x370) = 0;
    *(undefined4 *)(param_1 + 0xdbd) = 0;
    *(undefined4 *)(param_1 + 0xc65) = 0;
    param_1[0xddc] = 0;
    *(undefined4 *)(param_1 + 0x368) = 0;
    param_1[0x369] = 0;
    param_1[0x36a] = 0;
    param_1[0x36b] = 0;
    param_1[0x36c] = 0;
    FUN_140008410(param_1 + 0x372);
    param_1[0x37e] = 0;
    *(undefined4 *)(param_1 + 0xab) = 1;
    param_1[0xdb2] = 0;
    *(undefined4 *)(param_1 + 0xe30) = 0;
    *(undefined4 *)(param_1 + 0xdbb) = 0;
    *(undefined4 *)((longlong)param_1 + 0x6ddc) = 0xffffffff;
    param_1[0xdbc] = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)((longlong)param_1 + 0x674c) = 1;
    param_1[0xcea] = 1;
    *(undefined4 *)(param_1 + 0xceb) = 0;
    param_1[0xe14] = 0;
    *(undefined4 *)(param_1 + 0xe2a) = 0;
    FUN_1403a1510(param_1);
    FUN_1405b3270();
    param_1[0xe7e] = 0;
    param_1[0xf6a] = 0;
    param_1[0xf6b] = 0;
    param_1[0xf6c] = 0;
    param_1[0xf6d] = 0;
    param_1[0xf6e] = 0;
    param_1[0xf6f] = 0;
    *(undefined *)(param_1 + 0xe65) = 0;
    *(undefined4 *)((longlong)param_1 + 0x732c) = 0;
    param_1[0xf70] = 0;
    param_1[0xf71] = 0;
    param_1[0xf72] = 0;
    param_1[0xf73] = 0;
    param_1[0xc9d] = 0;
    param_1[0xcc6] = 0;
    param_1[0xcc7] = 0;
    param_1[0xe68] = 0;
    param_1[0xe69] = 0;
    param_1[0xe6a] = 0;
    param_1[0xe6c] = 0;
    param_1[0xe6d] = 0;
    param_1[0xe6b] = 0;
    *(undefined4 *)(param_1 + 0xeb0) = 0;
    param_1[0xeb1] = 0;
    *(undefined4 *)(param_1 + 0xeba) = 0;
    param_1[0xe4b] = 0;
    param_1[0xe0f] = 0;
    param_1[0xe10] = 0;
    param_1[0xc80] = 0;
    *(undefined4 *)(param_1 + 0xc81) = 0;
    *(undefined4 *)(param_1 + 0xc84) = 0;
    *(undefined4 *)((longlong)param_1 + 0x6424) = 2;
    *(undefined4 *)((longlong)param_1 + 0x642c) = 0;
    param_1[0xce3] = 0;
    *(undefined4 *)(param_1 + 0xf74) = 0;
    FUN_1403c2c10(param_1);
    FUN_1403c2ca0(param_1);
    *(undefined4 *)(param_1 + 0xdf3) = 0;
    *(undefined (*) [16])(param_1 + 0xeb6) =
            CONCAT412(uVar21,CONCAT48(uVar20,CONCAT44(uVar19,uVar18)));
    *(undefined (*) [16])(param_1 + 0xeb8) =
            CONCAT412(uVar21,CONCAT48(uVar20,CONCAT44(uVar19,uVar18)));
    param_1[0xf2c] = 0;
    param_1[0xdf8] = 0;
    param_1[0xdf9] = 0;
    param_1[0xdfa] = 0;
    param_1[0xdfb] = 0;
    param_1[0xdfc] = 0;
    *(undefined4 *)((longlong)param_1 + 0x72cc) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xe59) = 0x15180;
    *(undefined8 *)((longlong)param_1 + 0x6724) = 0;
    *(undefined4 *)(param_1 + 0xce4) = 0;
    *(undefined4 *)(param_1 + 0xce9) = 0;
    *(undefined4 *)(param_1 + 0xf53) = 0;
    param_1[0xf54] = 0;
    param_1[0xf55] = 0;
    param_1[0xe9d] = 0;
    param_1[0xe9e] = 0;
    *(undefined4 *)(param_1 + 0xe9f) = 0;
    param_1[0xea0] = (ulonglong)uStack84 << 0x20;
    param_1[0xea1] = 0;
    param_1[0xea2] = 0;
    *(undefined4 *)(param_1 + 0xcdc) = 0;
    *(undefined4 *)((longlong)param_1 + 0x66e4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xe45) = 0;
    *(undefined4 *)((longlong)param_1 + 0x722c) = 1;
    *(undefined4 *)(param_1 + 0xcf6) = 0;
    param_1[0xe5b] = 0;
    param_1[0xe5c] = 0;
    param_1[0xe31] = 0;
    *(undefined4 *)(param_1 + 0xe32) = 0;
    param_1[0xfae] = 0;
    param_1[0xfaf] = 0;
    if (DAT_140c7dc90 == 0) {
        lVar7 = FUN_14018b280(0x28,0);
        if (lVar7 == 0) {
            DAT_140c7dc90 = 0;
        }
        else {
            DAT_140c7dc90 = FUN_14077c430(lVar7);
        }
    }
    FUN_140558c90(&DAT_140c7dcd0,0xb);
    piVar3 = DAT_140c63750;
    param_1[0xe7f] = 0;
    fVar17 = 0.0;
    *(undefined4 *)(param_1 + 0xfb0) = 0;
    *(undefined8 *)((longlong)param_1 + 0x75dc) = 0;
    *(undefined8 *)((longlong)param_1 + 0x75e4) = 0;
    *(undefined8 *)((longlong)param_1 + 0x75ec) = 0;
    *(undefined8 *)((longlong)param_1 + 0x75f4) = 0;
    *(undefined8 *)((longlong)param_1 + 0x75fc) = 0;
    param_1[0xf1b] = 0;
    param_1[0xf1c] = 0;
    param_1[0xf1d] = 0;
    param_1[0xf1e] = 0;
    *(undefined4 *)(param_1 + 0xf1f) = 0;
    local_res8[0] = 0;
    iVar10 = DAT_140c450f0;
    if (*piVar3 < DAT_140c450f0) {
        iVar10 = *piVar3;
    }
    *(uint *)(param_1 + 0xf23) = (uint)(byte)(&DAT_140c45100)[iVar10];
    *(undefined8 *)((longlong)param_1 + 0x78fc) = 0;
    *(undefined8 *)((longlong)param_1 + 0x7904) = 0;
    *(undefined8 *)((longlong)param_1 + 0x790c) = 0;
    *(undefined4 *)(param_1 + 0xeb2) = 3;
    *(undefined4 *)(param_1 + 0x293) = 9;
    *(undefined4 *)((longlong)param_1 + 0x149c) = 9;
    param_1[0x29d] = 0;
    *(undefined4 *)(param_1 + 0xe80) = 0;
    *(undefined4 *)(param_1 + 0xe89) = 0;
    *(undefined4 *)(param_1 + 0xe8a) = 0;
    *(undefined4 *)(param_1 + 0xe8f) = 500;
    *(undefined4 *)((longlong)param_1 + 0x747c) = 500;
    *(undefined4 *)(param_1 + 0xe90) = 500;
    (**(code **)(*plVar1 + 8))(plVar1,local_res8);
    iVar10 = DAT_140c636a8;
    if ((fVar17 != *(float *)(param_1 + 0xe84)) || (*(float *)((longlong)param_1 + 0x7424) != 0.0)) {
        param_1[0xe84] = 0;
        *(undefined4 *)(param_1 + 0xe83) = 0;
        *(int *)(param_1 + 0xe82) = iVar10;
    }
    param_1[0xe91] = 0;
    param_1[0xe92] = 0;
    puVar11 = param_1 + 0x289;
    *(undefined4 *)(param_1 + 0xe93) = 0;
    puVar12 = param_1 + 0x158;
    do {
        lVar7 = 6;
        puVar8 = puVar12;
        do {
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
            puVar8[3] = 0;
            puVar8[4] = 0;
            puVar8[5] = 0;
            puVar8[6] = 0;
            puVar8[7] = 0;
            lVar7 = lVar7 + -1;
            puVar8 = puVar8 + 8;
        } while (lVar7 != 0);
        *(undefined4 *)puVar11 = 0;
        puVar11 = (undefined8 *)((longlong)puVar11 + 4);
        puVar12 = puVar12 + 0x30;
        lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    puVar11 = param_1 + 0x218;
    puVar12 = param_1 + 0x21d;
    do {
        *(undefined4 *)puVar11 = 0;
        puVar11 = (undefined8 *)((longlong)puVar11 + 4);
        puVar8 = puVar12;
        for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
        }
        lVar13 = lVar13 + -1;
        puVar12 = puVar12 + 0xc;
    } while (lVar13 != 0);
    *(undefined8 *)((longlong)param_1 + 0x749c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x74a4) = 0;
    *(undefined (*) [16])(param_1 + 0xe98) = ZEXT816(0);
    param_1[0xe9a] = 0;
    param_1[0xe97] = 0;
    param_1[0xe96] = 0;
    param_1[0xe77] = 0;
    param_1[0xf35] = 0;
    param_1[0xf36] = 0;
    param_1[0xf3b] = 0xb0;
    param_1[0xf3d] = 0;
    *(undefined4 *)(param_1 + 0xf3e) = 0;
    *(undefined4 *)(param_1 + 0xf37) = 0;
    *(undefined4 *)(param_1 + 0xf34) = 0;
    *(undefined4 *)((longlong)param_1 + 0x79d4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xf3a) = 0;
    *(undefined (*) [16])(param_1 + 0xf38) =
            CONCAT412(uVar21,CONCAT48(uVar20,CONCAT44(uVar19,uVar18)));
    param_1[0xf3c] = 0;
    lVar15 = FUN_14018b280(0x318,0);
    puVar11 = puVar9;
    if (lVar15 != 0) {
        puVar11 = (undefined8 *)FUN_1405cbae0(lVar15);
    }
    param_1[0xe33] = puVar11;
    lVar15 = FUN_14018b280(0x80,0);
    puVar11 = puVar9;
    if (lVar15 != 0) {
        puVar11 = (undefined8 *)FUN_1405fde20(lVar15);
    }
    param_1[0xfb2] = puVar11;
    param_1[0xc6c] = 0;
    *(undefined4 *)(param_1 + 0xc6a) = 0;
    *(undefined4 *)(param_1 + 0xc6f) = 0;
    *(undefined4 *)((longlong)param_1 + 0x637c) = 1;
    *(undefined4 *)(param_1 + 0xc70) = 2;
    *(undefined4 *)((longlong)param_1 + 0x6384) = 3;
    *(undefined4 *)(param_1 + 0xc93) = DAT_140c45dc8;
    *(undefined4 *)((longlong)param_1 + 0x649c) = DAT_140c45dcc;
    puVar11 = (undefined8 *)FUN_14018b280(0x90,0);
    if (puVar11 != (undefined8 *)0x0) {
        puVar11[3] = 0;
        puVar11[2] = 0;
        puVar11[5] = 0;
        puVar11[4] = 0;
        puVar11[7] = 0;
        puVar11[8] = 0;
        puVar11[9] = 0;
        puVar11[10] = 0;
        *(undefined4 *)(puVar11 + 6) = 0;
        *(undefined4 *)(puVar11 + 0x10) = 0x80000000;
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar9 = puVar11;
    }
    param_1[0xfcc] = puVar9;
    *(undefined4 *)(param_1 + 0xfb5) = 0;
    *(undefined4 *)(param_1 + 0xea9) = 0x12;
    param_1[0xfed] = 0;
    *(undefined4 *)(param_1 + 0xfb1) = 0;
    param_1[0xfee] = 0;
    *(undefined *)((longlong)param_1 + 0x1b6c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x1b84) = 0;
    *(undefined4 *)(param_1 + 0xfef) = 0;
    FUN_1400167a0();
    *(undefined4 *)(param_1 + 0x2be) = 0x7f7fffff;
    *(undefined (*) [16])(param_1 + 0xfdc) =
            CONCAT412(uVar21,CONCAT48(uVar20,CONCAT44(uVar19,uVar18)));
    param_1[0xfde] = 0;
    param_1[0xfdf] = 0;
    *(undefined (*) [16])(param_1 + 0xfe0) =
            CONCAT412(uVar21,CONCAT48(uVar20,CONCAT44(uVar19,uVar18)));
    param_1[0xfe2] = 0;
    param_1[0xfe3] = 0;
    param_1[0xfe4] = 10;
    *(undefined4 *)(param_1 + 0xfe5) = 0;
    param_1[0xffc] = 0;
    *(undefined4 *)(param_1 + 0xc85) = 0;
    return param_1;
}



undefined8 FUN_1403e3310(undefined8 param_1,ulonglong param_2)

{
    FUN_1403e3350();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



// WARNING: Removing unreachable block (ram,0x0001403e3a3e)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1403e3350(undefined8 *param_1)

{
    uint *puVar1;
    longlong lVar2;
    code *pcVar3;
    int *piVar4;
    uint uVar5;
    int iVar6;
    int iVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    longlong *plVar11;
    ulonglong uVar12;
    longlong **pplVar13;
    undefined8 *puVar14;
    ulonglong uVar15;
    longlong lVar16;
    undefined *puVar17;
    longlong lVar19;
    float fVar20;
    int local_res8;
    int local_res10;
    undefined8 local_res20;
    longlong local_80;
    longlong local_78;
    longlong local_70;
    undefined8 local_68 [5];
    undefined *puVar18;

    *param_1 = &PTR_LAB_140b66880;
    param_1[9] = &PTR_FUN_140b66900;
    lVar19 = 5;
    local_res20 = 0x141df1b68;
    local_res8 = 2;
    FUN_1401a3130(5,2,&local_res20,param_1);
    if ((longlong *)param_1[0xffc] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xffc] + 8))();
        param_1[0xffc] = 0;
    }
    FUN_140195d70(param_1 + 0x149);
    lVar10 = param_1[0xc68];
    while (lVar10 != 0) {
        lVar10 = param_1[0xc68];
        if (lVar10 != 0) {
            FUN_14054a080(lVar10);
            FUN_14018b900(lVar10);
        }
        lVar10 = param_1[0xc68];
    }
    lVar10 = param_1[0xc69];
    while (lVar10 != 0) {
        lVar10 = param_1[0xc69];
        if (lVar10 != 0) {
            FUN_14054a080(lVar10);
            FUN_14018b900(lVar10);
        }
        lVar10 = param_1[0xc69];
    }
    lVar10 = param_1[0xe33];
    if (lVar10 != 0) {
        FUN_1405cbd30(lVar10);
        FUN_14018b900(lVar10);
    }
    param_1[0xe33] = 0;
    FUN_1405a7700(param_1 + 0xda9);
    FUN_140019490(param_1 + 0xda9);
    FUN_14062f960();
    piVar4 = DAT_140c65920;
    local_res10 = 1;
    if (*DAT_140c65920 != 0) {
        *DAT_140c65920 = 0;
        lVar10 = *(longlong *)(piVar4 + 2);
        while (lVar10 != 0) {
            if (*(undefined8 **)(piVar4 + 2) != (undefined8 *)0x0) {
                (**(code **)**(undefined8 **)(piVar4 + 2))();
            }
            lVar10 = *(longlong *)(piVar4 + 2);
        }
    }
    FUN_1405543f0();
    FUN_14043af30();
    if ((longlong *)param_1[0xe27] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xe27] + 8))();
        param_1[0xe27] = 0;
    }
    if ((longlong *)param_1[0xe28] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xe28] + 8))();
        param_1[0xe28] = 0;
    }
    FUN_1404b4ae0(DAT_140c659f0);
    FUN_140582460();
    plVar11 = (longlong *)param_1[0xe49];
    if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x148))(plVar11,0,0);
        (**(code **)(*(longlong *)param_1[0xe49] + 0x160))((longlong *)param_1[0xe49],0,0);
    }
    FUN_1403ba4a0(param_1);
    FUN_1403c2230(param_1);
    if (DAT_140c65b78 != 0) {
        FUN_140575bf0();
        DAT_140c65b78 = 0;
    }
    lVar10 = DAT_140c65bb0;
    if (DAT_140c65bb0 != 0) {
        FUN_140600650(DAT_140c65bb0);
        FUN_14018b900(lVar10);
        DAT_140c65bb0 = 0;
    }
    FUN_14048b980();
    FUN_140724100();
    lVar10 = DAT_140c65c28;
    if (DAT_140c65c28 != 0) {
        lVar16 = *(longlong *)(*(longlong *)(DAT_140c65c28 + 0x70) + 0x10);
        if (lVar16 != *(longlong *)(DAT_140c65c28 + 0x70)) {
            do {
                lVar9 = *(longlong *)(lVar16 + 0x18);
                if (lVar9 == 0) {
                    lVar8 = *(longlong *)(lVar16 + 8);
                    lVar9 = lVar16;
                    if (lVar16 == *(longlong *)(lVar8 + 0x18)) {
                        do {
                            lVar9 = lVar8;
                            lVar8 = *(longlong *)(lVar9 + 8);
                        } while (lVar9 == *(longlong *)(lVar8 + 0x18));
                    }
                    if (*(longlong *)(lVar9 + 0x18) != lVar8) {
                        lVar9 = lVar8;
                    }
                }
                else {
                    for (lVar8 = *(longlong *)(lVar9 + 0x10); lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x10))
                    {
                        lVar9 = lVar8;
                    }
                }
                puVar14 = *(undefined8 **)(lVar16 + 0x28);
                if (puVar14 != (undefined8 *)0x0) {
                    (**(code **)*puVar14)(puVar14,1);
                }
                FUN_140645210(lVar10 + 0x68);
                lVar16 = lVar9;
            } while (lVar9 != *(longlong *)(lVar10 + 0x70));
        }
        lVar16 = DAT_140c65c28;
        pcVar3 = DAT_140c63838;
        *(undefined8 *)(lVar10 + 0x108) = 0;
        if (pcVar3 == (code *)0x0) {
            if (_DAT_140c64944 == 0) {
                iVar6 = FUN_1401e9240();
                if (iVar6 < 0) {
                    uVar5 = 0;
                }
                else {
                    uVar5 = (**(code **)(*DAT_140c64218 + 0x28))();
                }
            }
            else {
                uVar5 = 0;
            }
        }
        else {
            uVar5 = (*pcVar3)(&PTR_u_Achievement_140a69138);
        }
        lVar10 = 0;
        if (uVar5 != 0) {
            uVar15 = (ulonglong)uVar5;
            fVar20 = 0.0;
            do {
                puVar1 = *(uint **)(lVar10 + *(longlong *)(lVar16 + 0x18));
                if ((float)puVar1[8] <= fVar20) {
                    lVar9 = *(longlong *)(lVar16 + 0x70);
                    uVar5 = *puVar1;
                    lVar2 = lVar9;
                    lVar8 = *(longlong *)(lVar9 + 8);
                    while (lVar8 != 0) {
                        if (*(uint *)(lVar8 + 0x20) < uVar5) {
                            lVar8 = *(longlong *)(lVar8 + 0x18);
                        }
                        else {
                            lVar2 = lVar8;
                            lVar8 = *(longlong *)(lVar8 + 0x10);
                        }
                    }
                    if ((lVar2 == lVar9) || (uVar5 < *(uint *)(lVar2 + 0x20))) {
                        local_78 = lVar9;
                        plVar11 = &local_78;
                    }
                    else {
                        local_80 = lVar2;
                        plVar11 = &local_80;
                    }
                    if ((*plVar11 == lVar9) || (*(longlong *)(*plVar11 + 0x28) == 0)) {
                        FUN_140643f00(lVar16,uVar5,0,0,0,1,0);
                    }
                }
                lVar10 = lVar10 + 0x30;
                uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
        }
    }
    uVar15 = 0;
    if (DAT_140c65948 != 0) {
        FUN_14048d060();
    }
    if (DAT_140c65970 != 0) {
        FUN_14056e380();
    }
    FUN_1403a8770(param_1);
    if (DAT_140c65a20 != 0) {
        FUN_1404ced10();
    }
    if (DAT_140c65a38 != 0) {
        FUN_1404d1570();
    }
    if (DAT_140c65a28 != 0) {
        FUN_1404cfae0();
    }
    FUN_1405f4df0();
    FUN_14049a790();
    lVar10 = *(longlong *)(DAT_140c658d8 + 0x60);
    if (((lVar10 != 0) && (*(longlong **)(lVar10 + 0x38) != (longlong *)0x0)) &&
        (iVar6 = (**(code **)(**(longlong **)(lVar10 + 0x38) + 0x50))(), iVar6 != 0)) {
        (**(code **)(**(longlong **)(lVar10 + 0x38) + 0x48))(*(longlong **)(lVar10 + 0x38),100,2);
    }
    lVar10 = *(longlong *)(DAT_140c659b0 + 0xe8);
    if (((lVar10 != 0) && (*(longlong **)(lVar10 + 0x38) != (longlong *)0x0)) &&
        (iVar6 = (**(code **)(**(longlong **)(lVar10 + 0x38) + 0x50))(), iVar6 != 0)) {
        (**(code **)(**(longlong **)(lVar10 + 0x38) + 0x48))(*(longlong **)(lVar10 + 0x38),100,2);
    }
    FUN_140008410(DAT_140c65930 + 0x100);
    if (DAT_140c65b90 != (undefined8 *)0x0) {
        (**(code **)*DAT_140c65b90)(DAT_140c65b90,1);
    }
    lVar10 = param_1[0xce3];
    DAT_140c65b90 = (undefined8 *)0x0;
    if (lVar10 != 0) {
        lVar16 = *(longlong *)(lVar10 + 0x18);
        if (lVar16 != 0) {
            (**(code **)(*(longlong *)(lVar16 + -0x10) + 8))(lVar16 + -0x10);
        }
        FUN_14018b900(lVar10,0);
    }
    param_1[0xce3] = 0;
    FUN_140613930(param_1);
    FUN_1405a4ad0();
    if (DAT_140c65c18 != 0) {
        FUN_140630340();
        lVar10 = DAT_140c65c18;
        if (DAT_140c65c18 != 0) {
            FUN_140630100(DAT_140c65c18);
            FUN_14018b900(lVar10,0);
        }
        DAT_140c65c18 = 0;
    }
    if (DAT_140c658a0 != 0) {
        FUN_1404056c0();
        lVar10 = DAT_140c658a0;
        if (DAT_140c658a0 != 0) {
            FUN_140402cf0(DAT_140c658a0);
            FUN_14018b900(lVar10,0);
        }
        DAT_140c658a0 = 0;
    }
    if (DAT_140c65b68 != (undefined8 *)0x0) {
        (**(code **)*DAT_140c65b68)(DAT_140c65b68,1);
    }
    lVar10 = 4;
    DAT_140c65b68 = (undefined8 *)0x0;
    pplVar13 = (longlong **)(param_1 + 0x158);
    iVar6 = 4;
    do {
        lVar16 = 0x30;
        do {
            if ((*pplVar13 != (longlong *)0x0) && (iVar7 = (**(code **)(**pplVar13 + 0x10))(), iVar7 == 0)
                    ) {
                plVar11 = *pplVar13;
                if (plVar11 != (longlong *)0x0) {
                    (**(code **)*plVar11)(plVar11,1);
                }
                *pplVar13 = (longlong *)0x0;
            }
            pplVar13 = pplVar13 + 1;
            lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    lVar10 = param_1[0xe68];
    if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x9b8) != 0)) {
        if (*(longlong **)(lVar10 + 0x9b8) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(lVar10 + 0x9b8) + 8))();
            *(undefined8 *)(lVar10 + 0x9b8) = 0;
        }
        *(undefined8 *)(lVar10 + 0x9b8) = 0;
    }
    plVar11 = &DAT_140c89d80;
    lVar10 = 0x24;
    do {
        puVar14 = (undefined8 *)*plVar11;
        if (puVar14 != (undefined8 *)0x0) {
            (**(code **)*puVar14)(puVar14,1);
        }
        *plVar11 = 0;
        plVar11 = plVar11 + 1;
        lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    if ((longlong *)param_1[0x37e] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x37e] + 8))();
        param_1[0x37e] = 0;
    }
    lVar10 = param_1[0xe2f];
    while (lVar10 != 0) {
        lVar10 = param_1[0xe2f];
        if (lVar10 != 0) {
            if (*(undefined8 **)(lVar10 + 0x60) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar10 + 0x60) = *(undefined8 *)(lVar10 + 0x68);
            }
            if (*(longlong *)(lVar10 + 0x68) != 0) {
                *(undefined8 *)(*(longlong *)(lVar10 + 0x68) + 0x60) = *(undefined8 *)(lVar10 + 0x60);
            }
            *(undefined8 *)(lVar10 + 0x60) = 0;
            *(undefined8 *)(lVar10 + 0x68) = 0;
            if (*(longlong *)(lVar10 + 0x68) != 0) {
                *(undefined8 *)(*(longlong *)(lVar10 + 0x68) + 0x60) = *(undefined8 *)(lVar10 + 0x60);
            }
            *(undefined8 *)(lVar10 + 0x60) = 0;
            *(undefined8 *)(lVar10 + 0x68) = 0;
            FUN_140195d70(lVar10 + 0x18);
            *(undefined4 *)(lVar10 + 0x18) = 0;
            if (*(undefined8 **)(lVar10 + 0x28) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar10 + 0x28) = *(undefined8 *)(lVar10 + 0x30);
            }
            if (*(undefined8 **)(lVar10 + 0x30) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar10 + 0x30) = *(undefined8 *)(lVar10 + 0x28);
            }
            *(undefined8 *)(lVar10 + 0x28) = 0;
            *(undefined8 *)(lVar10 + 0x30) = 0;
            FUN_14018b900(lVar10,0);
        }
        lVar10 = param_1[0xe2f];
    }
    lVar10 = param_1[0xf64];
    while (lVar10 != 0) {
        puVar14 = (undefined8 *)param_1[0xf64];
        if (puVar14 != (undefined8 *)0x0) {
            (**(code **)*puVar14)(puVar14,1);
        }
        lVar10 = param_1[0xf64];
    }
    lVar10 = param_1[0xe0f];
    if (lVar10 != 0) {
        if (*(longlong *)(lVar10 + 0x20) != 0) {
            FUN_140195d70(lVar10 + 0x10);
        }
        FUN_140195d70(lVar10 + 0x10);
        *(undefined4 *)(lVar10 + 0x10) = 0;
        if (*(undefined8 **)(lVar10 + 0x20) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar10 + 0x20) = *(undefined8 *)(lVar10 + 0x28);
        }
        if (*(undefined8 **)(lVar10 + 0x28) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar10 + 0x28) = *(undefined8 *)(lVar10 + 0x20);
        }
        *(undefined8 *)(lVar10 + 0x20) = 0;
        *(undefined8 *)(lVar10 + 0x28) = 0;
        FUN_14018b900(lVar10,0);
    }
    lVar10 = param_1[0xe10];
    param_1[0xe0f] = 0;
    if (lVar10 != 0) {
        if (*(longlong *)(lVar10 + 0x20) != 0) {
            FUN_140195d70(lVar10 + 0x10);
        }
        FUN_140195d70(lVar10 + 0x10);
        *(undefined4 *)(lVar10 + 0x10) = 0;
        if (*(undefined8 **)(lVar10 + 0x20) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar10 + 0x20) = *(undefined8 *)(lVar10 + 0x28);
        }
        if (*(undefined8 **)(lVar10 + 0x28) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar10 + 0x28) = *(undefined8 *)(lVar10 + 0x20);
        }
        *(undefined8 *)(lVar10 + 0x20) = 0;
        *(undefined8 *)(lVar10 + 0x28) = 0;
        FUN_14018b900(lVar10,0);
    }
    param_1[0xe10] = 0;
    uVar12 = uVar15;
    if (param_1[0x153] != 0) {
        do {
            plVar11 = *(longlong **)(param_1[0x152] + uVar12 * 8);
            if (plVar11 != (longlong *)0x0) {
                (**(code **)(*plVar11 + 0x10))(plVar11,1);
            }
            uVar12 = uVar12 + 1;
        } while (uVar12 < (ulonglong)param_1[0x153]);
    }
    pplVar13 = (longlong **)(param_1 + 0x21d);
    lVar10 = 9;
    do {
        lVar16 = 0xc;
        do {
            if (((*pplVar13 != (longlong *)0x0) &&
                 (iVar7 = (**(code **)(**pplVar13 + 0x10))(), iVar7 == 0)) &&
                (plVar11 = *pplVar13, plVar11 != (longlong *)0x0)) {
                (**(code **)*plVar11)(plVar11,1);
            }
            pplVar13 = pplVar13 + 1;
            lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    FUN_1403dec70(param_1);
    param_1[0xce8] = 0;
    FUN_1403a0c50(param_1);
    if ((longlong *)param_1[0xd05] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xd05] + 8))();
        param_1[0xd05] = 0;
    }
    lVar10 = param_1[0xde6];
    while (lVar10 != 0) {
        FUN_1403d9590(param_1,param_1[0xde6]);
        lVar10 = param_1[0xde6];
    }
    uVar12 = uVar15;
    if (*(int *)((longlong)param_1 + 0xa4) != 0) {
        do {
            plVar11 = *(longlong **)(param_1[0x16] + uVar12 * 8);
            if (plVar11 != (longlong *)0x0) {
                (**(code **)(*plVar11 + 0x58))();
            }
            lVar10 = param_1[0x16];
            plVar11 = *(longlong **)(lVar10 + uVar12 * 8);
            if (plVar11 != (longlong *)0x0) {
                (**(code **)(*plVar11 + 8))();
                *(undefined8 *)(lVar10 + uVar12 * 8) = 0;
            }
            uVar5 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)((longlong)param_1 + 0xa4));
    }
    FUN_14018b900(param_1[0x16],0);
    uVar12 = uVar15;
    if (*(int *)((longlong)param_1 + 0xbc) != 0) {
        do {
            plVar11 = *(longlong **)(param_1[0x19] + uVar12 * 8);
            if (plVar11 != (longlong *)0x0) {
                (**(code **)(*plVar11 + 0x58))();
            }
            lVar10 = param_1[0x19];
            plVar11 = *(longlong **)(lVar10 + uVar12 * 8);
            if (plVar11 != (longlong *)0x0) {
                (**(code **)(*plVar11 + 8))();
                *(undefined8 *)(lVar10 + uVar12 * 8) = 0;
            }
            uVar5 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)((longlong)param_1 + 0xbc));
    }
    FUN_14018b900(param_1[0x19],0);
    uVar12 = uVar15;
    if (*(int *)((longlong)param_1 + 0xd4) != 0) {
        do {
            plVar11 = *(longlong **)(param_1[0x1c] + uVar12 * 8);
            if (plVar11 != (longlong *)0x0) {
                (**(code **)(*plVar11 + 0x58))();
            }
            lVar10 = param_1[0x1c];
            plVar11 = *(longlong **)(lVar10 + uVar12 * 8);
            if (plVar11 != (longlong *)0x0) {
                (**(code **)(*plVar11 + 8))();
                *(undefined8 *)(lVar10 + uVar12 * 8) = 0;
            }
            uVar5 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)((longlong)param_1 + 0xd4));
    }
    FUN_14018b900(param_1[0x1c],0);
    uVar12 = uVar15;
    if (*(int *)((longlong)param_1 + 0xec) != 0) {
        do {
            plVar11 = *(longlong **)(param_1[0x1f] + uVar12 * 8);
            if (plVar11 != (longlong *)0x0) {
                (**(code **)(*plVar11 + 0x58))();
            }
            lVar10 = param_1[0x1f];
            plVar11 = *(longlong **)(lVar10 + uVar12 * 8);
            if (plVar11 != (longlong *)0x0) {
                (**(code **)(*plVar11 + 8))();
                *(undefined8 *)(lVar10 + uVar12 * 8) = 0;
            }
            uVar5 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)((longlong)param_1 + 0xec));
    }
    FUN_14018b900(param_1[0x1f],0);
    uVar12 = uVar15;
    if (*(int *)((longlong)param_1 + 0x104) != 0) {
        do {
            plVar11 = *(longlong **)(param_1[0x22] + uVar12 * 8);
            if (plVar11 != (longlong *)0x0) {
                (**(code **)(*plVar11 + 0x58))();
            }
            lVar10 = param_1[0x22];
            plVar11 = *(longlong **)(lVar10 + uVar12 * 8);
            if (plVar11 != (longlong *)0x0) {
                (**(code **)(*plVar11 + 8))();
                *(undefined8 *)(lVar10 + uVar12 * 8) = 0;
            }
            uVar5 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)((longlong)param_1 + 0x104));
    }
    FUN_14018b900(param_1[0x22],0);
    uVar12 = uVar15;
    if (*(int *)((longlong)param_1 + 0x11c) != 0) {
        do {
            plVar11 = *(longlong **)(param_1[0x25] + uVar12 * 8);
            if (plVar11 != (longlong *)0x0) {
                (**(code **)(*plVar11 + 0x58))();
            }
            lVar10 = param_1[0x25];
            plVar11 = *(longlong **)(lVar10 + uVar12 * 8);
            if (plVar11 != (longlong *)0x0) {
                (**(code **)(*plVar11 + 8))();
                *(undefined8 *)(lVar10 + uVar12 * 8) = 0;
            }
            uVar5 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)((longlong)param_1 + 0x11c));
    }
    FUN_14018b900(param_1[0x25],0);
    uVar12 = uVar15;
    if (*(int *)((longlong)param_1 + 0x134) != 0) {
        do {
            plVar11 = *(longlong **)(param_1[0x28] + uVar12 * 8);
            if (plVar11 != (longlong *)0x0) {
                (**(code **)(*plVar11 + 0x58))();
            }
            lVar10 = param_1[0x28];
            plVar11 = *(longlong **)(lVar10 + uVar12 * 8);
            if (plVar11 != (longlong *)0x0) {
                (**(code **)(*plVar11 + 8))();
                *(undefined8 *)(lVar10 + uVar12 * 8) = 0;
            }
            uVar5 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)((longlong)param_1 + 0x134));
    }
    FUN_14018b900(param_1[0x28],0);
    lVar10 = param_1[0xe7f];
    if (lVar10 != 0) {
        FUN_140608780(lVar10);
        FUN_14018b900(lVar10,0);
    }
    lVar10 = *(longlong *)(param_1[0xdf5] + 0x10);
    if (lVar10 != param_1[0xdf5]) {
        do {
            FUN_14018b900(*(undefined8 *)(lVar10 + 0x28),0);
            lVar16 = *(longlong *)(lVar10 + 0x18);
            if (lVar16 == 0) {
                lVar16 = *(longlong *)(lVar10 + 8);
                if (lVar10 == *(longlong *)(lVar16 + 0x18)) {
                    do {
                        lVar10 = lVar16;
                        lVar16 = *(longlong *)(lVar10 + 8);
                    } while (lVar10 == *(longlong *)(lVar16 + 0x18));
                }
                if (*(longlong *)(lVar10 + 0x18) != lVar16) {
                    lVar10 = lVar16;
                }
            }
            else {
                for (lVar9 = *(longlong *)(lVar16 + 0x10); lVar10 = lVar16, lVar9 != 0;
                     lVar9 = *(longlong *)(lVar9 + 0x10)) {
                    lVar16 = lVar9;
                }
            }
        } while (lVar10 != param_1[0xdf5]);
    }
    local_70 = param_1[0xe4f];
    local_68[0] = *(undefined8 *)(local_70 + 0x10);
    FUN_1403fc3f0(local_68,&local_70);
    if ((longlong *)param_1[0xdf8] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xdf8] + 8))();
        param_1[0xdf8] = 0;
    }
    if ((longlong *)param_1[0xdf9] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xdf9] + 8))();
        param_1[0xdf9] = 0;
    }
    if ((longlong *)param_1[0xdfa] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xdfa] + 8))();
        param_1[0xdfa] = 0;
    }
    if ((longlong *)param_1[0xdfb] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xdfb] + 8))();
        param_1[0xdfb] = 0;
    }
    if ((longlong *)param_1[0xdfc] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xdfc] + 8))();
        param_1[0xdfc] = 0;
    }
    if ((longlong *)param_1[0xe48] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xe48] + 8))();
        param_1[0xe48] = 0;
    }
    if ((longlong *)param_1[0xe49] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xe49] + 8))();
        param_1[0xe49] = 0;
    }
    if ((longlong *)param_1[0xc9d] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xc9d] + 8))();
        param_1[0xc9d] = 0;
    }
    if ((longlong *)param_1[0xcc6] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xcc6] + 8))();
        param_1[0xcc6] = 0;
    }
    if ((longlong *)param_1[0xcc7] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xcc7] + 8))();
        param_1[0xcc7] = 0;
    }
    if ((longlong *)param_1[0xe4a] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xe4a] + 8))();
        param_1[0xe4a] = 0;
    }
    if ((longlong *)param_1[0xf25] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xf25] + 8))();
        param_1[0xf25] = 0;
    }
    lVar10 = param_1[0xe78];
    while (lVar10 != 0) {
        lVar10 = param_1[0xe78];
        if (lVar10 != 0) {
            if (*(undefined8 **)(lVar10 + 0x68) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar10 + 0x68) = *(undefined8 *)(lVar10 + 0x70);
            }
            if (*(longlong *)(lVar10 + 0x70) != 0) {
                *(undefined8 *)(*(longlong *)(lVar10 + 0x70) + 0x68) = *(undefined8 *)(lVar10 + 0x68);
            }
            *(undefined8 *)(lVar10 + 0x68) = 0;
            *(undefined8 *)(lVar10 + 0x70) = 0;
            if (*(longlong **)(lVar10 + 0x40) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar10 + 0x40) + 8))();
            }
            if (*(longlong **)(lVar10 + 0x38) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar10 + 0x38) + 8))();
            }
            FUN_14018b900(lVar10,0);
        }
        lVar10 = param_1[0xe78];
    }
    if ((longlong *)param_1[0xe77] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xe77] + 8))();
        param_1[0xe77] = 0;
    }
    pplVar13 = (longlong **)(param_1 + 0xf6a);
    lVar10 = 5;
    do {
        if (*pplVar13 != (longlong *)0x0) {
            (**(code **)(**pplVar13 + 8))();
            *pplVar13 = (longlong *)0x0;
        }
        pplVar13 = pplVar13 + 1;
        lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    if ((longlong *)param_1[0xf6f] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xf6f] + 8))();
        param_1[0xf6f] = 0;
    }
    if ((longlong *)param_1[0xe91] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xe91] + 8))();
        param_1[0xe91] = 0;
    }
    if ((longlong *)param_1[0xe92] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xe92] + 8))();
        param_1[0xe92] = 0;
    }
    FUN_140539640(param_1,1);
    if ((longlong *)param_1[0xf70] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xf70] + 8))();
        param_1[0xf70] = 0;
    }
    if ((longlong *)param_1[0xf71] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xf71] + 8))();
        param_1[0xf71] = 0;
    }
    if ((longlong *)param_1[0xf72] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xf72] + 8))();
        param_1[0xf72] = 0;
    }
    if ((longlong *)param_1[0xf73] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xf73] + 8))();
        param_1[0xf73] = 0;
    }
    if ((longlong *)param_1[0xf2c] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xf2c] + 8))();
        param_1[0xf2c] = 0;
    }
    FUN_140633b00(param_1);
    FUN_1403e5ae0(param_1);
    puVar14 = (undefined8 *)param_1[0xdb2];
    if (puVar14 != (undefined8 *)0x0) {
        (**(code **)*puVar14)(puVar14,1);
    }
    param_1[0xdb2] = 0;
    if (DAT_140c65b70 != (longlong *)0x0) {
        (**(code **)(*DAT_140c65b70 + 8))();
        DAT_140c65b70 = (longlong *)0x0;
    }
    lVar10 = *(longlong *)(param_1[0xdb4] + 0x10);
    if (lVar10 != param_1[0xdb4]) {
        do {
            lVar16 = *(longlong *)(lVar10 + 0x28);
            if (lVar16 != 0) {
                FUN_140195d70(lVar16 + 8);
                *(undefined4 *)(lVar16 + 8) = 0;
                if (*(undefined8 **)(lVar16 + 0x18) != (undefined8 *)0x0) {
                    **(undefined8 **)(lVar16 + 0x18) = *(undefined8 *)(lVar16 + 0x20);
                }
                if (*(undefined8 **)(lVar16 + 0x20) != (undefined8 *)0x0) {
                    **(undefined8 **)(lVar16 + 0x20) = *(undefined8 *)(lVar16 + 0x18);
                }
                *(undefined8 *)(lVar16 + 0x18) = 0;
                *(undefined8 *)(lVar16 + 0x20) = 0;
                FUN_14018b900(lVar16,0);
            }
            lVar16 = *(longlong *)(lVar10 + 0x18);
            if (lVar16 == 0) {
                lVar16 = *(longlong *)(lVar10 + 8);
                if (lVar10 == *(longlong *)(lVar16 + 0x18)) {
                    do {
                        lVar10 = lVar16;
                        lVar16 = *(longlong *)(lVar10 + 8);
                    } while (lVar10 == *(longlong *)(lVar16 + 0x18));
                }
                if (*(longlong *)(lVar10 + 0x18) != lVar16) {
                    lVar10 = lVar16;
                }
            }
            else {
                for (lVar9 = *(longlong *)(lVar16 + 0x10); lVar10 = lVar16, lVar9 != 0;
                     lVar9 = *(longlong *)(lVar9 + 0x10)) {
                    lVar16 = lVar9;
                }
            }
        } while (lVar10 != param_1[0xdb4]);
    }
    if (param_1[0xdb5] != 0) {
        lVar10 = *(longlong *)(param_1[0xdb4] + 8);
        while (lVar10 != 0) {
            FUN_1400083b0(param_1 + 0xdb3,*(undefined8 *)(lVar10 + 0x18));
            lVar16 = *(longlong *)(lVar10 + 0x10);
            FUN_14018b900(lVar10,0);
            lVar10 = lVar16;
        }
        *(undefined8 *)(param_1[0xdb4] + 0x10) = param_1[0xdb4];
        *(undefined8 *)(param_1[0xdb4] + 8) = 0;
        *(undefined8 *)(param_1[0xdb4] + 0x18) = param_1[0xdb4];
        param_1[0xdb5] = 0;
    }
    FUN_1403bf780(param_1);
    FUN_1403baba0(param_1);
    FUN_1403a19a0(param_1);
    FUN_14053b3c0(param_1);
    lVar10 = DAT_140c65b98;
    if (DAT_140c65b98 != 0) {
        FUN_1405bf130(DAT_140c65b98);
        FUN_14018b900(lVar10,0);
    }
    lVar10 = DAT_140c65ba8;
    DAT_140c65b98 = 0;
    if (DAT_140c65ba8 != 0) {
        FUN_1405f91b0(DAT_140c65ba8);
        FUN_14018b900(lVar10,0);
    }
    lVar10 = DAT_140c65c20;
    DAT_140c65ba8 = 0;
    if (DAT_140c65c20 != 0) {
        FUN_140635950(DAT_140c65c20);
        FUN_14018b900(lVar10,0);
    }
    plVar11 = DAT_140c665d0;
    DAT_140c65c20 = 0;
    if (DAT_140c665d0 != (longlong *)0x0) {
        if (DAT_140c665d0[2] != 0) {
            do {
                lVar10 = plVar11[3];
                lVar16 = *(longlong *)(lVar10 + uVar15 * 8);
                while (lVar16 != 0) {
                    lVar16 = *(longlong *)(lVar10 + uVar15 * 8);
                    *(undefined8 *)(lVar10 + uVar15 * 8) = *(undefined8 *)(lVar16 + 8);
                    FUN_14018b900(lVar16,0);
                    lVar16 = *(longlong *)(lVar10 + uVar15 * 8);
                }
                uVar15 = uVar15 + 1;
            } while (uVar15 < (ulonglong)plVar11[2]);
        }
        plVar11[1] = 0;
        lVar10 = *plVar11;
        if (lVar10 != 0) {
            iVar7 = *(int *)(lVar10 + -8) + -1;
            if (-1 < iVar7) {
                puVar18 = (undefined *)((longlong)*(int *)(lVar10 + -8) * 0x30 + 0x10 + lVar10);
                do {
                    puVar17 = &DAT_ffffffffffffffd0 + (longlong)puVar18;
                    if (*(longlong *)(puVar18 + -0x20) != 0) {
                        lVar16 = *(longlong *)(*(longlong *)(puVar18 + -0x28) + 8);
                        while (lVar16 != 0) {
                            FUN_1400083b0(puVar17,*(undefined8 *)(lVar16 + 0x18));
                            lVar9 = *(longlong *)(lVar16 + 0x10);
                            FUN_14018b900(lVar16,0);
                            lVar16 = lVar9;
                        }
                        *(longlong *)(*(longlong *)(puVar18 + -0x28) + 0x10) = *(longlong *)(puVar18 + -0x28);
                        *(undefined8 *)(*(longlong *)(puVar18 + -0x28) + 8) = 0;
                        *(longlong *)(*(longlong *)(puVar18 + -0x28) + 0x18) = *(longlong *)(puVar18 + -0x28);
                        *(undefined8 *)(puVar18 + -0x20) = 0;
                    }
                    *(undefined8 *)(puVar18 + -0x40) = 0;
                    *(undefined8 *)(puVar18 + -0x38) = 0;
                    if (*(longlong *)(puVar18 + -0x20) != 0) {
                        lVar16 = *(longlong *)(*(longlong *)(puVar18 + -0x28) + 8);
                        while (lVar16 != 0) {
                            FUN_1400083b0(puVar17,*(undefined8 *)(lVar16 + 0x18));
                            lVar9 = *(longlong *)(lVar16 + 0x10);
                            FUN_14018b900(lVar16,0);
                            lVar16 = lVar9;
                        }
                        *(longlong *)(*(longlong *)(puVar18 + -0x28) + 0x10) = *(longlong *)(puVar18 + -0x28);
                        *(undefined8 *)(*(longlong *)(puVar18 + -0x28) + 8) = 0;
                        *(longlong *)(*(longlong *)(puVar18 + -0x28) + 0x18) = *(longlong *)(puVar18 + -0x28);
                        *(undefined8 *)(puVar18 + -0x20) = 0;
                    }
                    FUN_14018b900(*(undefined8 *)(puVar18 + -0x28),0);
                    iVar7 = iVar7 + -1;
                    puVar18 = puVar17;
                } while (-1 < iVar7);
            }
            FUN_14018b900(lVar10 + -8,0);
        }
        uVar15 = 0;
        *plVar11 = 0;
        if (plVar11[2] != 0) {
            do {
                lVar10 = plVar11[3];
                lVar16 = *(longlong *)(lVar10 + uVar15 * 8);
                while (lVar16 != 0) {
                    lVar16 = *(longlong *)(lVar10 + uVar15 * 8);
                    *(undefined8 *)(lVar10 + uVar15 * 8) = *(undefined8 *)(lVar16 + 8);
                    FUN_14018b900(lVar16,0);
                    lVar16 = *(longlong *)(lVar10 + uVar15 * 8);
                }
                uVar15 = uVar15 + 1;
            } while (uVar15 < (ulonglong)plVar11[2]);
        }
        plVar11[1] = 0;
        FUN_14018b900(plVar11[3],0);
        plVar11[3] = 0;
        FUN_14018b900(plVar11,0);
    }
    DAT_140c665d0 = (longlong *)0x0;
    plVar11 = param_1 + 0xd97;
    do {
        lVar10 = *plVar11;
        while (lVar10 != 0) {
            if (*(undefined8 **)(lVar10 + 0x20) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar10 + 0x20) = *(undefined8 *)(lVar10 + 0x28);
            }
            if (*(longlong *)(lVar10 + 0x28) != 0) {
                *(undefined8 *)(*(longlong *)(lVar10 + 0x28) + 0x20) = *(undefined8 *)(lVar10 + 0x20);
            }
            *(undefined8 *)(lVar10 + 0x20) = 0;
            *(undefined8 *)(lVar10 + 0x28) = 0;
            FUN_14018b900(lVar10,0);
            lVar10 = *plVar11;
        }
        plVar11 = plVar11 + 1;
        lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar19 = param_1[0xd01];
    while (lVar19 != 0) {
        lVar19 = param_1[0xd01];
        if (lVar19 != 0) {
            if (*(undefined8 **)(lVar19 + 0x10) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar19 + 0x10) = *(undefined8 *)(lVar19 + 0x18);
            }
            if (*(longlong *)(lVar19 + 0x18) != 0) {
                *(undefined8 *)(*(longlong *)(lVar19 + 0x18) + 0x10) = *(undefined8 *)(lVar19 + 0x10);
            }
            *(undefined8 *)(lVar19 + 0x10) = 0;
            *(undefined8 *)(lVar19 + 0x18) = 0;
            FUN_14018b900(lVar19,0);
        }
        lVar19 = param_1[0xd01];
    }
    lVar19 = param_1[0xd02];
    while (lVar19 != 0) {
        lVar19 = param_1[0xd02];
        if (lVar19 != 0) {
            if (*(undefined8 **)(lVar19 + 0x10) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar19 + 0x10) = *(undefined8 *)(lVar19 + 0x18);
            }
            if (*(longlong *)(lVar19 + 0x18) != 0) {
                *(undefined8 *)(*(longlong *)(lVar19 + 0x18) + 0x10) = *(undefined8 *)(lVar19 + 0x10);
            }
            *(undefined8 *)(lVar19 + 0x10) = 0;
            *(undefined8 *)(lVar19 + 0x18) = 0;
            FUN_14018b900(lVar19,0);
        }
        lVar19 = param_1[0xd02];
    }
    lVar19 = param_1[0xd03];
    while (lVar19 != 0) {
        lVar19 = param_1[0xd03];
        if (lVar19 != 0) {
            if (*(undefined8 **)(lVar19 + 0x10) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar19 + 0x10) = *(undefined8 *)(lVar19 + 0x18);
            }
            if (*(longlong *)(lVar19 + 0x18) != 0) {
                *(undefined8 *)(*(longlong *)(lVar19 + 0x18) + 0x10) = *(undefined8 *)(lVar19 + 0x10);
            }
            *(undefined8 *)(lVar19 + 0x10) = 0;
            *(undefined8 *)(lVar19 + 0x18) = 0;
            FUN_14018b900(lVar19,0);
        }
        lVar19 = param_1[0xd03];
    }
    lVar19 = *(longlong *)(param_1[0xe2c] + 0x10);
    if (lVar19 != param_1[0xe2c]) {
        do {
            puVar14 = *(undefined8 **)(lVar19 + 0x28);
            if (puVar14 != (undefined8 *)0x0) {
                (**(code **)*puVar14)(puVar14,1);
            }
            lVar10 = *(longlong *)(lVar19 + 0x18);
            if (lVar10 == 0) {
                lVar10 = *(longlong *)(lVar19 + 8);
                if (lVar19 == *(longlong *)(lVar10 + 0x18)) {
                    do {
                        lVar19 = lVar10;
                        lVar10 = *(longlong *)(lVar19 + 8);
                    } while (lVar19 == *(longlong *)(lVar10 + 0x18));
                }
                if (*(longlong *)(lVar19 + 0x18) != lVar10) {
                    lVar19 = lVar10;
                }
            }
            else {
                for (lVar16 = *(longlong *)(lVar10 + 0x10); lVar19 = lVar10, lVar16 != 0;
                     lVar16 = *(longlong *)(lVar16 + 0x10)) {
                    lVar10 = lVar16;
                }
            }
        } while (lVar19 != param_1[0xe2c]);
    }
    if (param_1[0xe2d] != 0) {
        lVar19 = *(longlong *)(param_1[0xe2c] + 8);
        while (lVar19 != 0) {
            FUN_1400083b0(param_1 + 0xe2b,*(undefined8 *)(lVar19 + 0x18));
            lVar10 = *(longlong *)(lVar19 + 0x10);
            FUN_14018b900(lVar19,0);
            lVar19 = lVar10;
        }
        *(undefined8 *)(param_1[0xe2c] + 0x10) = param_1[0xe2c];
        *(undefined8 *)(param_1[0xe2c] + 8) = 0;
        *(undefined8 *)(param_1[0xe2c] + 0x18) = param_1[0xe2c];
        param_1[0xe2d] = 0;
    }
    FUN_140195d70(param_1 + 0xc76);
    if (param_1[0xc89] != 0) {
        FUN_140195d70(param_1 + 0xc87);
    }
    if (param_1[0xfcc] != 0) {
        FUN_1403e5a10();
    }
    lVar19 = param_1[0xfb2];
    if (lVar19 != 0) {
        FUN_1405fdf00(lVar19);
        FUN_14018b900(lVar19,0);
    }
    param_1[0xfb2] = 0;
    lVar19 = param_1[0xc7f];
    while (lVar19 != 0) {
        lVar19 = param_1[0xc7f];
        if (*(undefined8 **)(lVar19 + 0x70) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar19 + 0x70) = *(undefined8 *)(lVar19 + 0x78);
        }
        if (*(longlong *)(lVar19 + 0x78) != 0) {
            *(undefined8 *)(*(longlong *)(lVar19 + 0x78) + 0x70) = *(undefined8 *)(lVar19 + 0x70);
        }
        *(undefined8 *)(lVar19 + 0x70) = 0;
        *(undefined8 *)(lVar19 + 0x78) = 0;
        lVar19 = param_1[0xc7f];
    }
    FUN_1405bbc00();
    lVar19 = param_1[0x1002];
    if (DAT_140c65898 == param_1) {
        DAT_140c65898 = (undefined8 *)0x0;
    }
    if (lVar19 != 0) {
        (**(code **)(*(longlong *)(lVar19 + -0x10) + 8))(lVar19 + -0x10);
    }
    lVar19 = param_1[0xffd];
    if (lVar19 != 0) {
        (**(code **)(*(longlong *)(lVar19 + -0x10) + 8))(lVar19 + -0x10);
    }
    FUN_140195d70(param_1 + 0xff3);
    *(undefined4 *)(param_1 + 0xff3) = 0;
    if ((undefined8 *)param_1[0xff5] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xff5] = param_1[0xff6];
    }
    if ((undefined8 *)param_1[0xff6] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xff6] = param_1[0xff5];
    }
    param_1[0xff5] = 0;
    param_1[0xff6] = 0;
    lVar19 = param_1[0xfeb];
    if (lVar19 != 0) {
        (**(code **)(*(longlong *)(lVar19 + -0x10) + 8))(lVar19 + -0x10);
    }
    FUN_140019490(param_1 + 0xfe6);
    FUN_14018b900(param_1[0xfe8],0);
    param_1[0xfe8] = 0;
    if ((longlong *)param_1[0xfd9] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xfd9] + 8))();
    }
    FUN_140008410(param_1 + 0xfd5);
    FUN_14018b900(param_1[0xfd6],0);
    FUN_140008410(param_1 + 0xfd1);
    FUN_14018b900(param_1[0xfd2],0);
    if (param_1[0xfcf] != 0) {
        FUN_14001a270(param_1 + 0xfcd,*(undefined8 *)(param_1[0xfce] + 8));
        *(undefined8 *)(param_1[0xfce] + 0x10) = param_1[0xfce];
        *(undefined8 *)(param_1[0xfce] + 8) = 0;
        *(undefined8 *)(param_1[0xfce] + 0x18) = param_1[0xfce];
        param_1[0xfcf] = 0;
    }
    FUN_14018b900(param_1[0xfce],0);
    lVar19 = param_1[0xfca];
    if (lVar19 != 0) {
        (**(code **)(*(longlong *)(lVar19 + -0x10) + 8))(lVar19 + -0x10);
    }
    FUN_1400b9580(param_1 + 0xfc8);
    FUN_1400b9580(param_1 + 0xfc6);
    FUN_140195d70(param_1 + 0xfbd);
    *(undefined4 *)(param_1 + 0xfbd) = 0;
    if ((undefined8 *)param_1[0xfbf] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xfbf] = param_1[0xfc0];
    }
    if ((undefined8 *)param_1[0xfc0] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xfc0] = param_1[0xfbf];
    }
    param_1[0xfbf] = 0;
    param_1[0xfc0] = 0;
    FUN_1403fe250(param_1 + 0xfb3);
    FUN_14018b900(param_1[0xfb4],0);
    FUN_140008410(param_1 + 0xfaa);
    FUN_14018b900(param_1[0xfab],0);
    FUN_140008410(param_1 + 0xfa6);
    FUN_14018b900(param_1[0xfa7],0);
    FUN_140008410(param_1 + 0xfa2);
    FUN_14018b900(param_1[0xfa3],0);
    if (param_1[4000] != 0) {
        FUN_14001a270(param_1 + 0xf9e,*(undefined8 *)(param_1[3999] + 8));
        *(undefined8 *)(param_1[3999] + 0x10) = param_1[3999];
        *(undefined8 *)(param_1[3999] + 8) = 0;
        *(undefined8 *)(param_1[3999] + 0x18) = param_1[3999];
        param_1[4000] = 0;
    }
    FUN_14018b900(param_1[3999],0);
    if (param_1[0xf9c] != 0) {
        FUN_14001a270(param_1 + 0xf9a,*(undefined8 *)(param_1[0xf9b] + 8));
        *(undefined8 *)(param_1[0xf9b] + 0x10) = param_1[0xf9b];
        *(undefined8 *)(param_1[0xf9b] + 8) = 0;
        *(undefined8 *)(param_1[0xf9b] + 0x18) = param_1[0xf9b];
        param_1[0xf9c] = 0;
    }
    FUN_14018b900(param_1[0xf9b],0);
    lVar19 = param_1[0xf98];
    for (lVar10 = param_1[0xf97]; lVar10 != lVar19; lVar10 = lVar10 + 0x70) {
        FUN_1403f6ee0(lVar10);
    }
    if (param_1[0xf97] != 0) {
        FUN_14018b900(param_1[0xf97],0);
    }
    FUN_1403faef0(param_1 + 0xf94);
    FUN_1400b4be0(param_1 + 0xf92);
    FUN_14018b900(param_1[0xf93],0);
    FUN_1403fe1b0(param_1 + 0xf90);
    FUN_14018b900(param_1[0xf91],0);
    FUN_1403fe1b0(param_1 + 0xf8e);
    FUN_14018b900(param_1[0xf8f],0);
    FUN_1403fe1b0(param_1 + 0xf8c);
    FUN_14018b900(param_1[0xf8d],0);
    FUN_1403fae60(param_1 + 0xf88);
    puVar14 = param_1 + 0xf88;
    do {
        if ((longlong *)puVar14[-6] != (longlong *)0x0) {
            (**(code **)(*(longlong *)puVar14[-6] + 8))();
            puVar14[-6] = 0;
        }
        if (puVar14[-3] != 0) {
            FUN_14018b900(puVar14[-3],0);
        }
        local_res8 = local_res8 + -1;
        puVar14 = puVar14 + -6;
    } while (-1 < local_res8);
    FUN_140008410(param_1 + 0xf65);
    FUN_14018b900(param_1[0xf66],0);
    if (param_1[0xf64] != 0) {
        FUN_1401a4a00();
    }
    FUN_140195d70(param_1 + 0xf5b);
    *(undefined4 *)(param_1 + 0xf5b) = 0;
    if ((undefined8 *)param_1[0xf5d] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xf5d] = param_1[0xf5e];
    }
    if ((undefined8 *)param_1[0xf5e] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xf5e] = param_1[0xf5d];
    }
    param_1[0xf5d] = 0;
    param_1[0xf5e] = 0;
    FUN_140008410(param_1 + 0xf57);
    FUN_14018b900(param_1[0xf58],0);
    FUN_14062db70(param_1 + 0xf49);
    FUN_140019490(param_1 + 0xf44);
    FUN_14018b900(param_1[0xf46],0);
    param_1[0xf46] = 0;
    if (param_1[0xf43] != 0) {
        FUN_1401a4a00();
    }
    FUN_14062d2f0(param_1 + 0xf2d);
    if ((longlong *)param_1[0xf26] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xf26] + 8))();
        param_1[0xf26] = 0;
    }
    if (param_1[0xf29] != 0) {
        FUN_14018b900(param_1[0xf29],0);
    }
    FUN_140195d70(param_1 + 0xf12);
    *(undefined4 *)(param_1 + 0xf12) = 0;
    if ((undefined8 *)param_1[0xf14] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xf14] = param_1[0xf15];
    }
    if ((undefined8 *)param_1[0xf15] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xf15] = param_1[0xf14];
    }
    param_1[0xf14] = 0;
    param_1[0xf15] = 0;
    FUN_140195d70(param_1 + 0xf09);
    *(undefined4 *)(param_1 + 0xf09) = 0;
    if ((undefined8 *)param_1[0xf0b] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xf0b] = param_1[0xf0c];
    }
    if ((undefined8 *)param_1[0xf0c] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xf0c] = param_1[0xf0b];
    }
    param_1[0xf0b] = 0;
    param_1[0xf0c] = 0;
    FUN_140195d70(param_1 + 0xf00);
    *(undefined4 *)(param_1 + 0xf00) = 0;
    if ((undefined8 *)param_1[0xf02] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xf02] = param_1[0xf03];
    }
    if ((undefined8 *)param_1[0xf03] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xf03] = param_1[0xf02];
    }
    param_1[0xf02] = 0;
    param_1[0xf03] = 0;
    FUN_140195d70(param_1 + 0xef7);
    *(undefined4 *)(param_1 + 0xef7) = 0;
    if ((undefined8 *)param_1[0xef9] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xef9] = param_1[0xefa];
    }
    if ((undefined8 *)param_1[0xefa] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xefa] = param_1[0xef9];
    }
    param_1[0xef9] = 0;
    param_1[0xefa] = 0;
    FUN_140195d70(param_1 + 0xeee);
    *(undefined4 *)(param_1 + 0xeee) = 0;
    if ((undefined8 *)param_1[0xef0] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xef0] = param_1[0xef1];
    }
    if ((undefined8 *)param_1[0xef1] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xef1] = param_1[0xef0];
    }
    param_1[0xef0] = 0;
    param_1[0xef1] = 0;
    FUN_140195d70(param_1 + 0xee5);
    *(undefined4 *)(param_1 + 0xee5) = 0;
    if ((undefined8 *)param_1[0xee7] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xee7] = param_1[0xee8];
    }
    if ((undefined8 *)param_1[0xee8] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xee8] = param_1[0xee7];
    }
    param_1[0xee7] = 0;
    param_1[0xee8] = 0;
    FUN_140195d70(param_1 + 0xedc);
    *(undefined4 *)(param_1 + 0xedc) = 0;
    if ((undefined8 *)param_1[0xede] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xede] = param_1[0xedf];
    }
    if ((undefined8 *)param_1[0xedf] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xedf] = param_1[0xede];
    }
    param_1[0xede] = 0;
    param_1[0xedf] = 0;
    FUN_140195d70(param_1 + 0xed3);
    *(undefined4 *)(param_1 + 0xed3) = 0;
    if ((undefined8 *)param_1[0xed5] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xed5] = param_1[0xed6];
    }
    if ((undefined8 *)param_1[0xed6] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xed6] = param_1[0xed5];
    }
    param_1[0xed5] = 0;
    param_1[0xed6] = 0;
    FUN_140195d70(param_1 + 0xeca);
    *(undefined4 *)(param_1 + 0xeca) = 0;
    if ((undefined8 *)param_1[0xecc] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xecc] = param_1[0xecd];
    }
    if ((undefined8 *)param_1[0xecd] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xecd] = param_1[0xecc];
    }
    param_1[0xecc] = 0;
    param_1[0xecd] = 0;
    FUN_140195d70(param_1 + 0xec1);
    *(undefined4 *)(param_1 + 0xec1) = 0;
    if ((undefined8 *)param_1[0xec3] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xec3] = param_1[0xec4];
    }
    if ((undefined8 *)param_1[0xec4] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xec4] = param_1[0xec3];
    }
    param_1[0xec3] = 0;
    param_1[0xec4] = 0;
    FUN_1403fc230(param_1 + 0xeaa);
    if (param_1[0xeac] != 0) {
        FUN_14018b900(param_1[0xeac],0);
    }
    if ((longlong *)param_1[0xea8] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xea8] + 8))();
    }
    FUN_1402a2f90(param_1 + 0xea6);
    lVar19 = param_1[0xea4];
    if (lVar19 != 0) {
        (**(code **)(*(longlong *)(lVar19 + -0x10) + 8))(lVar19 + -0x10);
    }
    FUN_140008410(param_1 + 0xe7a);
    FUN_14018b900(param_1[0xe7b],0);
    if (param_1[0xe78] != 0) {
        FUN_1401a4a00();
    }
    FUN_140195d70(param_1 + 0xe6e);
    *(undefined4 *)(param_1 + 0xe6e) = 0;
    if ((undefined8 *)param_1[0xe70] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xe70] = param_1[0xe71];
    }
    if ((undefined8 *)param_1[0xe71] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xe71] = param_1[0xe70];
    }
    param_1[0xe70] = 0;
    param_1[0xe71] = 0;
    FUN_140008410(param_1 + 0xe61);
    FUN_14018b900(param_1[0xe62],0);
    if (param_1[0xe5d] != 0) {
        FUN_1401a4a00();
    }
    FUN_1403fc230(param_1 + 0xe52);
    if (param_1[0xe54] != 0) {
        FUN_14018b900(param_1[0xe54],0);
    }
    FUN_140008410(param_1 + 0xe4e);
    FUN_14018b900(param_1[0xe4f],0);
    if (param_1[0xe47] != 0) {
        FUN_1401a4a00();
    }
    FUN_14062b7b0(param_1 + 0xe34);
    if (param_1[0xe2f] != 0) {
        FUN_1401a4a00();
    }
    FUN_140008410(param_1 + 0xe2b);
    FUN_14018b900(param_1[0xe2c],0);
    if ((longlong *)param_1[0xe27] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xe27] + 8))();
        param_1[0xe27] = 0;
    }
    if ((longlong *)param_1[0xe28] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xe28] + 8))();
        param_1[0xe28] = 0;
    }
    FUN_14079a4f0(param_1 + 0xe11);
    FUN_14018b900(param_1[0xe13],0);
    FUN_140195d70(param_1 + 0xe06);
    *(undefined4 *)(param_1 + 0xe06) = 0;
    if ((undefined8 *)param_1[0xe08] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xe08] = param_1[0xe09];
    }
    if ((undefined8 *)param_1[0xe09] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xe09] = param_1[0xe08];
    }
    param_1[0xe08] = 0;
    param_1[0xe09] = 0;
    FUN_140008410(param_1 + 0xdf4);
    FUN_14018b900(param_1[0xdf5],0);
    FUN_140008410(param_1 + 0xdef);
    FUN_14018b900(param_1[0xdf0],0);
    FUN_140008410(param_1 + 0xdeb);
    FUN_14018b900(param_1[0xdec],0);
    if (param_1[0xdea] != 0) {
        CloseHandle((HANDLE)param_1[0xdea]);
    }
    if (param_1[0xde6] != 0) {
        FUN_1401a4a00();
    }
    FUN_140019490(param_1 + 0xde1);
    FUN_14018b900(param_1[0xde3],0);
    param_1[0xde3] = 0;
    FUN_140008410(param_1 + 0xddd);
    FUN_14018b900(param_1[0xdde],0);
    FUN_140008410(param_1 + 0xdd8);
    FUN_14018b900(param_1[0xdd9],0);
    plVar11 = param_1 + 0xdd6;
    lVar19 = *plVar11;
    if (lVar19 != 0) {
        (**(code **)(*(longlong *)(lVar19 + -0x10) + 8))(lVar19 + -0x10);
    }
    iVar7 = 3;
    do {
        lVar19 = plVar11[-2];
        plVar11 = plVar11 + -2;
        if (lVar19 != 0) {
            (**(code **)(*(longlong *)(lVar19 + -0x10) + 8))(lVar19 + -0x10);
        }
        iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    FUN_140008410(param_1 + 0xdb7);
    FUN_14018b900(param_1[0xdb8],0);
    FUN_140008410(param_1 + 0xdb3);
    FUN_14018b900(param_1[0xdb4],0);
    if (param_1[0xdae] != 0) {
        FUN_1401a4a00();
    }
    FUN_140019490(param_1 + 0xda9);
    FUN_14018b900(param_1[0xdab],0);
    param_1[0xdab] = 0;
    FUN_140008410(param_1 + 0xda5);
    FUN_14018b900(param_1[0xda6],0);
    pplVar13 = (longlong **)(param_1 + 0xd9c);
    if (*pplVar13 != (longlong *)0x0) {
        (**(code **)(**pplVar13 + 8))();
    }
    do {
        pplVar13 = pplVar13 + -1;
        if (*pplVar13 != (longlong *)0x0) {
            FUN_1401a4a00(pplVar13);
        }
        iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    FUN_140601920(param_1 + 0xd82);
    FUN_140629a70(param_1 + 0xd79);
    FUN_1405dd7c0(param_1 + 0xd07);
    if (param_1[0xd03] != 0) {
        FUN_1401a4a00(param_1 + 0xd03);
    }
    if (param_1[0xd02] != 0) {
        FUN_1401a4a00(param_1 + 0xd02);
    }
    if (param_1[0xd01] != 0) {
        FUN_1401a4a00();
    }
    FUN_1403fbfe0(param_1 + 0xcfb);
    if (param_1[0xcfd] != 0) {
        FUN_14018b900(param_1[0xcfd],0);
    }
    FUN_140008410(param_1 + 0xcf7);
    FUN_14018b900(param_1[0xcf8],0);
    FUN_140195d70(param_1 + 0xced);
    *(undefined4 *)(param_1 + 0xced) = 0;
    if ((undefined8 *)param_1[0xcef] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xcef] = param_1[0xcf0];
    }
    if ((undefined8 *)param_1[0xcf0] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xcf0] = param_1[0xcef];
    }
    param_1[0xcef] = 0;
    param_1[0xcf0] = 0;
    if (param_1[0xcec] != 0) {
        FUN_1401a4a00();
    }
    lVar19 = param_1[0xce7];
    if (lVar19 != 0) {
        (**(code **)(*(longlong *)(lVar19 + -0x10) + 8))(lVar19 + -0x10);
    }
    FUN_140008410(param_1 + 0xcdf);
    FUN_14018b900(param_1[0xce0],0);
    lVar19 = param_1[0xcdd];
    if (lVar19 != 0) {
        (**(code **)(*(longlong *)(lVar19 + -0x10) + 8))(lVar19 + -0x10);
    }
    FUN_140008410(param_1 + 0xcd8);
    FUN_14018b900(param_1[0xcd9],0);
    FUN_140195d70(param_1 + 0xccb);
    *(undefined4 *)(param_1 + 0xccb) = 0;
    if ((undefined8 *)param_1[0xccd] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xccd] = param_1[0xcce];
    }
    if ((undefined8 *)param_1[0xcce] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xcce] = param_1[0xccd];
    }
    param_1[0xccd] = 0;
    param_1[0xcce] = 0;
    param_1[0xc9e] = &PTR_LAB_140b6fae0;
    FUN_140626760(param_1 + 0xc9e);
    param_1[0xc9e] = &PTR_FUN_140b6fb70;
    FUN_140626760(param_1 + 0xc9e);
    FUN_140195d70(param_1 + 0xc87);
    *(undefined4 *)(param_1 + 0xc87) = 0;
    if ((undefined8 *)param_1[0xc89] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xc89] = param_1[0xc8a];
    }
    if ((undefined8 *)param_1[0xc8a] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xc8a] = param_1[0xc89];
    }
    param_1[0xc89] = 0;
    param_1[0xc8a] = 0;
    puVar14 = param_1 + 0xc84;
    do {
        pplVar13 = (longlong **)(puVar14 + -1);
        puVar14 = puVar14 + -1;
        if (*pplVar13 != (longlong *)0x0) {
            (**(code **)(**pplVar13 + 8))();
        }
        local_res10 = local_res10 + -1;
    } while (-1 < local_res10);
    if (param_1[0xc7f] != 0) {
        FUN_1401a4a00(param_1 + 0xc7f);
    }
    FUN_140195d70(param_1 + 0xc76);
    *(undefined4 *)(param_1 + 0xc76) = 0;
    if ((undefined8 *)param_1[0xc78] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xc78] = param_1[0xc79];
    }
    if ((undefined8 *)param_1[0xc79] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xc79] = param_1[0xc78];
    }
    param_1[0xc78] = 0;
    param_1[0xc79] = 0;
    lVar19 = param_1[0xc6d];
    if (lVar19 != 0) {
        (**(code **)(*(longlong *)(lVar19 + -0x10) + 8))(lVar19 + -0x10);
    }
    if (param_1[0xc6b] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0xc69] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0xc68] != 0) {
        FUN_1401a4a00();
    }
    lVar19 = param_1[0xc66];
    if (lVar19 != 0) {
        (**(code **)(*(longlong *)(lVar19 + -0x10) + 8))(lVar19 + -0x10);
    }
    FUN_140008410(param_1 + 0xc61);
    FUN_14018b900(param_1[0xc62],0);
    iVar6 = 0x3e;
    plVar11 = param_1 + 0xc75;
    do {
        plVar11 = plVar11 + -0x24;
        if (*plVar11 != 0) {
            FUN_14018b900(*plVar11,0);
        }
        iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    if (param_1[0x381] != 0) {
        FUN_1400294c0(param_1 + 0x37f,*(undefined8 *)(param_1[0x380] + 8));
        *(undefined8 *)(param_1[0x380] + 0x10) = param_1[0x380];
        *(undefined8 *)(param_1[0x380] + 8) = 0;
        *(undefined8 *)(param_1[0x380] + 0x18) = param_1[0x380];
        param_1[0x381] = 0;
    }
    FUN_14018b900(param_1[0x380],0);
    FUN_140008410(param_1 + 0x37a);
    FUN_14018b900(param_1[0x37b],0);
    FUN_140008410(param_1 + 0x376);
    FUN_14018b900(param_1[0x377],0);
    FUN_140008410(param_1 + 0x372);
    FUN_14018b900(param_1[0x373],0);
    FUN_1405e4980(param_1 + 0x2d3);
    if (param_1[0x2bd] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[700] != 0) {
        FUN_1401a4a00();
    }
    FUN_140008410(param_1 + 0x2b8);
    FUN_14018b900(param_1[0x2b9],0);
    FUN_140008410(param_1 + 0x2b4);
    FUN_14018b900(param_1[0x2b5],0);
    FUN_140008410(param_1 + 0x2b0);
    FUN_14018b900(param_1[0x2b1],0);
    FUN_140195d70(param_1 + 0x2a7);
    *(undefined4 *)(param_1 + 0x2a7) = 0;
    if ((undefined8 *)param_1[0x2a9] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2a9] = param_1[0x2aa];
    }
    if ((undefined8 *)param_1[0x2aa] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2aa] = param_1[0x2a9];
    }
    param_1[0x2a9] = 0;
    param_1[0x2aa] = 0;
    FUN_140195d70(param_1 + 0x29e);
    *(undefined4 *)(param_1 + 0x29e) = 0;
    if ((undefined8 *)param_1[0x2a0] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2a0] = param_1[0x2a1];
    }
    if ((undefined8 *)param_1[0x2a1] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2a1] = param_1[0x2a0];
    }
    param_1[0x2a0] = 0;
    param_1[0x2a1] = 0;
    FUN_140195d70(param_1 + 0x294);
    *(undefined4 *)(param_1 + 0x294) = 0;
    if ((undefined8 *)param_1[0x296] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x296] = param_1[0x297];
    }
    if ((undefined8 *)param_1[0x297] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x297] = param_1[0x296];
    }
    param_1[0x296] = 0;
    param_1[0x297] = 0;
    FUN_140008410(param_1 + 0x28f);
    FUN_14018b900(param_1[0x290],0);
    FUN_140008410(param_1 + 0x28b);
    FUN_14018b900(param_1[0x28c],0);
    FUN_140008410(param_1 + 0x154);
    FUN_14018b900(param_1[0x155],0);
    lVar19 = param_1[0x152];
    if (lVar19 != 0) {
        (**(code **)(*(longlong *)(lVar19 + -0x10) + 8))(lVar19 + -0x10);
    }
    FUN_140195d70(param_1 + 0x149);
    *(undefined4 *)(param_1 + 0x149) = 0;
    if ((undefined8 *)param_1[0x14b] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x14b] = param_1[0x14c];
    }
    if ((undefined8 *)param_1[0x14c] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x14c] = param_1[0x14b];
    }
    param_1[0x14b] = 0;
    param_1[0x14c] = 0;
    FUN_1403fbac0(param_1 + 0xad);
    lVar19 = param_1[0xa9];
    if (lVar19 != 0) {
        (**(code **)(*(longlong *)(lVar19 + -0x10) + 8))(lVar19 + -0x10);
    }
    if (param_1[0x11] != 0) {
        FUN_14018b900(param_1[0x11],0);
    }
    FUN_140333c80(param_1 + 10);
    *param_1 = &PTR_LAB_140b559d0;
    if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[3] = param_1[4];
    }
    if (param_1[4] != 0) {
        *(undefined8 *)(param_1[4] + 0x18) = param_1[3];
    }
    param_1[3] = 0;
    param_1[4] = 0;
    *param_1 = &PTR_LAB_140b55048;
    return;
}



longlong FUN_1403e59a0(longlong param_1)

{
    if (*(undefined8 **)(param_1 + 0x68) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x70);
    }
    if (*(longlong *)(param_1 + 0x70) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68) = *(undefined8 *)(param_1 + 0x68);
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x40) + 8))();
    }
    if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
    }
    FUN_14018b900(param_1,0);
    return param_1;
}



longlong ** FUN_1403e5a10(longlong **param_1)

{
    if (*param_1 != (longlong *)0x0) {
        (**(code **)(**param_1 + 8))();
        *param_1 = (longlong *)0x0;
    }
    if (param_1[1] != (longlong *)0x0) {
        (**(code **)(*param_1[1] + 8))();
        param_1[1] = (longlong *)0x0;
    }
    if (param_1[10] != (longlong *)0x0) {
        CloseHandle(param_1[10]);
    }
    FUN_14062ee70(param_1 + 4);
    FUN_14062ee70(param_1 + 2);
    FUN_14018b900(param_1,0);
    return param_1;
}



int FUN_1403e5a80(longlong *param_1)

{
    longlong *plVar1;
    int iVar2;

    LOCK();
    plVar1 = param_1 + 1;
    iVar2 = *(int *)plVar1;
    *(int *)plVar1 = *(int *)plVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        FUN_140198f50(param_1,L"reloadui");
        FUN_140198f50();
        FUN_140198f50();
        if (param_1 != (longlong *)0x0) {
            (**(code **)(*param_1 + 0x10))(param_1,1);
        }
        iVar2 = 0;
    }
    return iVar2;
}



void FUN_1403e5ae0(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong lVar5;

    if (*(longlong *)(param_1 + 0x7ce0) != 0) {
        FUN_14001a270(param_1 + 0x7cd0,*(undefined8 *)(*(longlong *)(param_1 + 0x7cd8) + 8));
        *(longlong *)(*(longlong *)(param_1 + 0x7cd8) + 0x10) = *(longlong *)(param_1 + 0x7cd8);
        *(undefined8 *)(*(longlong *)(param_1 + 0x7cd8) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x7cd8) + 0x18) = *(longlong *)(param_1 + 0x7cd8);
        *(undefined8 *)(param_1 + 0x7ce0) = 0;
    }
    if (*(longlong *)(param_1 + 32000) != 0) {
        FUN_14001a270(param_1 + 0x7cf0,*(undefined8 *)(*(longlong *)(param_1 + 0x7cf8) + 8));
        *(longlong *)(*(longlong *)(param_1 + 0x7cf8) + 0x10) = *(longlong *)(param_1 + 0x7cf8);
        *(undefined8 *)(*(longlong *)(param_1 + 0x7cf8) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x7cf8) + 0x18) = *(longlong *)(param_1 + 0x7cf8);
        *(undefined8 *)(param_1 + 32000) = 0;
    }
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x7d58) + 0x10);
    if (lVar5 != *(longlong *)(param_1 + 0x7d58)) {
        do {
            lVar2 = *(longlong *)(lVar5 + 0x18);
            if (lVar2 == 0) {
                lVar3 = *(longlong *)(lVar5 + 8);
                lVar2 = lVar5;
                if (lVar5 == *(longlong *)(lVar3 + 0x18)) {
                    do {
                        lVar2 = lVar3;
                        lVar3 = *(longlong *)(lVar2 + 8);
                    } while (lVar2 == *(longlong *)(lVar3 + 0x18));
                }
                if (*(longlong *)(lVar2 + 0x18) != lVar3) {
                    lVar2 = lVar3;
                }
            }
            else {
                for (lVar3 = *(longlong *)(lVar2 + 0x10); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x10)) {
                    lVar2 = lVar3;
                }
            }
            lVar5 = *(longlong *)(lVar5 + 0x28);
            if (lVar5 != 0) {
                plVar4 = (longlong *)**(longlong **)(lVar5 + 8);
                if (plVar4 != *(longlong **)(lVar5 + 8)) {
                    do {
                        plVar1 = (longlong *)*plVar4;
                        FUN_14018b900(plVar4,0);
                        plVar4 = plVar1;
                    } while (plVar1 != (longlong *)*(longlong *)(lVar5 + 8));
                }
                *(undefined8 *)*(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar5 + 8);
                *(longlong *)(*(longlong *)(lVar5 + 8) + 8) = *(longlong *)(lVar5 + 8);
                FUN_14018b900(*(undefined8 *)(lVar5 + 8),0);
                FUN_14018b900(lVar5,0);
            }
            FUN_1403fc2d0(param_1 + 0x7d50);
            lVar5 = lVar2;
        } while (lVar2 != *(longlong *)(param_1 + 0x7d58));
    }
    FUN_1403d40e0(param_1 + 0x7d10);
    FUN_1403d4180(param_1 + 0x7d30);
    return;
}



undefined8 FUN_1403e5c80(longlong param_1)

{
    int iVar1;
    undefined8 uVar2;
    longlong lVar3;
    ulonglong uVar4;
    undefined4 *puVar5;
    longlong *local_res8;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;

    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x7250) + 0x28))
            (*(longlong **)(param_1 + 0x7250),L"UI\\Interface\\Selection.m3",
             param_1 + 0x64e8,0);
    if (-1 < (int)uVar2) {
        local_38 = 0x4c5;
        local_30 = 0x3f800000;
        uVar4 = 0;
        local_28 = 0;
        local_20 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x64e8) + 0x248))
                (*(longlong **)(param_1 + 0x64e8),0,&local_38);
        (**(code **)(**(longlong **)(param_1 + 0x64e8) + 0x288))
                (*(longlong **)(param_1 + 0x64e8),&LAB_14055c2c0,0);
        uVar2 = FUN_14062b8a0(param_1 + 0x71a0);
        if (-1 < (int)uVar2) {
            FUN_1405a6880(param_1);
            puVar5 = &DAT_140c65880;
            do {
                local_res8 = (longlong *)0x0;
                iVar1 = (**(code **)(**(longlong **)(param_1 + 0x7250) + 0x28))
                        (*(longlong **)(param_1 + 0x7250),
                         *(undefined8 *)
                                 ((longlong)&PTR_u_Art_FX_UI_Selection_Selection_Ho_140af6d40 + uVar4),
                         &local_res8,0);
                if (-1 < iVar1) {
                    local_38 = 0x96;
                    local_30 = 0x3f800000;
                    local_28 = 0;
                    local_20 = 0;
                    (**(code **)(*local_res8 + 0x248))(local_res8,0,&local_38);
                    lVar3 = (**(code **)(*local_res8 + 0x488))();
                    *puVar5 = *(undefined4 *)(lVar3 + 0x30);
                }
                if (local_res8 != (longlong *)0x0) {
                    (**(code **)(*local_res8 + 8))();
                }
                uVar4 = uVar4 + 0x20;
                puVar5 = puVar5 + 1;
            } while (uVar4 < 0x60);
            *DAT_140c65920 = 1;
            uVar2 = 0;
        }
    }
    return uVar2;
}



// WARNING: Could not reconcile some variable overlaps

ulonglong FUN_1403e5de0(longlong param_1)

{
    undefined2 *puVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    char cVar7;
    uint uVar8;
    int iVar9;
    int iVar10;
    ulonglong uVar11;
    longlong lVar12;
    longlong lVar13;
    ulonglong uVar14;
    undefined8 uVar15;
    longlong *plVar16;
    ulonglong uVar17;
    undefined4 uVar18;
    longlong lVar19;
    longlong lVar20;
    longlong lVar21;
    undefined4 uVar22;
    ulonglong local_res8;
    undefined8 in_stack_ffffffffffffff48;
    ulonglong *puVar23;
    undefined **local_a8;
    ulonglong local_a0;
    LPVOID local_98;
    undefined **local_90;
    undefined8 uStack136;
    undefined8 local_80;
    uint uStack120;
    undefined4 uStack116;
    undefined **local_68;
    undefined8 local_60;
    LPVOID local_58;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined4 local_38;
    undefined4 uStack52;
    uint uStack48;
    undefined4 uStack44;

    uVar22 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
    bVar6 = false;
    local_res8 = 0x141df1ec0;
    FUN_1401a3130(5,2,&local_res8,param_1);
    FUN_140333ce0(param_1 + 0x50);
    uVar11 = (**(code **)(*DAT_140c65808 + 0x58))(DAT_140c65808,param_1 + 0x7960);
    if ((int)uVar11 < 0) {
        return uVar11;
    }
    FUN_1403fc4a0(param_1 + 0x7158);
    uVar11 = FUN_14000b690();
    if ((int)uVar11 < 0) {
        return uVar11;
    }
    puVar23 = &local_res8;
    uVar11 = CONCAT44(uVar22,0x10);
    uVar8 = (**(code **)(*DAT_140c65680 + 0x20))(DAT_140c65680,L"Arial Unicode MS",7);
    if ((int)uVar8 < 0) {
        LAB_1403e61b2:
        bVar5 = false;
        lVar12 = CONCAT44(uStack60,uStack64);
        LAB_1403e61b6:
        bVar4 = false;
        lVar13 = (longlong)uStack136;
        LAB_1403e61ba:
        bVar3 = false;
        lVar19 = (longlong)uStack136;
    }
    else {
        if (*(longlong **)(param_1 + 0x7b50) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x7b50) + 8))();
            *(undefined8 *)(param_1 + 0x7b50) = 0;
        }
        uStack136 = (wchar_t *)0x0;
        *(ulonglong *)(param_1 + 0x7b50) = local_res8;
        iVar10 = *DAT_140c63750;
        bVar6 = true;
        iVar9 = DAT_140c44ed0;
        if (iVar10 < DAT_140c44ed0) {
            iVar9 = iVar10;
        }
        uVar22 = *(undefined4 *)(&DAT_140c44ee0 + (longlong)iVar9 * 4);
        iVar9 = DAT_140c7aef0;
        if (iVar10 < DAT_140c7aef0) {
            iVar9 = iVar10;
        }
        lVar12 = *(longlong *)(&DAT_140c7af08 + (longlong)iVar9 * 0x20);
        lVar19 = *(longlong *)(&DAT_140c7af10 + (longlong)iVar9 * 0x20) - lVar12 >> 1;
        uVar14 = lVar19 + 1;
        if (uVar14 < 0x7fffffffffffffff) {
            uStack136 = (wchar_t *)FUN_14018b280(uVar14 * 2,0);
        }
        lVar20 = (longlong)uStack136;
        lVar19 = lVar19 * 2;
        FUN_1407db590(uStack136,lVar12,lVar19);
        puVar1 = (undefined2 *)(lVar20 + lVar19);
        if (puVar1 != (undefined2 *)0x0) {
            *puVar1 = 0;
        }
        uVar8 = FUN_1403f7130(param_1,lVar20,uVar22,1,uVar11,puVar23);
        if ((int)uVar8 < 0) goto LAB_1403e61b2;
        bVar6 = true;
        bVar5 = true;
        iVar10 = *DAT_140c63750;
        iVar9 = DAT_140c44f90;
        if (iVar10 < DAT_140c44f90) {
            iVar9 = iVar10;
        }
        uVar22 = *(undefined4 *)(&DAT_140c44fa0 + (longlong)iVar9 * 4);
        iVar9 = DAT_140c7b030;
        if (iVar10 < DAT_140c7b030) {
            iVar9 = iVar10;
        }
        lVar13 = 0;
        lVar12 = 0;
        lVar19 = *(longlong *)(&DAT_140c7b048 + (longlong)iVar9 * 0x20);
        lVar20 = *(longlong *)(&DAT_140c7b050 + (longlong)iVar9 * 0x20) - lVar19 >> 1;
        uVar14 = lVar20 + 1;
        if (uVar14 < 0x7fffffffffffffff) {
            lVar12 = FUN_14018b280(uVar14 * 2,0);
        }
        lVar20 = lVar20 * 2;
        FUN_1407db590(lVar12,lVar19,lVar20);
        puVar1 = (undefined2 *)(lVar20 + lVar12);
        if (puVar1 != (undefined2 *)0x0) {
            *puVar1 = 0;
        }
        uVar8 = FUN_1403f7130(param_1,lVar12,uVar22,2);
        if ((int)uVar8 < 0) goto LAB_1403e61b6;
        bVar6 = true;
        bVar5 = true;
        bVar4 = true;
        iVar10 = *DAT_140c63750;
        iVar9 = DAT_140c44ff0;
        if (iVar10 < DAT_140c44ff0) {
            iVar9 = iVar10;
        }
        uVar22 = *(undefined4 *)(&DAT_140c45000 + (longlong)iVar9 * 4);
        iVar9 = DAT_140c7b170;
        if (iVar10 < DAT_140c7b170) {
            iVar9 = iVar10;
        }
        lVar19 = *(longlong *)(&DAT_140c7b188 + (longlong)iVar9 * 0x20);
        lVar20 = *(longlong *)(&DAT_140c7b190 + (longlong)iVar9 * 0x20) - lVar19 >> 1;
        uVar14 = lVar20 + 1;
        if (uVar14 < 0x7fffffffffffffff) {
            lVar13 = FUN_14018b280(uVar14 * 2,0);
        }
        lVar20 = lVar20 * 2;
        FUN_1407db590(lVar13,lVar19,lVar20);
        puVar1 = (undefined2 *)(lVar20 + lVar13);
        lVar19 = 0;
        if (puVar1 != (undefined2 *)0x0) {
            *puVar1 = 0;
        }
        uVar8 = FUN_1403f7130(param_1,lVar13,uVar22,3);
        if ((int)uVar8 < 0) goto LAB_1403e61ba;
        iVar10 = *DAT_140c63750;
        bVar6 = true;
        bVar5 = true;
        bVar4 = true;
        bVar3 = true;
        iVar9 = DAT_140c45050;
        if (iVar10 < DAT_140c45050) {
            iVar9 = iVar10;
        }
        local_res8 = local_res8 & 0xffffffff00000000 |
                     (ulonglong)*(uint *)(&DAT_140c45060 + (longlong)iVar9 * 4);
        iVar9 = DAT_140c7b170;
        if (iVar10 < DAT_140c7b170) {
            iVar9 = iVar10;
        }
        lVar20 = *(longlong *)(&DAT_140c7b188 + (longlong)iVar9 * 0x20);
        lVar21 = *(longlong *)(&DAT_140c7b190 + (longlong)iVar9 * 0x20) - lVar20 >> 1;
        uVar14 = lVar21 + 1;
        if (uVar14 < 0x7fffffffffffffff) {
            lVar19 = FUN_14018b280(uVar14 * 2,0);
        }
        lVar21 = lVar21 * 2;
        FUN_1407db590(lVar19,lVar20,lVar21);
        puVar1 = (undefined2 *)(lVar21 + lVar19);
        if (puVar1 != (undefined2 *)0x0) {
            *puVar1 = 0;
        }
        uVar8 = FUN_1403f7130(param_1,lVar19,local_res8 & 0xffffffff,4);
        if (-1 < (int)uVar8) {
            bVar2 = false;
            goto LAB_1403e61c0;
        }
    }
    bVar2 = true;
    LAB_1403e61c0:
    if ((bVar3) && (lVar19 != 0)) {
        FUN_14018b900(lVar19,0);
    }
    if ((bVar4) && (lVar13 != 0)) {
        FUN_14018b900(lVar13,0);
    }
    if ((bVar5) && (lVar12 != 0)) {
        FUN_14018b900(lVar12,0);
    }
    if ((bVar6) && (uStack136 != (wchar_t *)0x0)) {
        FUN_14018b900(uStack136,0);
    }
    if (bVar2) {
        local_a8 = &PTR_LAB_140b5e648;
        local_a0 = 0;
        local_98 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_a8);
        local_68 = local_a8;
        local_60 = local_a0;
        local_90 = &PTR_LAB_140b5e648;
        uStack136 = L"Result";
        local_58 = local_98;
        local_80 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_90);
        local_90 = &PTR_LAB_140b5e640;
        local_38 = (undefined4)local_80;
        uStack52 = local_80._4_4_;
        uStack44 = uStack116;
        local_res8 = 0x141df1948;
        local_48 = 0x40b5e640;
        uStack68 = 1;
        uStack64 = (undefined4)uStack136;
        uStack60 = uStack136._4_4_;
        uStack120 = uVar8;
        uStack48 = uVar8;
        iVar10 = FUN_1401971e0(&DAT_140c8a79c,5,&local_res8,&local_48,&local_68);
        local_90 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_80);
        local_a8 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_98);
        if (iVar10 != 0) {
            DebugBreak();
        }
        uVar14 = (ulonglong)uVar8;
    }
    else {
        uVar8 = (**(code **)(*DAT_140c65670 + 0x98))
                (DAT_140c65670,L"Shaders\\SimplePS.sho",param_1 + 0x7b80);
        if (((((int)uVar8 < 0) ||
              (uVar8 = (**(code **)(*DAT_140c65670 + 0x98))
                      (DAT_140c65670,L"Shaders\\SimpleCbPS.sho",param_1 + 0x7b90),
                      (int)uVar8 < 0)) ||
             (uVar8 = (**(code **)(*DAT_140c65670 + 0x90))
                     (DAT_140c65670,L"Shaders\\SimpleVS.sho",param_1 + 0x7b98), (int)uVar8 < 0
             )) || (uVar8 = (**(code **)(*DAT_140c65670 + 0x98))
                (DAT_140c65670,L"Shaders\\GoofyPS.sho",param_1 + 0x7b88),
                (int)uVar8 < 0)) {
            local_a8 = &PTR_LAB_140b5e648;
            local_a0 = 0;
            local_98 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_a8);
            local_68 = local_a8;
            local_60 = local_a0;
            local_90 = &PTR_LAB_140b5e648;
            uStack136 = L"Result";
            local_58 = local_98;
            local_80 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_90);
            local_90 = &PTR_LAB_140b5e640;
            local_38 = (undefined4)local_80;
            uStack52 = local_80._4_4_;
            uStack44 = uStack116;
            local_res8 = 0x141df23f8;
            local_48 = 0x40b5e640;
            uStack68 = 1;
            uStack64 = (undefined4)uStack136;
            uStack60 = uStack136._4_4_;
            uStack120 = uVar8;
            uStack48 = uVar8;
            iVar10 = FUN_1401971e0(&DAT_140c8a790,5,&local_res8,&local_48,&local_68);
            local_90 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_80);
            local_a8 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_98);
            if (iVar10 != 0) {
                DebugBreak();
            }
            uVar14 = (ulonglong)uVar8;
        }
        else {
            (**(code **)(*DAT_140c65670 + 0xa0))
                    (DAT_140c65670,L"UI\\Cursors\\UI_CRB_Cursor_Target.tga",param_1 + 0x7ec8);
            GetCursorPos((LPPOINT)(param_1 + 0x7594));
            ScreenToClient(*(HWND *)(DAT_140c635f0 + 8),(LPPOINT)(param_1 + 0x7594));
            FUN_1403c2230(param_1);
            uVar14 = FUN_1403e68f0(param_1);
            if (-1 < (int)uVar14) {
                uVar14 = FUN_14062b830(param_1 + 0x71a0);
                if (-1 < (int)uVar14) {
                    *(undefined4 *)(param_1 + 0x7230) = 2;
                    uVar17 = 0;
                    *(undefined8 *)(param_1 + 0x7220) = 0;
                    uVar22 = 1;
                    *(undefined4 *)(param_1 + 0x7234) = 1;
                    **(longlong **)(param_1 + 0x7198) = param_1 + 0x71a0;
                    FUN_14043add0();
                    lVar12 = *(longlong *)(param_1 + 0x7340) + 0xf0;
                    uVar15 = FUN_140108e80(lVar12,L"NPCDialogBkgdRight");
                    FUN_1401097f0(param_1 + 0x7bb0,uVar15);
                    uVar15 = FUN_140108e80(lVar12,L"Dialog:sprHolo_Speech_NPC_Minimal");
                    FUN_1401097f0(param_1 + 0x7be0,uVar15);
                    uVar15 = FUN_140108e80(lVar12,L"NPCDialogBkgdLeft");
                    FUN_1401097f0(param_1 + 0x7c10,uVar15);
                    lVar12 = *(longlong *)(param_1 + 0x7340);
                    if ((lVar12 != 0) &&
                        ((*(longlong *)(param_1 + 0x7930) == 0 ||
                          (cVar7 = FUN_14002c740(param_1 + 0x7940,L"UI_Disconnect_Icon"), cVar7 == '\0')))) {
                        lVar12 = FUN_140108e80(lVar12 + 0xf0,L"UI_Disconnect_Icon");
                        uVar14 = uVar17;
                        if (lVar12 != 0) {
                            do {
                                lVar19 = uVar14 + 1;
                                uVar14 = uVar14 + 1;
                            } while (L"UI_Disconnect_Icon"[lVar19] != L'\0');
                            FUN_14001c480(param_1 + 0x7940,L"UI_Disconnect_Icon",L"UI_Disconnect_Icon" + uVar14);
                        }
                        FUN_1401097f0(param_1 + 0x7930,lVar12);
                    }
                    FUN_140249520();
                    FUN_14024d4e0();
                    FUN_14024c3e0();
                    FUN_140216da0();
                    FUN_14022d6e0();
                    FUN_14022db20();
                    FUN_14021f160();
                    FUN_140231f20();
                    FUN_1402327a0();
                    FUN_1401f4900();
                    FUN_140240060();
                    FUN_1401ff740();
                    FUN_140225ba0();
                    uVar8 = FUN_1401fe410();
                    uVar14 = uVar17;
                    if (uVar8 != 0) {
                        do {
                            lVar12 = FUN_1401fe4c0();
                            local_a8 = *(undefined ***)(lVar12 + 8);
                            local_a0 = local_a0 & 0xffffffff00000000 | (ulonglong)*(uint *)(lVar12 + 4);
                            plVar16 = (longlong *)FUN_1403fada0(param_1 + 0x6f78,&local_a8);
                            uVar14 = (ulonglong)((int)uVar14 + 1);
                            *plVar16 = lVar12;
                        } while (uVar14 < uVar8);
                    }
                    uVar14 = FUN_1402ec590();
                    if (-1 < (int)uVar14) {
                        lVar12 = FUN_140200220(0x25d);
                        if (lVar12 == 0) {
                            uVar18 = 1;
                        }
                        else {
                            uVar18 = *(undefined4 *)(lVar12 + 4);
                        }
                        uVar11 = uVar11 & 0xffffffff00000000;
                        FUN_1403eb430(param_1,uVar18,0,0,uVar11);
                        lVar12 = FUN_140200220(0x426);
                        if (lVar12 != 0) {
                            uVar22 = *(undefined4 *)(lVar12 + 4);
                        }
                        FUN_1403eb430(param_1,uVar22,0,0,uVar11 & 0xffffffff00000000);
                        FUN_140198d60();
                        lVar12 = FUN_14018b280(0x240,0);
                        if (lVar12 != 0) {
                            uVar17 = FUN_140434560(lVar12);
                        }
                        *(ulonglong *)(param_1 + 0x7fe0) = uVar17;
                        uVar8 = (**(code **)(*DAT_140c65670 + 0xa0))
                                (DAT_140c65670,L"UI\\Cursors\\Point.tex",uVar17 + 0x58);
                        if (((int)uVar8 < 0) || (uVar8 = FUN_140434a00(uVar17), (int)uVar8 < 0)) {
                            local_a0 = 0;
                            local_a8 = &PTR_LAB_140b5e648;
                            local_98 = TlsGetValue(DAT_140c63720);
                            TlsSetValue(DAT_140c63720,&local_a8);
                            local_68 = local_a8;
                            local_60 = local_a0;
                            local_90 = &PTR_LAB_140b5e648;
                            uStack136 = L"Result";
                            local_58 = local_98;
                            local_80 = TlsGetValue(DAT_140c63720);
                            TlsSetValue(DAT_140c63720,&local_90);
                            local_90 = &PTR_LAB_140b5e640;
                            local_38 = (undefined4)local_80;
                            uStack52 = local_80._4_4_;
                            uStack44 = uStack116;
                            local_res8 = 0x141df1d68;
                            local_48 = 0x40b5e640;
                            uStack68 = 1;
                            uStack64 = (undefined4)uStack136;
                            uStack60 = uStack136._4_4_;
                            uStack120 = uVar8;
                            uStack48 = uVar8;
                            iVar10 = FUN_1401971e0(&DAT_140c8a794,0x16,&local_res8,&local_48,&local_68);
                            local_90 = &PTR_LAB_140b5e648;
                            TlsSetValue(DAT_140c63720,local_80);
                            local_a8 = &PTR_LAB_140b5e648;
                            TlsSetValue(DAT_140c63720,local_98);
                            if (iVar10 != 0) {
                                DebugBreak();
                            }
                            uVar14 = (ulonglong)uVar8;
                        }
                        else {
                            uVar14 = 0;
                        }
                    }
                }
            }
        }
    }
    return uVar14;
}



// WARNING: Could not reconcile some variable overlaps

ulonglong FUN_1403e68f0(longlong param_1)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    undefined *puVar6;
    bool bVar7;
    undefined8 local_res10;
    undefined **local_98;
    undefined8 local_90;
    LPVOID local_88;
    undefined **local_78;
    undefined8 local_70;
    LPVOID local_68;
    undefined **local_58;
    undefined8 uStack80;
    undefined8 local_48;
    uint uStack64;
    undefined4 uStack60;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined4 local_28;
    undefined4 uStack36;
    uint uStack32;
    undefined4 uStack28;

    uVar1 = FUN_140613840();
    if ((int)uVar1 < 0) {
        local_98 = &PTR_LAB_140b5e648;
        local_90 = 0;
        local_88 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_98);
        local_78 = local_98;
        local_70 = local_90;
        local_58 = &PTR_LAB_140b5e648;
        uStack80 = L"Result";
        local_68 = local_88;
        local_48 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_58);
        puVar6 = &DAT_140c8a798;
        local_res10 = 0x141df2228;
    }
    else {
        uVar1 = FUN_14055c6a0();
        if (((((int)uVar1 < 0) || (uVar1 = FUN_140575b60(), (int)uVar1 < 0)) ||
             (uVar1 = FUN_1406005d0(), (int)uVar1 < 0)) || (uVar1 = FUN_14062f570(), (int)uVar1 < 0)) {
            local_98 = &PTR_LAB_140b5e648;
            local_90 = 0;
            local_88 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_98);
            local_78 = local_98;
            local_70 = local_90;
            local_58 = &PTR_LAB_140b5e648;
            uStack80 = L"Result";
            local_68 = local_88;
            local_48 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_58);
            puVar6 = &DAT_140c8a788;
            local_res10 = 0x141df2260;
        }
        else {
            FUN_14055c800();
            uVar1 = FUN_1405bedf0();
            uVar5 = 0;
            if ((int)uVar1 < 0) {
                local_90 = 0;
                local_98 = &PTR_LAB_140b5e648;
                local_88 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720,&local_98);
                local_78 = local_98;
                local_70 = local_90;
                local_58 = &PTR_LAB_140b5e648;
                uStack80 = L"Result";
                local_68 = local_88;
                local_48 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720,&local_58);
                puVar6 = &DAT_140c8a78c;
                local_res10 = 0x141df2180;
            }
            else {
                if (DAT_140c65c20 == 0) {
                    lVar3 = FUN_14018b280(0x1e0,0);
                    if (lVar3 == 0) {
                        DAT_140c65c20 = 0;
                    }
                    else {
                        DAT_140c65c20 = FUN_140635840(lVar3);
                    }
                    FUN_140635b60();
                }
                uVar4 = FUN_14040ad50();
                if ((int)uVar4 < 0) {
                    return uVar4;
                }
                uVar4 = FUN_140631390();
                if ((int)uVar4 < 0) {
                    return uVar4;
                }
                uVar1 = FUN_140538fd0(param_1);
                if (((((int)uVar1 < 0) || (uVar1 = FUN_1404050c0(), (int)uVar1 < 0)) ||
                     ((uVar1 = FUN_1405814b0(), (int)uVar1 < 0 ||
                                                ((uVar1 = FUN_14063ae00(), (int)uVar1 < 0 || (uVar1 = FUN_14063fb40(), (int)uVar1 < 0))
                                                )))) || (uVar1 = FUN_1405a48f0(), (int)uVar1 < 0)) {
                    local_90 = 0;
                    local_98 = &PTR_LAB_140b5e648;
                    local_88 = TlsGetValue(DAT_140c63720);
                    TlsSetValue(DAT_140c63720,&local_98);
                    local_78 = local_98;
                    local_70 = local_90;
                    local_58 = &PTR_LAB_140b5e648;
                    uStack80 = L"Result";
                    local_68 = local_88;
                    local_48 = TlsGetValue(DAT_140c63720);
                    TlsSetValue(DAT_140c63720,&local_58);
                    puVar6 = &DAT_140c8a784;
                    local_res10 = 0x141df2658;
                }
                else {
                    lVar3 = FUN_14018b280(0x2b0,0);
                    if (lVar3 != 0) {
                        uVar5 = FUN_140608670(lVar3);
                    }
                    *(undefined8 *)(param_1 + 0x73f8) = uVar5;
                    uVar4 = FUN_1406085e0(uVar5);
                    if ((int)uVar4 < 0) {
                        return uVar4;
                    }
                    bVar7 = DAT_140c665d0 == 0;
                    *(undefined4 *)(*(longlong *)(param_1 + 0x73f8) + 0xd4) = 0;
                    *(undefined4 *)(*(longlong *)(param_1 + 0x73f8) + 0xd8) = 1;
                    *(undefined4 *)(*(longlong *)(param_1 + 0x73f8) + 0xdc) = 1;
                    *(undefined4 *)(*(longlong *)(param_1 + 0x73f8) + 0xe0) = 1;
                    *(undefined4 *)(*(longlong *)(param_1 + 0x73f8) + 0xe4) = 1;
                    *(undefined4 *)(*(longlong *)(param_1 + 0x73f8) + 0xe8) = 1;
                    *(undefined4 *)(*(longlong *)(param_1 + 0x73f8) + 0xec) = 1;
                    *(undefined4 *)(*(longlong *)(param_1 + 0x73f8) + 0xf0) = 1;
                    *(undefined4 *)(*(longlong *)(param_1 + 0x73f8) + 0xf4) = 1;
                    *(undefined4 *)(*(longlong *)(param_1 + 0x73f8) + 0xf8) = 1;
                    *(undefined4 *)(*(longlong *)(param_1 + 0x73f8) + 0xfc) = 1;
                    *(undefined4 *)(*(longlong *)(param_1 + 0x73f8) + 0xa0) = 0;
                    *(undefined4 *)(*(longlong *)(param_1 + 0x73f8) + 0xa4) = 0;
                    *(undefined4 *)(*(longlong *)(param_1 + 0x73f8) + 0xa8) = 0;
                    *(undefined4 *)(*(longlong *)(param_1 + 0x73f8) + 0xac) = 0;
                    *(undefined4 *)(*(longlong *)(param_1 + 0x73f8) + 0xb0) = 0;
                    *(undefined4 *)(*(longlong *)(param_1 + 0x73f8) + 0xb4) = 0;
                    *(undefined4 *)(*(longlong *)(param_1 + 0x73f8) + 0xb8) = 0;
                    *(undefined4 *)(*(longlong *)(param_1 + 0x73f8) + 0xbc) = 0;
                    *(undefined4 *)(*(longlong *)(param_1 + 0x73f8) + 0xc0) = 0;
                    *(undefined4 *)(*(longlong *)(param_1 + 0x73f8) + 0xc4) = 0;
                    *(undefined4 *)(*(longlong *)(param_1 + 0x73f8) + 200) = 0;
                    if (bVar7) {
                        lVar3 = FUN_14018b280(0x30);
                        if (lVar3 == 0) {
                            DAT_140c665d0 = 0;
                        }
                        else {
                            DAT_140c665d0 = FUN_140716980(lVar3);
                        }
                        iVar2 = FUN_140716ac0();
                        if (iVar2 < 0) {
                            if (DAT_140c665d0 != 0) {
                                FUN_1406160d0();
                            }
                            DAT_140c665d0 = 0;
                            local_98 = &PTR_LAB_140b5e648;
                            local_90 = 0;
                            local_88 = TlsGetValue(DAT_140c63720);
                            TlsSetValue(DAT_140c63720,&local_98);
                            local_78 = local_98;
                            local_70 = local_90;
                            local_58 = &PTR_LAB_140b5e648;
                            uStack80 = L"Result";
                            local_68 = local_88;
                            local_48 = TlsGetValue(DAT_140c63720);
                            TlsSetValue(DAT_140c63720,&local_58);
                            uStack64 = 0x80004005;
                            local_58 = &PTR_LAB_140b5e640;
                            local_28 = (undefined4)local_48;
                            uStack36 = local_48._4_4_;
                            uStack32 = 0x80004005;
                            uStack28 = uStack60;
                            local_res10 = 0x141df2690;
                            local_38 = 0x40b5e640;
                            uStack52 = 1;
                            uStack48 = (undefined4)uStack80;
                            uStack44 = uStack80._4_4_;
                            iVar2 = FUN_1401971e0(&DAT_140c8a780,5,&local_res10,&local_38,&local_78);
                            local_58 = &PTR_LAB_140b5e648;
                            TlsSetValue(DAT_140c63720,local_48);
                            local_98 = &PTR_LAB_140b5e648;
                            TlsSetValue(DAT_140c63720,local_88);
                            if (iVar2 != 0) {
                                DebugBreak();
                            }
                            return 0x80004005;
                        }
                    }
                    if (DAT_140c65b90 == 0) {
                        lVar3 = FUN_14018b280(0x118,0);
                        if (lVar3 == 0) {
                            DAT_140c65b90 = 0;
                        }
                        else {
                            DAT_140c65b90 = FUN_1405be5a0(lVar3);
                        }
                        FUN_1405be7d0();
                    }
                    uVar1 = FUN_1405fafb0();
                    if (-1 < (int)uVar1) {
                        return 0;
                    }
                    local_90 = 0;
                    local_98 = &PTR_LAB_140b5e648;
                    local_88 = TlsGetValue(DAT_140c63720);
                    TlsSetValue(DAT_140c63720,&local_98);
                    local_78 = local_98;
                    local_70 = local_90;
                    local_58 = &PTR_LAB_140b5e648;
                    uStack80 = L"Result";
                    local_68 = local_88;
                    local_48 = TlsGetValue(DAT_140c63720);
                    TlsSetValue(DAT_140c63720,&local_58);
                    puVar6 = &DAT_140c8a77c;
                    local_res10 = 0x141df2600;
                }
            }
        }
    }
    local_58 = &PTR_LAB_140b5e640;
    local_28 = (undefined4)local_48;
    uStack36 = local_48._4_4_;
    uStack28 = uStack60;
    local_38 = 0x40b5e640;
    uStack52 = 1;
    uStack48 = (undefined4)uStack80;
    uStack44 = uStack80._4_4_;
    uStack64 = uVar1;
    uStack32 = uVar1;
    iVar2 = FUN_1401971e0(puVar6,5,&local_res10,&local_38,&local_78);
    local_58 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720,local_48);
    local_98 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720,local_88);
    if (iVar2 != 0) {
        DebugBreak();
    }
    return (ulonglong)uVar1;
}



void FUN_1403e70d0(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
    ulonglong uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong *plVar4;
    int iVar5;
    uint uVar6;
    longlong lVar7;
    undefined8 uVar8;
    longlong *plVar9;
    longlong *plVar10;
    longlong *plVar11;
    longlong *plVar12;
    longlong *plVar13;
    longlong *plVar14;
    longlong *plVar15;
    undefined4 uVar16;
    undefined auStack904 [32];
    undefined ***local_368;
    longlong *local_358;
    longlong local_350;
    longlong *local_348;
    longlong *local_340;
    longlong *local_338;
    longlong local_330;
    longlong *local_328;
    longlong *local_320;
    longlong *local_318;
    longlong *local_310;
    longlong *local_308;
    undefined **local_300;
    undefined8 local_2f8;
    LPVOID local_2f0;
    undefined **local_2e8;
    wchar_t *pwStack736;
    LPVOID local_2d8;
    int iStack720;
    undefined4 uStack716;
    undefined4 *local_2c8;
    undefined **local_2b8;
    wchar_t *pwStack688;
    LPVOID local_2a8;
    undefined8 uStack672;
    undefined8 local_298;
    undefined8 local_290;
    undefined4 local_288;
    undefined **local_278;
    undefined8 local_270;
    LPVOID local_268;
    undefined local_258 [528];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack904;
    local_2c8 = param_3;
    local_330 = FUN_14024acc0(param_2);
    if (local_330 == 0) goto LAB_1403e7b00;
    uVar1 = *(ulonglong *)(local_330 + 8);
    plVar10 = (longlong *)0x0;
    local_358 = plVar10;
    if (uVar1 != 0) {
        if (DAT_140c3fe70 < uVar1) {
            local_358 = (longlong *)0x0;
        }
        else {
            local_358 = (longlong *)(DAT_140c3fe68 + uVar1);
        }
    }
    lVar7 = FUN_1407dd8d8(local_358,0x5c);
    if (lVar7 != 0) {
        lVar7 = lVar7 + 2;
    }
    local_350 = lVar7;
    iVar5 = FUN_140633380(param_1,param_2);
    if (iVar5 < 0) {
        local_2f8 = 0;
        local_300 = &PTR_LAB_140b5e648;
        local_2f0 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_300);
        local_278 = local_300;
        local_270 = local_2f8;
        local_2e8 = &PTR_LAB_140b5e648;
        pwStack736 = L"Result";
        local_268 = local_2f0;
        local_2d8 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_2e8);
        local_2e8 = &PTR_LAB_140b5e640;
        local_2a8 = local_2d8;
        uStack672 = CONCAT44(uStack716,iVar5);
        local_330 = 0x141df2710;
        local_368 = &local_278;
        local_2b8 = &PTR_LAB_140b5e640;
        pwStack688 = pwStack736;
        iStack720 = iVar5;
        iVar5 = FUN_1401971e0(&DAT_140c8a778,5,&local_330,&local_2b8);
        local_2e8 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_2d8);
        local_300 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_2f0);
        if (iVar5 != 0) {
            DebugBreak();
        }
        goto LAB_1403e7b00;
    }
    local_340 = (longlong *)0x0;
    local_348 = (longlong *)0x0;
    local_328 = (longlong *)0x0;
    plVar12 = (longlong *)0x0;
    local_318 = (longlong *)0x0;
    local_310 = (longlong *)0x0;
    local_338 = (longlong *)0x0;
    local_320 = (longlong *)0x0;
    local_308 = (longlong *)0x0;
    iVar5 = FUN_1402d9ab0(local_358,lVar7,&local_340);
    plVar4 = local_340;
    plVar13 = plVar10;
    plVar15 = plVar10;
    if (iVar5 < 0) {
        LAB_1403e7a3b:
        FUN_1400035b0(5,0,0,local_350);
        plVar9 = (longlong *)0x0;
        plVar11 = (longlong *)0x0;
        plVar14 = plVar13;
    }
    else {
        plVar14 = plVar10;
        plVar9 = plVar10;
        plVar11 = plVar10;
        if ((*(byte *)(local_330 + 0x10) & 1) == 0) {
            FUN_14001b370(local_258,0x104,L"%s_Low",local_350);
            iVar5 = FUN_1402d9ab0(local_358,local_258,&local_348);
            plVar15 = local_348;
            if (-1 < iVar5) goto LAB_1403e7345;
        }
        else {
            LAB_1403e7345:
            iVar5 = (**(code **)(*plVar4 + 200))(plVar4,&local_328);
            if (-1 < iVar5) {
                local_2b8 = DAT_140c42a08;
                pwStack688 = DAT_140c42a10;
                local_2a8 = DAT_140c42a18;
                uStack672 = DAT_140c42a20;
                local_298 = DAT_140c42a28;
                local_290 = DAT_140c42a30;
                local_288 = DAT_140c42a38;
                FUN_14043ddb0(param_1,&local_2b8);
                local_340 = DAT_140c65878;
                local_348 = local_328;
                if ((DAT_140c65878 != (longlong *)0x0) && (plVar13 = plVar12, local_328 != (longlong *)0x0))
                {
                    plVar12 = (longlong *)FUN_14018b280(&DAT_00001860,0);
                    if (plVar12 != (longlong *)0x0) {
                        plVar12 = (longlong *)FUN_140351a20(plVar12,local_340);
                    }
                    local_368 = (undefined ***)0x0;
                    local_358 = plVar12;
                    uVar6 = FUN_140353720(plVar12,local_348,plVar15,&local_2b8);
                    plVar14 = local_358;
                    local_348 = (longlong *)((ulonglong)local_348 & 0xffffffff00000000 | (ulonglong)uVar6);
                    if ((int)uVar6 < 0) {
                        if (local_358 != (longlong *)0x0) {
                            FUN_1403522c0(local_358);
                            FUN_14018b900(plVar14,0);
                        }
                    }
                    else {
                        (**(code **)(*local_358 + 0x148))(local_358,FUN_14043e900,param_1);
                        (**(code **)(*plVar14 + 0x150))(plVar14,&DAT_14043e960,param_1);
                        (**(code **)(*plVar14 + 0x158))(plVar14,&LAB_1406134b0,param_1);
                        (**(code **)(*plVar14 + 0x160))(plVar14,FUN_14043ecb0,param_1);
                        iVar5 = FUN_1407b6140(plVar14,&local_318);
                        plVar13 = plVar14;
                        if ((-1 < iVar5) && (iVar5 = FUN_1407b6140(plVar14,&local_310), -1 < iVar5)) {
                            iVar5 = FUN_1407b6140(plVar14,&local_338);
                            plVar10 = (longlong *)0x0;
                            if (iVar5 < 0) {
                                FUN_1400035b0(5,0,0,local_350);
                                plVar9 = local_338;
                                plVar11 = (longlong *)0x0;
                            }
                            else {
                                iVar5 = FUN_1407b6140(plVar14,&local_320);
                                if (iVar5 < 0) {
                                    FUN_1400035b0(5,0,0,local_350);
                                    plVar9 = local_338;
                                    plVar11 = local_320;
                                }
                                else {
                                    iVar5 = FUN_1407b6140(plVar14,&local_308);
                                    if (iVar5 < 0) {
                                        FUN_1400035b0(5,0,0,local_350);
                                        plVar9 = local_338;
                                        plVar10 = local_308;
                                        plVar11 = local_320;
                                    }
                                    else {
                                        FUN_140559130(param_1 + 0x70b0);
                                        FUN_1405a7700(param_1 + 0x6d48);
                                        FUN_140019490(param_1 + 0x6d48);
                                        FUN_14062b990(param_1 + 0x71a0);
                                        lVar7 = *(longlong *)(param_1 + 0x6340);
                                        while (lVar7 != 0) {
                                            lVar7 = *(longlong *)(param_1 + 0x6340);
                                            if (lVar7 != 0) {
                                                FUN_14054a080(lVar7);
                                                FUN_14018b900(lVar7,0);
                                            }
                                            lVar7 = *(longlong *)(param_1 + 0x6340);
                                        }
                                        lVar7 = *(longlong *)(param_1 + 0x6348);
                                        while (lVar7 != 0) {
                                            lVar7 = *(longlong *)(param_1 + 0x6348);
                                            if (lVar7 != 0) {
                                                FUN_14054a080(lVar7);
                                                FUN_14018b900(lVar7,0);
                                            }
                                            lVar7 = *(longlong *)(param_1 + 0x6348);
                                        }
                                        if (*(longlong **)(param_1 + 0x7240) != (longlong *)0x0) {
                                            (**(code **)(**(longlong **)(param_1 + 0x7240) + 8))();
                                            *(undefined8 *)(param_1 + 0x7240) = 0;
                                        }
                                        if (*(longlong **)(param_1 + 0x7248) != (longlong *)0x0) {
                                            (**(code **)(**(longlong **)(param_1 + 0x7248) + 8))();
                                            *(undefined8 *)(param_1 + 0x7248) = 0;
                                        }
                                        if (*(longlong **)(param_1 + 0x6fc0) != (longlong *)0x0) {
                                            (**(code **)(**(longlong **)(param_1 + 0x6fc0) + 8))();
                                            *(undefined8 *)(param_1 + 0x6fc0) = 0;
                                        }
                                        if (*(longlong **)(param_1 + 0x6fc8) != (longlong *)0x0) {
                                            (**(code **)(**(longlong **)(param_1 + 0x6fc8) + 8))();
                                            *(undefined8 *)(param_1 + 0x6fc8) = 0;
                                        }
                                        if (*(longlong **)(param_1 + 0x6fd0) != (longlong *)0x0) {
                                            (**(code **)(**(longlong **)(param_1 + 0x6fd0) + 8))();
                                            *(undefined8 *)(param_1 + 0x6fd0) = 0;
                                        }
                                        if (*(longlong **)(param_1 + 0x6fd8) != (longlong *)0x0) {
                                            (**(code **)(**(longlong **)(param_1 + 0x6fd8) + 8))();
                                            *(undefined8 *)(param_1 + 0x6fd8) = 0;
                                        }
                                        if (*(longlong **)(param_1 + 0x6fe0) != (longlong *)0x0) {
                                            (**(code **)(**(longlong **)(param_1 + 0x6fe0) + 8))();
                                            *(undefined8 *)(param_1 + 0x6fe0) = 0;
                                        }
                                        if (*(longlong **)(param_1 + 0x64e8) != (longlong *)0x0) {
                                            (**(code **)(**(longlong **)(param_1 + 0x64e8) + 8))();
                                            *(undefined8 *)(param_1 + 0x64e8) = 0;
                                        }
                                        if (*(longlong **)(param_1 + 0x6630) != (longlong *)0x0) {
                                            (**(code **)(**(longlong **)(param_1 + 0x6630) + 8))();
                                            *(undefined8 *)(param_1 + 0x6630) = 0;
                                        }
                                        if (*(longlong **)(param_1 + 0x6638) != (longlong *)0x0) {
                                            (**(code **)(**(longlong **)(param_1 + 0x6638) + 8))();
                                            *(undefined8 *)(param_1 + 0x6638) = 0;
                                        }
                                        if (*(longlong **)(param_1 + 0x7250) != (longlong *)0x0) {
                                            (**(code **)(**(longlong **)(param_1 + 0x7250) + 8))();
                                            *(undefined8 *)(param_1 + 0x7250) = 0;
                                        }
                                        local_340 = *(longlong **)(param_1 + 0x7278);
                                        local_350 = local_340[2];
                                        FUN_1403fc3f0(&local_350,&local_340);
                                        FUN_140008410(param_1 + 0x7270);
                                        *(longlong **)(param_1 + 0x7248) = plVar14;
                                        *(longlong **)(param_1 + 0x7240) = local_328;
                                        uVar8 = (**(code **)(*plVar14 + 0x20))(plVar14);
                                        plVar10 = local_308;
                                        plVar11 = local_320;
                                        plVar9 = local_338;
                                        *(undefined8 *)(param_1 + 0x7250) = uVar8;
                                        *(longlong **)(param_1 + 0x6fc0) = local_318;
                                        *(longlong **)(param_1 + 0x6fd0) = local_338;
                                        *(longlong **)(param_1 + 0x6fd8) = local_320;
                                        *(longlong **)(param_1 + 0x6fe0) = local_308;
                                        *(longlong **)(param_1 + 0x6fc8) = local_310;
                                        lVar7 = FUN_140200220(0x423);
                                        if (lVar7 == 0) {
                                            uVar16 = 0x3e81cac1;
                                        }
                                        else {
                                            uVar16 = *(undefined4 *)(lVar7 + 0x18);
                                        }
                                        *(undefined4 *)(param_1 + 0x7000) = uVar16;
                                        lVar7 = FUN_140200220(0x423);
                                        if (lVar7 == 0) {
                                            uVar16 = 0x3ff6dc5d;
                                        }
                                        else {
                                            uVar16 = *(undefined4 *)(lVar7 + 0x1c);
                                        }
                                        *(undefined4 *)(param_1 + 0x7004) = uVar16;
                                        lVar7 = FUN_140200220(0x423);
                                        if (lVar7 == 0) {
                                            uVar16 = 0x3e460aa6;
                                        }
                                        else {
                                            uVar16 = *(undefined4 *)(lVar7 + 0x20);
                                        }
                                        *(undefined4 *)(param_1 + 0x7008) = uVar16;
                                        *(undefined (*) [16])(param_1 + 0x6ff0) =
                                                ZEXT1216(CONCAT48(uVar16,(ulonglong)
                                                        (*(uint *)(param_1 + 0x7000) ^ 0x80000000)) ^
                                                         (undefined  [12])0x80000000);
                                        lVar7 = FUN_140200220(0x424);
                                        if (lVar7 == 0) {
                                            uVar16 = 0x3f400000;
                                        }
                                        else {
                                            uVar16 = *(undefined4 *)(lVar7 + 0x18);
                                        }
                                        *(undefined4 *)(param_1 + 0x7020) = uVar16;
                                        lVar7 = FUN_140200220(0x424);
                                        if (lVar7 == 0) {
                                            uVar16 = 0x40400000;
                                        }
                                        else {
                                            uVar16 = *(undefined4 *)(lVar7 + 0x1c);
                                        }
                                        *(undefined4 *)(param_1 + 0x7024) = uVar16;
                                        lVar7 = FUN_140200220(0x424);
                                        if (lVar7 == 0) {
                                            uVar16 = 0x40200000;
                                        }
                                        else {
                                            uVar16 = *(undefined4 *)(lVar7 + 0x24);
                                        }
                                        *(undefined4 *)(param_1 + 0x7028) = uVar16;
                                        lVar7 = FUN_140200220(0x424);
                                        if (lVar7 == 0) {
                                            uVar16 = 0xbf800000;
                                        }
                                        else {
                                            uVar16 = *(undefined4 *)(lVar7 + 0x20);
                                        }
                                        *(undefined (*) [16])(param_1 + 0x7010) =
                                                ZEXT1216(CONCAT48(uVar16,(ulonglong)
                                                        (*(uint *)(param_1 + 0x7020) ^ 0x80000000)));
                                        FUN_1403a0980(param_1);
                                        if (*(undefined8 **)(param_1 + 0x7240) != (undefined8 *)0x0) {
                                            (**(code **)**(undefined8 **)(param_1 + 0x7240))();
                                        }
                                        if (*(undefined8 **)(param_1 + 0x7248) != (undefined8 *)0x0) {
                                            (**(code **)**(undefined8 **)(param_1 + 0x7248))();
                                        }
                                        if (*(undefined8 **)(param_1 + 0x7250) != (undefined8 *)0x0) {
                                            (**(code **)**(undefined8 **)(param_1 + 0x7250))();
                                        }
                                        if (*(undefined8 **)(param_1 + 0x6fc0) != (undefined8 *)0x0) {
                                            (**(code **)**(undefined8 **)(param_1 + 0x6fc0))();
                                        }
                                        if (*(undefined8 **)(param_1 + 0x6fc8) != (undefined8 *)0x0) {
                                            (**(code **)**(undefined8 **)(param_1 + 0x6fc8))();
                                        }
                                        if (*(undefined8 **)(param_1 + 0x6fd0) != (undefined8 *)0x0) {
                                            (**(code **)**(undefined8 **)(param_1 + 0x6fd0))();
                                        }
                                        if (*(undefined8 **)(param_1 + 0x6fd8) != (undefined8 *)0x0) {
                                            (**(code **)**(undefined8 **)(param_1 + 0x6fd8))();
                                        }
                                        if (*(undefined8 **)(param_1 + 0x6fe0) != (undefined8 *)0x0) {
                                            (**(code **)**(undefined8 **)(param_1 + 0x6fe0))();
                                        }
                                        *(longlong *)(param_1 + 0x7258) = local_330;
                                        uVar16 = local_2c8[1];
                                        uVar2 = local_2c8[2];
                                        uVar3 = local_2c8[3];
                                        *(undefined4 *)(param_1 + 0x7260) = *local_2c8;
                                        *(undefined4 *)(param_1 + 0x7264) = uVar16;
                                        *(undefined4 *)(param_1 + 0x7268) = uVar2;
                                        *(undefined4 *)(param_1 + 0x726c) = uVar3;
                                        DAT_140c89aa0 = 0;
                                        if (*(longlong *)(param_1 + 0x7078) != 0) {
                                            FUN_1403b7290();
                                        }
                                        *(undefined8 *)(param_1 + 0x7078) = 0;
                                        if (*(longlong *)(param_1 + 0x7080) != 0) {
                                            FUN_1403b7290();
                                        }
                                        *(undefined8 *)(param_1 + 0x7080) = 0;
                                        iVar5 = FUN_1403e5c80(param_1);
                                        if (-1 < iVar5) {
                                            FUN_1405a6880(param_1);
                                            *(undefined4 *)(param_1 + 0x7b48) = 0;
                                            FUN_1405df340(param_1 + 0x6838);
                                        }
                                    }
                                }
                            }
                            goto LAB_1403e7a50;
                        }
                    }
                }
                goto LAB_1403e7a3b;
            }
        }
    }
    LAB_1403e7a50:
    if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 8))(plVar10);
    }
    if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 8))(plVar11);
    }
    if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 8))(plVar9);
    }
    if (local_310 != (longlong *)0x0) {
        (**(code **)(*local_310 + 8))();
    }
    if (local_318 != (longlong *)0x0) {
        (**(code **)(*local_318 + 8))();
    }
    if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 8))(plVar14);
    }
    if (local_328 != (longlong *)0x0) {
        (**(code **)(*local_328 + 8))();
    }
    if (plVar15 != (longlong *)0x0) {
        (**(code **)(*plVar15 + 8))(plVar15);
    }
    if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4);
    }
    LAB_1403e7b00:
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack904);
    return;
}



undefined8 FUN_1403e7b20(longlong param_1)

{
    int iVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    longlong *plVar5;
    longlong lVar6;
    wchar_t *pwVar7;
    uint uVar8;
    wchar_t *pwVar10;
    longlong *local_res8;
    longlong local_res10;
    undefined **local_328;
    wchar_t *local_320;
    LPVOID local_318;
    wchar_t *local_310;
    undefined **local_308;
    undefined8 local_300;
    LPVOID local_2f8;
    undefined **local_2e8;
    undefined8 local_2e0;
    LPVOID local_2d8;
    undefined **local_2c8;
    wchar_t *local_2c0;
    LPVOID local_2b8;
    wchar_t *local_2b0;
    undefined local_2a8 [48];
    undefined8 *local_278;
    int local_24c;
    longlong local_240;
    undefined8 local_238;
    wchar_t *pwVar9;

    uVar2 = 0;
    *(undefined4 *)(param_1 + 0x1c18) = 0;
    uVar3 = FUN_14063fba0();
    if ((int)uVar3 < 0) {
        return uVar3;
    }
    FUN_1401a72e0(local_2a8);
    FUN_1401a59a0(local_2a8);
    lVar6 = local_240;
    local_24c = 0;
    local_240 = 0;
    if (lVar6 != 0) {
        (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
    }
    FUN_14018b900(local_238,0);
    local_238 = 0;
    local_res8 = (longlong *)0x0;
    iVar1 = FUN_1401b6d00();
    plVar5 = local_res8;
    if (iVar1 < 0) {
        if (-1 < local_24c) {
            local_24c = iVar1;
            puVar4 = (undefined8 *)FUN_14018d540(&local_res10,L"%0.8x %s",iVar1,L"UI\\CombatFloaters.xml")
                    ;
            uVar3 = *puVar4;
            *puVar4 = local_240;
            local_240 = uVar3;
            if (local_res10 != 0) {
                (**(code **)(*(longlong *)(local_res10 + -0x10) + 8))(local_res10 + -0x10);
            }
        }
        iVar1 = local_24c;
        if (local_res8 == (longlong *)0x0) goto LAB_1403e7c40;
        lVar6 = *local_res8;
        plVar5 = local_res8;
    }
    else {
        iVar1 = FUN_1401a7c70(local_2a8,local_res8);
        if (plVar5 == (longlong *)0x0) goto LAB_1403e7c40;
        lVar6 = *plVar5;
    }
    (**(code **)(lVar6 + 8))(plVar5);
    LAB_1403e7c40:
    if (iVar1 < 0) {
        local_300 = 0;
        local_308 = &PTR_LAB_140b5e648;
        local_2f8 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_308);
        local_2e8 = local_308;
        local_2e0 = local_300;
        local_328 = &PTR_LAB_140b5e648;
        local_320 = L"FileName";
        local_2d8 = local_2f8;
        local_318 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_328);
        local_2c0 = local_320;
        local_310 = L"UI\\CombatFloaters.xml";
        local_2b0 = L"UI\\CombatFloaters.xml";
        local_328 = &PTR_LAB_140b5e638;
        local_2c8 = &PTR_LAB_140b5e638;
        local_res8 = (longlong *)0x141df2540;
        local_2b8 = local_318;
        iVar1 = FUN_1401971e0(&DAT_140c8a774,5,&local_res8,&local_2c8,&local_2e8);
        local_328 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_318);
        local_308 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_2f8);
        if (iVar1 != 0) {
            DebugBreak();
        }
    }
    else {
        for (; local_278 != (undefined8 *)0x0; local_278 = (undefined8 *)local_278[9]) {
            plVar5 = (longlong *)(**(code **)*local_278)(local_278);
            if (plVar5 != (longlong *)0x0) {
                lVar6 = (**(code **)(*plVar5 + 0x30))();
                pwVar7 = (wchar_t *)0x0;
                if (lVar6 == 0) {
                    pwVar7 = (wchar_t *)FUN_1401a4f40();
                }
                pwVar10 = L"FloaterConfiguration";
                if (pwVar7 == L"FloaterConfiguration") goto LAB_1403e7ce5;
                pwVar9 = (wchar_t *)0x0;
                if (*pwVar7 != L'\0') {
                    do {
                        uVar8 = (uint)pwVar9;
                        if (((*pwVar10 == L'\0') || (*pwVar7 != *pwVar10)) || (0x7ffffffe < (int)uVar8)) break;
                        pwVar7 = pwVar7 + 1;
                        pwVar10 = pwVar10 + 1;
                        uVar8 = uVar8 + 1;
                        pwVar9 = (wchar_t *)(ulonglong)uVar8;
                    } while (*pwVar7 != L'\0');
                    if (uVar8 == 0x7fffffff) goto LAB_1403e7ce5;
                }
                if ((*pwVar7 == L'\0') && (*pwVar10 == L'\0')) goto LAB_1403e7ce5;
            }
        }
        plVar5 = (longlong *)0x0;
        LAB_1403e7ce5:
        lVar6 = FUN_1401a6b80(plVar5,L"version");
        if ((lVar6 != 0) && (lVar6 = FUN_1401a4f40(lVar6 + 0x20), lVar6 != 0)) {
            uVar2 = FUN_1407e1970(lVar6,0,10);
        }
        *(undefined4 *)(param_1 + 0x1c18) = uVar2;
        FUN_14063fc60(plVar5,param_1 + 0x1c20);
    }
    FUN_1401a76a0(local_2a8);
    return 0;
}



ulonglong FUN_1403e7ea0(longlong param_1,undefined8 *param_2,longlong param_3)

{
    short *psVar1;
    short sVar2;
    u_long uVar3;
    uint uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    longlong *local_res8;
    undefined8 local_res18 [2];
    undefined local_28 [16];

    uVar6 = 0;
    psVar1 = (short *)(param_3 + 8);
    sVar2 = *psVar1;
    uVar5 = uVar6;
    while (sVar2 != 0) {
        uVar5 = uVar5 + 1;
        sVar2 = psVar1[uVar5];
    }
    FUN_14001c480(param_1 + 0x80,psVar1,psVar1 + uVar5);
    uVar5 = FUN_1403e5de0(param_1);
    if ((int)uVar5 < 0) {
        return uVar5;
    }
    *(undefined8 **)(param_1 + 0x7928) = param_2;
    (**(code **)*param_2)(param_2);
    (**(code **)(*DAT_140c65808 + 0x38))
            (DAT_140c65808,&local_res8,*(undefined4 *)(*(longlong *)(param_1 + 0x7928) + 0x98));
    uVar3 = htonl(*(u_long *)((longlong)local_res8 + 0x94));
    uVar3 = ntohl(uVar3);
    *(u_long *)(DAT_140c65898 + 0x60) = uVar3;
    uVar4 = FUN_1403e7b20(param_1);
    if (-1 < (int)uVar4) {
        *(undefined4 *)(param_1 + 0x7150) = 0;
        local_res18[0] = 0x141df24d8;
        FUN_1401a3130(5,2,local_res18,*(undefined4 *)(param_3 + 0x50),(double)*(float *)(param_3 + 0x54)
                ,(double)*(float *)(param_3 + 0x58),(double)*(float *)(param_3 + 0x5c));
        local_28 = ZEXT1216(*(undefined (*) [12])(param_3 + 0x54));
        uVar4 = FUN_1403e70d0(param_1,*(undefined4 *)(param_3 + 0x50),local_28);
        if (-1 < (int)uVar4) goto LAB_1403e7fdc;
    }
    uVar6 = (ulonglong)uVar4;
    LAB_1403e7fdc:
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    return uVar6;
}



ulonglong FUN_1403e84d0(longlong param_1,longlong param_2,float *param_3)

{
    float fVar1;
    float fVar2;
    float fVar3;

    if (*(longlong *)(param_2 + 0x16e8) == 0) {
        if (*(longlong *)(param_1 + 0x16e8) != 0) {
            return 1;
        }
    }
    else if (*(longlong *)(param_1 + 0x16e8) == 0) {
        return 0xffffffff;
    }
    fVar1 = *(float *)(param_1 + 0x11e0) - *param_3;
    fVar2 = *(float *)(param_1 + 0x11e4) - param_3[1];
    fVar3 = fVar1 * fVar1 + fVar2 * fVar2 + 0.0;
    fVar1 = *(float *)(param_2 + 0x11e0) - *param_3;
    fVar2 = *(float *)(param_2 + 0x11e4) - param_3[1];
    fVar1 = fVar1 * fVar1 + fVar2 * fVar2 + 0.0;
    if (fVar3 < fVar1) {
        return 0xffffffff;
    }
    return (ulonglong)(fVar1 < fVar3);
}



undefined8 FUN_1403e8550(longlong param_1,longlong param_2,float *param_3)

{
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;

    if (*(longlong *)(param_2 + 0x16e8) == 0) {
        if (*(longlong *)(param_1 + 0x16e8) != 0) {
            return 0x3f800000;
        }
    }
    else if (*(longlong *)(param_1 + 0x16e8) == 0) {
        return 0xbf800000;
    }
    fVar1 = *(float *)(param_1 + 0x11e0) - *param_3;
    fVar2 = *(float *)(param_1 + 0x11e4) - param_3[1];
    fVar3 = *(float *)(param_2 + 0x11e0) - *param_3;
    fVar4 = *(float *)(param_2 + 0x11e4) - param_3[1];
    fVar2 = fVar2 * fVar2;
    return CONCAT44(fVar2,(fVar1 * fVar1 + fVar2 + 0.0) - (fVar3 * fVar3 + fVar4 * fVar4 + 0.0));
}



undefined FUN_1403e9720(undefined8 param_1,int param_2)

{
    int iVar1;

    if (param_2 != 0) {
        if (param_2 == 1) {
            iVar1 = DAT_140c451b0;
            if (*DAT_140c63750 < DAT_140c451b0) {
                iVar1 = *DAT_140c63750;
            }
            return (&DAT_140c451c0)[iVar1];
        }
        if (param_2 == 2) {
            iVar1 = DAT_140c451f0;
            if (*DAT_140c63750 < DAT_140c451f0) {
                iVar1 = *DAT_140c63750;
            }
            return (&DAT_140c45200)[iVar1];
        }
        if (param_2 != 3) {
            if (param_2 != 4) {
                return 0;
            }
            iVar1 = DAT_140c453f0;
            if (*DAT_140c63750 < DAT_140c453f0) {
                iVar1 = *DAT_140c63750;
            }
            return (&DAT_140c45400)[iVar1];
        }
    }
    iVar1 = DAT_140c45170;
    if (*DAT_140c63750 < DAT_140c45170) {
        iVar1 = *DAT_140c63750;
    }
    return (&DAT_140c45180)[iVar1];
}



undefined FUN_1403e97e0(undefined8 param_1,int param_2)

{
    int iVar1;

    if (param_2 != 0) {
        if (param_2 != 1) {
            if (param_2 == 2) goto LAB_1403e9843;
            if (param_2 != 3) {
                if (param_2 != 4) {
                    return 0;
                }
                iVar1 = DAT_140c45230;
                if (*DAT_140c63750 < DAT_140c45230) {
                    iVar1 = *DAT_140c63750;
                }
                return (&DAT_140c45240)[iVar1];
            }
        }
        iVar1 = DAT_140c45270;
        if (*DAT_140c63750 < DAT_140c45270) {
            iVar1 = *DAT_140c63750;
        }
        return (&DAT_140c45280)[iVar1];
    }
    LAB_1403e9843:
    iVar1 = DAT_140c452b0;
    if (*DAT_140c63750 < DAT_140c452b0) {
        iVar1 = *DAT_140c63750;
    }
    return (&DAT_140c452c0)[iVar1];
}



undefined FUN_1403e9870(undefined8 param_1,int param_2,longlong param_3)

{
    longlong lVar1;
    int iVar2;
    int iVar3;
    bool bVar4;

    lVar1 = DAT_140c65898;
    if (param_2 == 0) {
        LAB_1403e98eb:
        iVar3 = *DAT_140c63750;
        iVar2 = DAT_140c453b0;
        if (iVar3 < DAT_140c453b0) {
            iVar2 = iVar3;
        }
        if ((&DAT_140c453c0)[iVar2] == '\0') {
            iVar2 = DAT_140c45370;
            if (iVar3 < DAT_140c45370) {
                iVar2 = iVar3;
            }
            bVar4 = (&DAT_140c45380)[iVar2] == '\0';
        }
        else {
            if (param_3 == 0) {
                return 1;
            }
            if ((*(int *)(DAT_140c65898 + 0x6ee4) == 3) &&
                (*(int *)(param_3 + 8) == *(int *)(DAT_140c65898 + 0x6ee0))) {
                return 1;
            }
            iVar3 = FUN_1403b48b0(param_3);
            if (iVar3 == 0) {
                return 0;
            }
            if (*(longlong *)(lVar1 + 0x78) == 0) {
                return 0;
            }
            iVar3 = FUN_1403b48b0();
            bVar4 = iVar3 == 0;
        }
        if (!bVar4) {
            return 1;
        }
        return 0;
    }
    if (param_2 != 1) {
        if (param_2 == 2) goto LAB_1403e98eb;
        if (param_2 != 3) {
            if (param_2 != 4) {
                return 0;
            }
            iVar3 = DAT_140c452f0;
            if (*DAT_140c63750 < DAT_140c452f0) {
                iVar3 = *DAT_140c63750;
            }
            return (&DAT_140c45300)[iVar3];
        }
    }
    iVar3 = DAT_140c45330;
    if (*DAT_140c63750 < DAT_140c45330) {
        iVar3 = *DAT_140c63750;
    }
    return (&DAT_140c45340)[iVar3];
}



undefined FUN_1403e9980(undefined8 param_1,int param_2)

{
    int iVar1;

    if (param_2 != 0) {
        if (param_2 != 1) {
            if (param_2 == 2) goto LAB_1403e99e3;
            if (param_2 != 3) {
                if (param_2 != 4) {
                    return 0;
                }
                iVar1 = DAT_140c45430;
                if (*DAT_140c63750 < DAT_140c45430) {
                    iVar1 = *DAT_140c63750;
                }
                return (&DAT_140c45440)[iVar1];
            }
        }
        iVar1 = DAT_140c45470;
        if (*DAT_140c63750 < DAT_140c45470) {
            iVar1 = *DAT_140c63750;
        }
        return (&DAT_140c45480)[iVar1];
    }
    LAB_1403e99e3:
    iVar1 = DAT_140c454b0;
    if (*DAT_140c63750 < DAT_140c454b0) {
        iVar1 = *DAT_140c63750;
    }
    return (&DAT_140c454c0)[iVar1];
}



undefined FUN_1403e9a10(undefined8 param_1,int param_2)

{
    int iVar1;

    if (param_2 != 0) {
        if (param_2 != 1) {
            if (param_2 == 2) goto LAB_1403e9a73;
            if (param_2 != 3) {
                if (param_2 != 4) {
                    return 0;
                }
                iVar1 = DAT_140c454f0;
                if (*DAT_140c63750 < DAT_140c454f0) {
                    iVar1 = *DAT_140c63750;
                }
                return (&DAT_140c45500)[iVar1];
            }
        }
        iVar1 = DAT_140c45530;
        if (*DAT_140c63750 < DAT_140c45530) {
            iVar1 = *DAT_140c63750;
        }
        return (&DAT_140c45540)[iVar1];
    }
    LAB_1403e9a73:
    iVar1 = DAT_140c45570;
    if (*DAT_140c63750 < DAT_140c45570) {
        iVar1 = *DAT_140c63750;
    }
    return (&DAT_140c45580)[iVar1];
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1403e9aa0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    undefined4 *puVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong *plVar8;
    float fVar9;
    undefined auStack776 [32];
    undefined8 local_2e8;
    longlong local_2e0;
    undefined *local_2d8;
    undefined local_2c8 [16];
    undefined local_2b8 [16];
    undefined4 local_2a8;
    undefined4 uStack676;
    undefined4 uStack672;
    undefined4 uStack668;
    undefined local_298 [16];
    undefined local_288 [16];
    undefined4 local_278;
    undefined4 uStack628;
    undefined4 uStack624;
    undefined4 uStack620;
    undefined4 local_268;
    undefined4 uStack612;
    undefined4 uStack608;
    undefined4 uStack604;
    undefined4 local_258;
    undefined4 uStack596;
    undefined4 uStack592;
    undefined4 uStack588;
    undefined4 local_248;
    undefined4 uStack580;
    undefined4 uStack576;
    undefined4 uStack572;
    undefined4 local_238;
    undefined4 uStack564;
    undefined4 uStack560;
    undefined4 uStack556;
    undefined4 local_228;
    undefined4 uStack548;
    undefined4 uStack544;
    undefined4 uStack540;
    undefined4 local_218;
    undefined4 uStack532;
    undefined4 uStack528;
    undefined4 uStack524;
    undefined4 local_208;
    undefined4 uStack516;
    undefined4 uStack512;
    undefined4 uStack508;
    undefined4 local_1d8;
    undefined4 uStack468;
    undefined4 uStack464;
    undefined4 uStack460;
    longlong *local_198;
    undefined4 local_190;
    undefined local_188 [16];
    undefined4 local_178;
    undefined4 uStack372;
    undefined4 uStack368;
    undefined4 uStack364;
    undefined4 local_168;
    undefined4 uStack356;
    undefined4 uStack352;
    undefined4 uStack348;
    undefined8 local_130;
    undefined *local_128;
    undefined8 local_120;
    code *local_118;
    undefined8 local_d0;
    code *local_c8;
    undefined4 local_c0;
    undefined4 local_bc;
    undefined local_88 [96];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack776;
    DAT_140c7cf80 = DAT_140c7cf80 + (DAT_140c7cf80 - DAT_140c7cf78 >> 4) * -0x10;
    FUN_1407e4830(local_2b8,0);
    local_2a8 = 0;
    uStack676 = 0x3f800000;
    uStack672 = 0x40000000;
    uStack668 = 0x40400000;
    FUN_14054a810(local_298);
    FUN_14054a460(local_288);
    iVar3 = DAT_140c4ce40;
    if (*DAT_140c63750 < DAT_140c4ce40) {
        iVar3 = *DAT_140c63750;
    }
    lVar5 = (ulonglong)*(uint *)(&DAT_140c4ce50 + (longlong)iVar3 * 4) * 0xa0;
    local_278 = *(undefined4 *)(&DAT_140c7d7d0 + lVar5);
    uStack628 = *(undefined4 *)(lVar5 + 0x140c7d7d4);
    uStack624 = *(undefined4 *)(lVar5 + 0x140c7d7d8);
    uStack620 = *(undefined4 *)(lVar5 + 0x140c7d7dc);
    iVar3 = DAT_140c4ce40;
    if (*DAT_140c63750 < DAT_140c4ce40) {
        iVar3 = *DAT_140c63750;
    }
    lVar5 = (ulonglong)*(uint *)(&DAT_140c4ce50 + (longlong)iVar3 * 4) * 0xa0;
    local_268 = *(undefined4 *)(&DAT_140c7d810 + lVar5);
    uStack612 = *(undefined4 *)(lVar5 + 0x140c7d814);
    uStack608 = *(undefined4 *)(lVar5 + 0x140c7d818);
    uStack604 = *(undefined4 *)(lVar5 + 0x140c7d81c);
    iVar3 = DAT_140c4ce40;
    if (*DAT_140c63750 < DAT_140c4ce40) {
        iVar3 = *DAT_140c63750;
    }
    lVar5 = (ulonglong)*(uint *)(&DAT_140c4ce50 + (longlong)iVar3 * 4) * 0xa0;
    local_258 = *(undefined4 *)(&DAT_140c7d790 + lVar5);
    uStack596 = *(undefined4 *)(lVar5 + 0x140c7d794);
    uStack592 = *(undefined4 *)(lVar5 + 0x140c7d798);
    uStack588 = *(undefined4 *)(lVar5 + 0x140c7d79c);
    iVar3 = DAT_140c4ce40;
    if (*DAT_140c63750 < DAT_140c4ce40) {
        iVar3 = *DAT_140c63750;
    }
    lVar5 = (ulonglong)*(uint *)(&DAT_140c4ce50 + (longlong)iVar3 * 4) * 0xa0;
    local_248 = *(undefined4 *)(&DAT_140c7d7f0 + lVar5);
    uStack580 = *(undefined4 *)(lVar5 + 0x140c7d7f4);
    uStack576 = *(undefined4 *)(lVar5 + 0x140c7d7f8);
    uStack572 = *(undefined4 *)(lVar5 + 0x140c7d7fc);
    iVar3 = DAT_140c4ce40;
    if (*DAT_140c63750 < DAT_140c4ce40) {
        iVar3 = *DAT_140c63750;
    }
    lVar5 = (ulonglong)*(uint *)(&DAT_140c4ce50 + (longlong)iVar3 * 4) * 0xa0;
    local_238 = *(undefined4 *)(&DAT_140c7d7c0 + lVar5);
    uStack564 = *(undefined4 *)(lVar5 + 0x140c7d7c4);
    uStack560 = *(undefined4 *)(lVar5 + 0x140c7d7c8);
    uStack556 = *(undefined4 *)(lVar5 + 0x140c7d7cc);
    iVar3 = DAT_140c4ce40;
    if (*DAT_140c63750 < DAT_140c4ce40) {
        iVar3 = *DAT_140c63750;
    }
    lVar5 = (ulonglong)*(uint *)(&DAT_140c4ce50 + (longlong)iVar3 * 4) * 0xa0;
    local_228 = *(undefined4 *)(&DAT_140c7d7a0 + lVar5);
    uStack548 = *(undefined4 *)(lVar5 + 0x140c7d7a4);
    uStack544 = *(undefined4 *)(lVar5 + 0x140c7d7a8);
    uStack540 = *(undefined4 *)(lVar5 + 0x140c7d7ac);
    iVar3 = DAT_140c4ce40;
    if (*DAT_140c63750 < DAT_140c4ce40) {
        iVar3 = *DAT_140c63750;
    }
    lVar5 = (ulonglong)*(uint *)(&DAT_140c4ce50 + (longlong)iVar3 * 4) * 0xa0;
    local_218 = *(undefined4 *)(&DAT_140c7d7b0 + lVar5);
    uStack532 = *(undefined4 *)(lVar5 + 0x140c7d7b4);
    uStack528 = *(undefined4 *)(lVar5 + 0x140c7d7b8);
    uStack524 = *(undefined4 *)(lVar5 + 0x140c7d7bc);
    iVar3 = DAT_140c4ce40;
    if (*DAT_140c63750 < DAT_140c4ce40) {
        iVar3 = *DAT_140c63750;
    }
    lVar5 = (ulonglong)*(uint *)(&DAT_140c4ce50 + (longlong)iVar3 * 4) * 0xa0;
    local_208 = *(undefined4 *)(&DAT_140c7d800 + lVar5);
    uStack516 = *(undefined4 *)(lVar5 + 0x140c7d804);
    uStack512 = *(undefined4 *)(lVar5 + 0x140c7d808);
    uStack508 = *(undefined4 *)(lVar5 + 0x140c7d80c);
    puVar4 = (undefined4 *)
            (**(code **)(**(longlong **)(param_1 + 0x64e8) + 0x200))
            (*(longlong **)(param_1 + 0x64e8),local_2c8,0x3c);
    fVar9 = _DAT_140c77830 * 1.25;
    local_1d8 = *puVar4;
    uStack468 = puVar4[1];
    uStack464 = puVar4[2];
    uStack460 = puVar4[3];
    local_178 = 0x3e800000;
    uStack372 = 0x3e800000;
    uStack368 = 0x3e800000;
    uStack364 = 0x3e800000;
    local_168 = 0x3e800000;
    uStack356 = 0x3e800000;
    uStack352 = 0x3e800000;
    uStack348 = 0x3e800000;
    local_188 = CONCAT412(fRam0000000140c7783c * 1.25,
                          CONCAT48(fRam0000000140c77838 * 1.25,
                                   CONCAT44(fRam0000000140c77834 * 1.25,fVar9)));
    if (*(longlong *)(*(longlong *)(param_1 + 0x7340) + 0xb50) != 0) {
        *(undefined4 *)(param_1 + 0x64e0) = 0;
    }
    if ((*(int *)(param_1 + 0x64e0) != 0) &&
        (lVar5 = FUN_1403d90d0(0x3e800000,fVar9,0x3e800000,param_1), lVar5 != 0)) {
        iVar3 = DAT_140c450b0;
        if (*DAT_140c63750 < DAT_140c450b0) {
            iVar3 = *DAT_140c63750;
        }
        if ((((&DAT_140c450c0)[iVar3] != '\0') &&
             (*(char *)((longlong)*(int **)(lVar5 + 0x1908) + 10) != '\0')) &&
            (((*(uint *)(lVar5 + 0x2c) & 0x200000) == 0 || (**(int **)(lVar5 + 0x1908) != 0x65)))) {
            iVar3 = FUN_14047be40(lVar5);
            if ((iVar3 == 0) && (iVar3 = FUN_14047bf00(lVar5), iVar3 == 0)) {
                local_198 = *(longlong **)(lVar5 + 0x16f0);
                if (local_198 == (longlong *)0x0) {
                    local_198 = *(longlong **)(lVar5 + 0x16f8);
                }
            }
            else {
                lVar5 = FUN_14047b6d0(lVar5);
                local_198 = *(longlong **)(lVar5 + 0x16f0);
                if (local_198 == (longlong *)0x0) {
                    local_198 = *(longlong **)(lVar5 + 0x16f8);
                }
            }
            if (local_198 != (longlong *)0x0) {
                (**(code **)(*local_198 + 0xf8))(local_198,1);
            }
        }
    }
    if ((*(longlong *)(param_1 + 0x78) == 0) || (*(int *)(*(longlong *)(param_1 + 0x78) + 0x250) == 0)
            ) {
        local_190 = *(undefined4 *)(param_1 + 0x73c8);
    }
    local_130 = FUN_14001c280(param_1);
    local_128 = &LAB_1403f7da0;
    local_120 = FUN_14001c280(param_1);
    local_118 = FUN_1403a1aa0;
    local_d0 = FUN_14001c280(param_1);
    local_c8 = FUN_1403ebc30;
    iVar3 = DAT_140c463c0;
    if (*DAT_140c63750 < DAT_140c463c0) {
        iVar3 = *DAT_140c63750;
    }
    local_c0 = *(undefined4 *)(&DAT_140c463d0 + (longlong)iVar3 * 4);
    local_bc = *(undefined4 *)(&DAT_1409d6900 + (ulonglong)*(uint *)(DAT_140c635f0 + 0x16a8) * 4);
    *(undefined4 *)(param_1 + 0x64c8) = *(undefined4 *)(param_1 + 0x64c4);
    if (((*(int *)(param_1 + 0x7450) != 0) || (iVar3 = FUN_14055a260(param_1 + 0x7330), iVar3 != 0))
        || (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x7588) + 0xb8))(), iVar3 == 0)) {
        *(undefined4 *)(param_1 + 0x64c4) = 0;
        *(undefined8 *)(param_1 + 0x64cc) = 0;
    }
    lVar5 = *(longlong *)(param_1 + 0x71a8);
    lVar2 = lVar5;
    lVar6 = lVar5;
    if (lVar5 == 0) {
        lVar5 = *(longlong *)(param_1 + 0x71a0);
        lVar2 = *(longlong *)(param_1 + 0x71a0);
        lVar6 = *(longlong *)(param_1 + 0x71a0);
    }
    plVar8 = *(longlong **)(param_1 + 0x7248);
    lVar1 = *plVar8;
    local_2e0 = lVar2 + 0x1f8;
    lVar7 = lVar6;
    local_2e8 = FUN_1401b20f0(local_88,lVar2 + 0xe0,lVar6,lVar6);
    local_2d8 = local_2b8;
    iVar3 = (**(code **)(lVar1 + 0x1e8))(plVar8,lVar5 + 0x60,lVar6 + 0xa0,lVar7 + 0xe0);
    if (-1 < iVar3) {
        FUN_1403a2060(param_1);
        if (local_198 != (longlong *)0x0) {
            (**(code **)(*local_198 + 0xf8))(local_198,0);
        }
        (**(code **)(*DAT_140c65680 + 0x38))();
        FUN_1403f9160(param_1);
        FUN_1403f6750(param_1);
        FUN_1403f4b90(param_1);
        FUN_1403f52a0();
        FUN_1403f5fd0(param_1);
        if (_DAT_140c89bb4 == 0) {
            (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,0x10);
            if (*(int *)(param_1 + 0x7448) != 0) {
                fVar9 = (float)(***(code ***)(param_1 + 0x7428))();
                fVar9 = 1.0 - fVar9;
                local_2c8 = CONCAT412(fVar9,CONCAT48(0x3f800000,0x3f8000003f800000));
                (**(code **)(*DAT_140c65680 + 0xa8))(0x3f800000,fVar9,fVar9,DAT_140c65680,local_2c8);
            }
            _DAT_140c8a094 = _DAT_140c8a094 + 1;
            *(undefined *)(*(longlong *)(param_1 + 0x7340) + 0x34) = 1;
            FUN_1400e7c40(*(undefined8 *)(param_1 + 0x7340));
            (**(code **)(*DAT_140c65680 + 0x48))();
        }
        FUN_1403f3820(param_1);
        FUN_1403ea100(param_1);
        FUN_1403f52a0();
        if (*(longlong **)(param_1 + 0x7188) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x7188) + 0x18))();
        }
        (**(code **)(*DAT_140c65680 + 0x128))();
        FUN_1403ebfa0(param_1);
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack776);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1403ea100(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    int iVar3;
    undefined8 uVar4;
    int iVar5;
    longlong lVar6;
    undefined8 uVar7;
    int iVar8;
    int iVar9;
    float extraout_XMM0_Da;
    undefined4 extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    undefined4 extraout_XMM0_Da_02;
    float extraout_XMM0_Da_03;
    float extraout_XMM0_Da_04;
    float extraout_XMM0_Da_05;
    float extraout_XMM0_Da_06;
    float extraout_XMM0_Da_07;
    float extraout_XMM0_Da_08;
    float extraout_XMM0_Da_09;
    float fVar10;
    undefined auVar11 [16];
    float fVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    undefined4 local_res8 [2];
    ulonglong in_stack_ffffffffffffff08;
    ulonglong local_c8;
    int local_c0;
    int local_bc;
    undefined local_b8 [16];
    undefined local_a8 [16];
    undefined local_98 [16];
    undefined local_88 [16];
    undefined local_78 [16];

    iVar5 = *(int *)(param_1 + 0x7400);
    if ((iVar5 == 0) && (*(int *)(param_1 + 0x7448) == 0)) {
        return;
    }
    fVar12 = 1.0;
    fVar17 = 0.0;
    if (iVar5 == 1) {
        plVar2 = (longlong *)(param_1 + 0x7408);
        (**(code **)*plVar2)(plVar2);
        if (extraout_XMM0_Da == fVar12) {
            *(undefined4 *)(param_1 + 0x7400) = 2;
            iVar5 = DAT_140c636a8;
            if ((fVar12 != *(float *)(param_1 + 0x7420)) || (*(float *)(param_1 + 0x7424) != 0.0)) {
                *(undefined8 *)(param_1 + 0x7420) = 0x3f800000;
                *(undefined4 *)(param_1 + 0x7418) = 0x3f800000;
                *(int *)(param_1 + 0x7410) = iVar5;
            }
            local_res8[0] = 0x3f800000;
            (**(code **)(*plVar2 + 8))(plVar2,local_res8);
            *(int *)(param_1 + 0x7454) = *(int *)(param_1 + 0x7470) + DAT_140c636a8;
        }
    }
    else if (iVar5 == 2) {
        if ((*(int *)(param_1 + 0x7470) != 0x7fffffff) &&
            (-1 < DAT_140c636a8 - *(int *)(param_1 + 0x7454))) {
            *(undefined4 *)(param_1 + 0x7400) = 3;
            (***(code ***)(param_1 + 0x7408))(param_1 + 0x7408);
            local_res8[0] = extraout_XMM0_Da_00;
            (**(code **)(*(longlong *)(param_1 + 0x7408) + 8))(param_1 + 0x7408,local_res8);
            FUN_1400f9c30(param_1 + 0x7408);
        }
    }
    else if ((iVar5 == 3) && ((***(code ***)(param_1 + 0x7408))(), extraout_XMM0_Da_01 == fVar17)) {
        FUN_14053b770(param_1,0);
    }
    (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,0x17);
    (**(code **)(*DAT_140c65680 + 0x80))();
    lVar6 = (**(code **)(*DAT_140c65670 + 0x248))();
    puVar1 = (undefined8 *)(lVar6 + 8);
    iVar5 = *(int *)puVar1;
    iVar3 = *(int *)(lVar6 + 0xc);
    uVar4 = *puVar1;
    uVar7 = *puVar1;
    if (*(int *)(param_1 + 0x7400) != 0) {
        local_c8 = 0;
        local_c0 = iVar5;
        local_bc = iVar3;
        (***(code ***)(param_1 + 0x7408))();
        local_b8 = CONCAT88(SUB128(CONCAT48(extraout_XMM0_Da_02,
                                            CONCAT44(*(undefined4 *)(param_1 + 0x7468),
                                                     *(undefined4 *)(param_1 + 0x7468))) >> 0x20,0),
                            *(undefined8 *)(param_1 + 0x7460));
        if (*(longlong *)(DAT_140c63650 + 0x738) != 0) {
            in_stack_ffffffffffffff08 =
                    in_stack_ffffffffffffff08 & 0xffffffff00000000 |
                    (ulonglong)
                            (uint)((DAT_140c63664 - *(float *)(DAT_140c63650 + 0x740)) *
                                   *(float *)(DAT_140c63650 + 0x744));
            FUN_140103cf0(*(longlong *)(DAT_140c63650 + 0x738),&local_c8,local_b8,0,
                          in_stack_ffffffffffffff08);
        }
    }
    (**(code **)(*DAT_140c65680 + 0x48))();
    (**(code **)(*DAT_140c65680 + 0x40))();
    (**(code **)(*DAT_140c65680 + 0x80))();
    if (*(int *)(param_1 + 0x7448) != 0) {
        *(undefined4 *)(param_1 + 0x744c) = 0x3f800000;
        fVar10 = (float)iVar5;
        fVar16 = (float)iVar3;
        if (fVar10 / fVar16 <= 1.777778) {
            iVar8 = (iVar3 - (int)(fVar10 * 0.5625)) / 2;
            iVar9 = 0;
        }
        else {
            iVar9 = (iVar5 - (int)(fVar16 * 1.777778)) / 2;
            iVar8 = 0;
        }
        if (iVar8 < iVar9) {
            if ((float)iVar9 < fVar10 * 0.05) {
                iVar9 = (int)(fVar10 * 0.05);
            }
        }
        else if ((float)iVar8 < fVar16 * 0.08) {
            iVar8 = (int)(fVar16 * 0.08);
        }
        if (*(int *)(param_1 + 0x7400) == 0) {
            (***(code ***)(param_1 + 0x7428))();
            iVar8 = (int)(extraout_XMM0_Da_03 * (float)iVar8);
            if (*(int *)(param_1 + 0x7400) == 0) {
                (***(code ***)(param_1 + 0x7428))();
                iVar9 = (int)(extraout_XMM0_Da_04 * (float)iVar9);
            }
        }
        if ((*(int *)(param_1 + 0x7450) == 0) &&
            ((***(code ***)(param_1 + 0x7428))(), extraout_XMM0_Da_05 == fVar17)) {
            *(undefined4 *)(param_1 + 0x7448) = 0;
        }
        fVar10 = fVar12;
        if ((*(int *)(param_1 + 0x7400) != 0) &&
            ((***(code ***)(param_1 + 0x7428))(), extraout_XMM0_Da_06 < fVar12)) {
            (***(code ***)(param_1 + 0x7408))();
            fVar10 = extraout_XMM0_Da_07;
        }
        if ((((*(int *)(param_1 + 0x7400) - 1U & 0xfffffffd) != 0) ||
             ((*(int *)(param_1 + 0x7400) == 1 &&
               ((***(code ***)(param_1 + 0x7428))(), fVar12 <= extraout_XMM0_Da_08)))) ||
            ((*(int *)(param_1 + 0x7400) == 3 &&
              ((***(code ***)(param_1 + 0x7428))(), fVar12 <= extraout_XMM0_Da_09)))) {
            fVar12 = fVar17;
            fVar15 = fVar10;
            if (0 < iVar8) {
                uVar13 = 0;
                local_c8 = 0;
                uVar14 = 0;
                local_b8 = CONCAT412(fVar10,ZEXT412((uint)fVar17) << 0x20);
                local_c0 = iVar5;
                if (*(longlong *)(DAT_140c63650 + 0x738) != 0) {
                    in_stack_ffffffffffffff08 =
                            in_stack_ffffffffffffff08 & 0xffffffff00000000 |
                            (ulonglong)
                                    (uint)((DAT_140c63664 - *(float *)(DAT_140c63650 + 0x740)) *
                                           *(float *)(DAT_140c63650 + 0x744));
                    local_bc = iVar8;
                    FUN_140103cf0(*(longlong *)(DAT_140c63650 + 0x738),&local_c8,local_b8,0,
                                  in_stack_ffffffffffffff08);
                }
                local_a8 = CONCAT412(fVar10,CONCAT48(uVar14,CONCAT44(fVar17,uVar13)));
                local_c8 = local_c8 & 0xffffffff | (ulonglong)(uint)(iVar3 - iVar8) << 0x20;
                local_bc = iVar3;
                if (*(longlong *)(DAT_140c63650 + 0x738) != 0) {
                    in_stack_ffffffffffffff08 =
                            in_stack_ffffffffffffff08 & 0xffffffff00000000 |
                            (ulonglong)
                                    (uint)((DAT_140c63664 - *(float *)(DAT_140c63650 + 0x740)) *
                                           *(float *)(DAT_140c63650 + 0x744));
                    FUN_140103cf0(*(longlong *)(DAT_140c63650 + 0x738),&local_c8,local_a8,0,
                                  in_stack_ffffffffffffff08);
                }
                *(float *)(param_1 + 0x744c) = fVar16 / (fVar16 - (float)iVar8 * 2.0);
            }
            if (0 < iVar9) {
                uVar13 = 0;
                local_c8 = 0;
                uVar14 = 0;
                local_88 = CONCAT412(fVar15,ZEXT412((uint)fVar12) << 0x20);
                local_bc = iVar3;
                if (*(longlong *)(DAT_140c63650 + 0x738) != 0) {
                    in_stack_ffffffffffffff08 =
                            in_stack_ffffffffffffff08 & 0xffffffff00000000 |
                            (ulonglong)
                                    (uint)((DAT_140c63664 - *(float *)(DAT_140c63650 + 0x740)) *
                                           *(float *)(DAT_140c63650 + 0x744));
                    local_c0 = iVar9;
                    FUN_140103cf0(*(longlong *)(DAT_140c63650 + 0x738),&local_c8,local_88,0,
                                  in_stack_ffffffffffffff08);
                }
                local_78 = CONCAT412(fVar15,CONCAT48(uVar14,CONCAT44(fVar12,uVar13)));
                local_c8 = local_c8 & 0xffffffff00000000 | (ulonglong)(uint)(iVar5 - iVar9);
                local_c0 = iVar5;
                if (*(longlong *)(DAT_140c63650 + 0x738) != 0) {
                    FUN_140103cf0(*(longlong *)(DAT_140c63650 + 0x738),&local_c8,local_78,0,
                                  in_stack_ffffffffffffff08 & 0xffffffff00000000 |
                                  (ulonglong)
                                          (uint)((DAT_140c63664 - *(float *)(DAT_140c63650 + 0x740)) *
                                                 *(float *)(DAT_140c63650 + 0x744)));
                }
            }
        }
        else {
            local_78._0_8_ = CONCAT44(uRam0000000140c777d4,_DAT_140c777d0);
            local_78._0_12_ = CONCAT48(uRam0000000140c777d8,local_78._0_8_);
            local_78 = CONCAT412(uRam0000000140c777dc,local_78._0_12_);
        }
        if ((*(int *)(param_1 + 0x7450) != 0) &&
            (plVar2 = *(longlong **)(param_1 + 0x7488), plVar2 != (longlong *)0x0)) {
            local_78 = local_78 & (undefined  [16])0xffffffff00000000;
            iVar5 = (**(code **)(*plVar2 + 0xd8))(plVar2,local_78);
            if (iVar5 != 0) {
                iVar5 = DAT_140c45f00;
                if (*DAT_140c63750 < DAT_140c45f00) {
                    iVar5 = *DAT_140c63750;
                }
                if (((&DAT_140c45f10)[iVar5] != '\0') || (*(int *)(param_1 + 0x7498) != 0)) {
                    (**(code **)(*DAT_140c65680 + 0x80))();
                    local_a8 = ZEXT416(0);
                    local_78._0_8_ = CONCAT44(uRam0000000140c777d4,_DAT_140c777d0);
                    local_78._0_12_ = CONCAT48(uRam0000000140c777d8,local_78._0_8_);
                    local_78 = CONCAT412(uRam0000000140c777dc,local_78._0_12_);
                    local_88._0_12_ = CONCAT48(0x3f800000,0x3f8000003f800000);
                    local_88 = CONCAT412(0x3f800000,local_88._0_12_);
                    local_98._0_8_ = CONCAT44((float)iVar3 + -10.0,(float)(int)uVar7);
                    local_98 = ZEXT816(local_98._0_8_);
                    (**(code **)(*DAT_140c65680 + 0x110))
                            (DAT_140c65680,*(undefined8 *)(param_1 + 0x7488),0,0xffffffffffffffff,local_a8,
                             0x19,local_88,local_78,1);
                }
            }
        }
        if ((*(longlong *)(param_1 + 0x7340) != 0) && (*(longlong *)(param_1 + 0x7490) == 0)) {
            uVar7 = FUN_14034bdd0();
            lVar6 = FUN_1400e58c0(*(undefined8 *)(param_1 + 0x7340),L"Subtitle");
            (**(code **)(*DAT_140c65680 + 0x28))
                    (DAT_140c65680,*(undefined8 *)(lVar6 + 0x60),uVar7,0xffffffffffffffff,
                     (longlong *)(param_1 + 0x7490));
        }
        if ((*(int *)(param_1 + 0x7450) != 0) &&
            (plVar2 = *(longlong **)(param_1 + 0x7490), plVar2 != (longlong *)0x0)) {
            local_78 = local_78 & (undefined  [16])0xffffffff00000000;
            iVar5 = (**(code **)(*plVar2 + 0xd8))(plVar2,local_78);
            if ((iVar5 != 0) &&
                ((plVar2 = *(longlong **)(param_1 + 0x7198), *(int *)(plVar2 + 3) != 0 &&
                                                             (iVar5 = *(int *)((longlong)plVar2 + 0xc), iVar5 != 0)))) {
                if (iVar5 == 1) {
                    if (*(longlong *)(*plVar2 + 8) == 0) goto LAB_1403ea9d1;
                }
                else if (iVar5 != 2) goto LAB_1403ea9d1;
                iVar5 = DAT_140c45d90;
                if (*DAT_140c63750 < DAT_140c45d90) {
                    iVar5 = *DAT_140c63750;
                }
                if ((&DAT_140c45da0)[iVar5] != '\0') {
                    (**(code **)(*DAT_140c65680 + 0x80))();
                    local_78._0_8_ = CONCAT44(uRam0000000140c777d4,_DAT_140c777d0);
                    local_78._0_12_ = CONCAT48(uRam0000000140c777d8,local_78._0_8_);
                    local_78 = CONCAT412(uRam0000000140c777dc,local_78._0_12_);
                    auVar11 = ZEXT416(0x41200000) & (undefined  [16])0xffffffffffffffff;
                    local_a8 = CONCAT412(SUB164(auVar11 >> 0x60,0) - -10.0,
                                         CONCAT48(SUB164(auVar11 >> 0x40,0) - -10.0,
                                                  CONCAT44(0x41200000,SUB164(auVar11,0))));
                    local_98._0_8_ = CONCAT44((float)iVar3 + -10.0,(float)(int)uVar4 + -10.0);
                    local_98 = CONCAT412(0xc1200000,CONCAT48(0xc1200000,local_98._0_8_));
                    local_88._0_12_ = CONCAT48(0x3f800000,0x3f8000003f800000);
                    local_88 = CONCAT412(0x3f800000,local_88._0_12_);
                    (**(code **)(*DAT_140c65680 + 0x110))
                            (DAT_140c65680,*(undefined8 *)(param_1 + 0x7490),0,0xffffffffffffffff,local_a8,
                             0x12,local_88,local_78,1);
                }
            }
        }
    }
    LAB_1403ea9d1:
    (**(code **)(*DAT_140c65680 + 0x48))();
    return;
}



void FUN_1403eaa20(undefined8 param_1,longlong *param_2)

{
    longlong **pplVar1;
    uint uVar2;
    longlong *plVar3;
    undefined *puVar4;
    longlong lVar5;
    undefined *puVar6;
    undefined *puVar7;
    longlong **pplVar8;
    longlong **local_res8;
    undefined4 uStack68;
    undefined local_38 [8];
    undefined *local_30;
    longlong local_28;

    pplVar8 = (longlong **)(DAT_140c65898 + 0x72e8);
    if (*param_2 == 0) {
        *param_2 = (longlong)pplVar8;
        pplVar1 = (longlong **)(param_2 + 1);
        *pplVar1 = *pplVar8;
        *pplVar8 = param_2;
        if (*pplVar1 != (longlong *)0x0) {
            **pplVar1 = (longlong)pplVar1;
        }
    }
    local_res8 = (longlong **)*pplVar8;
    *pplVar8 = (longlong *)0x0;
    if (local_res8 != (longlong **)0x0) {
        *local_res8 = (longlong *)&local_res8;
    }
    local_30 = (undefined *)FUN_14018b280(0x30);
    local_28 = 0;
    *local_30 = 0;
    *(undefined8 *)(local_30 + 8) = 0;
    *(undefined **)(local_30 + 0x10) = local_30;
    *(undefined **)(local_30 + 0x18) = local_30;
    pplVar1 = local_res8;
    do {
        local_res8 = pplVar1;
        if (pplVar1 == (longlong **)0x0) {
            puVar6 = *(undefined **)(local_30 + 0x10);
            while (puVar6 != local_30) {
                plVar3 = *(longlong **)(puVar6 + 0x28);
                if (*plVar3 == 0) {
                    *plVar3 = (longlong)pplVar8;
                    pplVar1 = (longlong **)(plVar3 + 1);
                    *pplVar1 = *pplVar8;
                    *pplVar8 = plVar3;
                    if (*pplVar1 != (longlong *)0x0) {
                        **pplVar1 = (longlong)pplVar1;
                    }
                }
                puVar7 = *(undefined **)(puVar6 + 0x18);
                if (puVar7 == (undefined *)0x0) {
                    puVar7 = *(undefined **)(puVar6 + 8);
                    if (puVar6 == *(undefined **)(puVar7 + 0x18)) {
                        do {
                            puVar6 = puVar7;
                            puVar7 = *(undefined **)(puVar6 + 8);
                        } while (puVar6 == *(undefined **)(puVar7 + 0x18));
                    }
                    if (*(undefined **)(puVar6 + 0x18) != puVar7) {
                        puVar6 = puVar7;
                    }
                }
                else {
                    for (puVar4 = *(undefined **)(puVar7 + 0x10); puVar6 = puVar7, puVar4 != (undefined *)0x0;
                         puVar4 = *(undefined **)(puVar4 + 0x10)) {
                        puVar7 = puVar4;
                    }
                }
            }
            FUN_140008410(local_38);
            FUN_14018b900(local_30,0);
            if (local_res8 != (longlong **)0x0) {
                FUN_1401a4a00(&local_res8);
            }
            return;
        }
        if ((longlong **)*pplVar1 != (longlong **)0x0) {
            **pplVar1 = (longlong)pplVar1[1];
        }
        if ((longlong **)pplVar1[1] != (longlong **)0x0) {
            *pplVar1[1] = (longlong)*pplVar1;
        }
        uVar2 = *(uint *)(pplVar1 + 3);
        *pplVar1 = (longlong *)0x0;
        pplVar1[1] = (longlong *)0x0;
        puVar6 = *(undefined **)(local_30 + 8);
        puVar7 = local_30;
        if (*(undefined **)(local_30 + 8) == (undefined *)0x0) {
            LAB_1403eab56:
            lVar5 = FUN_14018b280(0x30);
            if ((undefined8 *)(lVar5 + 0x20) != (undefined8 *)0x0) {
                *(undefined8 *)(lVar5 + 0x20) = CONCAT44(uStack68,uVar2);
                *(longlong ***)(lVar5 + 0x28) = pplVar1;
            }
            *(longlong *)(puVar7 + 0x10) = lVar5;
            if (puVar7 == local_30) {
                *(longlong *)(local_30 + 8) = lVar5;
                *(longlong *)(local_30 + 0x18) = lVar5;
            }
            else if (puVar7 == *(undefined **)(local_30 + 0x10)) {
                *(longlong *)(local_30 + 0x10) = lVar5;
            }
        }
        else {
            do {
                puVar7 = puVar6;
                if (uVar2 < *(uint *)(puVar7 + 0x20)) {
                    puVar6 = *(undefined **)(puVar7 + 0x10);
                }
                else {
                    puVar6 = *(undefined **)(puVar7 + 0x18);
                }
            } while (puVar6 != (undefined *)0x0);
            if ((puVar7 == local_30) || (uVar2 < *(uint *)(puVar7 + 0x20))) goto LAB_1403eab56;
            lVar5 = FUN_14018b280(0x30,0);
            if ((undefined8 *)(lVar5 + 0x20) != (undefined8 *)0x0) {
                *(undefined8 *)(lVar5 + 0x20) = CONCAT44(uStack68,uVar2);
                *(longlong ***)(lVar5 + 0x28) = pplVar1;
            }
            *(longlong *)(puVar7 + 0x18) = lVar5;
            if (puVar7 == *(undefined **)(local_30 + 0x18)) {
                *(longlong *)(local_30 + 0x18) = lVar5;
            }
        }
        *(undefined **)(lVar5 + 8) = puVar7;
        *(undefined8 *)(lVar5 + 0x10) = 0;
        *(undefined8 *)(lVar5 + 0x18) = 0;
        FUN_1400081c0(lVar5,local_30 + 8);
        local_28 = local_28 + 1;
        pplVar1 = local_res8;
    } while( true );
}



void FUN_1403eac90(void)

{
    longlong lVar1;
    undefined4 local_28 [2];
    undefined8 local_20;
    undefined *local_18;
    undefined8 local_10;

    lVar1 = DAT_140c65898;
    if (DAT_140dc2924 == 0) {
        FUN_140195d70(DAT_140c65898 + 0x7370);
        return;
    }
    local_28[0] = 0;
    local_20 = FUN_14001c280(DAT_140c65898);
    local_10 = 0;
    local_18 = &LAB_1403ead10;
    FUN_140195960(lVar1 + 0x7370,DAT_140dc2924,local_28,4);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1403ead20(longlong param_1)

{
    longlong *plVar1;
    char cVar2;
    short sVar6;
    short sVar7;
    short sVar8;
    short sVar9;
    unkbyte10 Var10;
    undefined auVar11 [12];
    undefined auVar12 [14];
    short sVar13;
    undefined4 uVar14;
    undefined6 uVar15;
    ulonglong uVar16;
    float *pfVar17;
    longlong lVar18;
    uint uVar19;
    ulonglong uVar20;
    float fVar21;
    int iVar22;
    int iVar24;
    undefined auVar23 [16];
    int iVar25;
    char cVar26;
    char cVar27;
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
    undefined auStack296 [32];
    undefined8 local_108;
    undefined8 local_100;
    undefined local_f8 [16];
    undefined local_e8 [16];
    undefined local_d8 [16];
    undefined8 local_c8;
    float fStack192;
    float fStack188;
    undefined4 local_b8;
    float fStack180;
    float fStack176;
    float fStack172;
    float local_a8;
    float fStack164;
    float fStack160;
    float fStack156;
    ulonglong local_58;
    char cVar3;
    char cVar4;
    char cVar5;

    local_58 = DAT_140c0f7b0 ^ (ulonglong)auStack296;
    fVar36 = 1.0;
    uVar19 = DAT_140dc23f8;
    if ((DAT_140dc23f8 & 1) == 0) {
        fVar32 = 0.0;
        fVar33 = 0.0;
        fVar34 = 0.0;
        fVar35 = 0.0;
        uVar19 = DAT_140dc23f8 | 1;
        local_c8 = (undefined *)CONCAT44(fRam0000000140c77884,_DAT_140c77880);
        fStack192 = fRam0000000140c77888;
        fStack188 = fRam0000000140c7788c;
        auVar23 = ZEXT416((uint)(0.0 - _DAT_140c77880)) & (undefined  [16])0xffffffffffffffff;
        local_b8 = SUB164(auVar23,0);
        fStack180 = 0.0 - fRam0000000140c77884;
        fStack176 = SUB164(auVar23 >> 0x40,0) - fRam0000000140c77888;
        fStack172 = SUB164(auVar23 >> 0x60,0) - fRam0000000140c7788c;
        local_a8 = _DAT_140c77870;
        fStack164 = fRam0000000140c77874;
        fStack160 = fRam0000000140c77878;
        fStack156 = fRam0000000140c7787c;
        DAT_140dc23f8 = uVar19;
        pfVar17 = (float *)FUN_1401add80(&local_b8);
        _DAT_140dc2408 = fVar32 - *pfVar17;
        _DAT_140dc2418 = fVar33 - pfVar17[1];
        _DAT_140dc2428 = fVar34 - pfVar17[2];
        fVar37 = fVar35 - pfVar17[3];
        local_e8 = CONCAT412(fVar37,CONCAT48(_DAT_140dc2428,CONCAT44(_DAT_140dc2418,_DAT_140dc2408)));
        fVar28 = fStack164 * 0.0 - _DAT_140dc2418 * fStack160;
        fVar29 = _DAT_140dc2408 * 0.0 - local_a8 * 0.0;
        fVar30 = _DAT_140dc2418 * local_a8 - _DAT_140dc2408 * fStack164;
        fVar31 = fVar37 * fStack156 - fVar37 * fStack156;
        local_d8 = CONCAT412(fVar31,CONCAT48(fVar30,CONCAT44(fVar29,fVar28)));
        local_f8 = CONCAT412(fVar31 * fVar31,
                             CONCAT48(fVar30 * fVar30,CONCAT44(fVar29 * fVar29,fVar28 * fVar28)));
        uVar20 = (ulonglong)(fVar28 * fVar28 < fVar29 * fVar29);
        lVar18 = 1 - uVar20;
        if (*(float *)(local_f8 + uVar20 * 4) <= 0.0 && *(float *)(local_f8 + uVar20 * 4) != 0.0) {
            uVar20 = 2;
        }
        auVar23 = ZEXT416((uint)(*(float *)(local_f8 + (lVar18 + uVar20) * -4 + 0xc) +
                                 *(float *)(local_f8 + lVar18 * 4))) &
                  (undefined  [16])0xffffffffffffffff;
        fVar21 = SUB164(auVar23,0) + *(float *)(local_f8 + uVar20 * 4);
        auVar23 = CONCAT124(SUB1612(auVar23 >> 0x20,0),fVar21);
        if (DAT_140c3d7d8 < fVar21) {
            auVar23 = sqrtps(auVar23,auVar23);
            fVar34 = fVar36 / SUB164(auVar23,0);
            fVar32 = fVar28 * fVar34;
            fVar33 = fVar29 * fVar34;
            fVar34 = fVar30 * fVar34;
            fVar35 = fVar31 * fVar31;
        }
        _DAT_140dc240c = 0;
        _DAT_140dc241c = 0;
        _DAT_140dc242c = 0;
        _DAT_140dc2404 = _DAT_140dc2418 * 0.0 - fVar33 * _DAT_140dc2428;
        _DAT_140dc2414 = fVar32 * _DAT_140dc2428 - _DAT_140dc2408 * 0.0;
        _DAT_140dc2424 = fVar33 * _DAT_140dc2408 - fVar32 * _DAT_140dc2418;
        fVar28 = local_c8._4_4_ * fVar33;
        fVar29 = fStack192 * fVar34;
        fVar30 = fStack188 * fVar35;
        local_f8 = CONCAT115((char)((uint)fVar30 >> 0x18),
                             CONCAT114((char)((uint)fVar30 >> 0x10),
                                       CONCAT113((char)((uint)fVar30 >> 8),
                                                 CONCAT112(SUB41(fVar30,0),
                                                           CONCAT111((char)((uint)fVar29 >> 0x18),
                                                                     CONCAT110((char)((uint)fVar29 >>
                                                                                                   0x10),
                                                                               CONCAT19((char)((uint)
                                                                                                fVar29 >> 8),
                                                                                        CONCAT18(SUB41(fVar29,0),
                                                                                                 CONCAT17((char)((uint)fVar28 >> 0x18),
                                                                                                          CONCAT16((char)((uint)fVar28 >>
                                                                                                                                       0x10),
                                                                                                                   CONCAT15((char)((uint)
                                                                                                                                    fVar28 >> 8),
                                                                                                                            CONCAT14(SUB41(fVar28,0),(float)local_c8 * fVar32)
                                                                                                                   )))))))))));
        uVar20 = (ulonglong)((float)local_c8 * fVar32 < fVar28);
        lVar18 = 1 - uVar20;
        if (*(float *)(local_f8 + uVar20 * 4) <= 0.0 && *(float *)(local_f8 + uVar20 * 4) != 0.0) {
            uVar20 = 2;
        }
        local_f8 = CONCAT412((fVar35 * fVar37 - fVar35 * fVar37) * fStack188,
                             CONCAT48(_DAT_140dc2424 * fStack192,
                                      CONCAT44(_DAT_140dc2414 * local_c8._4_4_,
                                               _DAT_140dc2404 * (float)local_c8)));
        _DAT_140dc2430 =
                (uint)(*(float *)(local_f8 + (lVar18 + uVar20) * -4 + 0xc) +
                       *(float *)(local_f8 + lVar18 * 4) + *(float *)(local_f8 + uVar20 * 4)) ^ 0x80000000;
        uVar20 = (ulonglong)(_DAT_140dc2404 * (float)local_c8 < _DAT_140dc2414 * local_c8._4_4_);
        lVar18 = 1 - uVar20;
        if (*(float *)(local_f8 + uVar20 * 4) <= 0.0 && *(float *)(local_f8 + uVar20 * 4) != 0.0) {
            uVar20 = 2;
        }
        local_f8 = CONCAT412(fStack188 * fVar37,
                             CONCAT48(fStack192 * _DAT_140dc2428,
                                      CONCAT44(local_c8._4_4_ * _DAT_140dc2418,
                                               (float)local_c8 * _DAT_140dc2408)));
        _DAT_140dc2434 =
                (uint)(*(float *)(local_f8 + (lVar18 + uVar20) * -4 + 0xc) +
                       *(float *)(local_f8 + lVar18 * 4) + *(float *)(local_f8 + uVar20 * 4)) ^ 0x80000000;
        uVar20 = (ulonglong)((float)local_c8 * _DAT_140dc2408 < local_c8._4_4_ * _DAT_140dc2418);
        _DAT_140dc243c = 0x3f800000;
        lVar18 = 1 - uVar20;
        if (*(float *)(local_f8 + uVar20 * 4) <= 0.0 && *(float *)(local_f8 + uVar20 * 4) != 0.0) {
            uVar20 = 2;
        }
        _DAT_140dc2438 =
                (uint)(*(float *)(local_f8 + (lVar18 + uVar20) * -4 + 0xc) +
                       *(float *)(local_f8 + lVar18 * 4) + *(float *)(local_f8 + uVar20 * 4)) ^ 0x80000000;
        _DAT_140dc2400 = fVar32;
        _DAT_140dc2410 = fVar33;
        _DAT_140dc2420 = fVar34;
    }
    if ((uVar19 & 2) == 0) {
        uVar19 = uVar19 | 2;
        local_c8 = &DAT_140dc2400;
        DAT_140dc23f8 = uVar19;
        FUN_1401afc20(&local_c8,&DAT_140dc2440);
    }
    if ((uVar19 & 4) == 0) {
        uVar19 = uVar19 | 4;
        DAT_140dc2480 = -100.0;
        DAT_140dc2484 = 100.0;
        DAT_140dc23f8 = uVar19;
    }
    if ((uVar19 & 8) == 0) {
        uVar19 = uVar19 | 8;
        _DAT_140dc24b0 = 0;
        _DAT_140dc24bc = 0;
        _DAT_140dc24c0 = 0x80000000;
        _DAT_140dc24c4 = 0x80000000;
        _DAT_140dc24cc = 0x3f800000;
        _DAT_140dc24a0 = 0;
        uRam0000000140dc24a4 = 0x3f800000;
        uRam0000000140dc24a8 = 0;
        uRam0000000140dc24ac = 0;
        _DAT_140dc2490 = 0x3f800000;
        uRam0000000140dc2494 = 0;
        uRam0000000140dc2498 = 0;
        uRam0000000140dc249c = 0;
        _DAT_140dc24b8 = fVar36 / (DAT_140dc2480 - DAT_140dc2484);
        _DAT_140dc24c8 = _DAT_140dc24b8 * DAT_140dc2480;
        DAT_140dc23f8 = uVar19;
    }
    if ((uVar19 & 0x10) == 0) {
        DAT_140dc23f8 = uVar19 | 0x10;
        FUN_1407e4830(&DAT_140dc24d0,0,0x310);
    }
    fVar34 = 0.003921569;
    for (lVar18 = *(longlong *)(param_1 + 0x73c0); lVar18 != 0; lVar18 = *(longlong *)(lVar18 + 0x70))
    {
        // WARNING: Read-only address (ram,0x000140b7b240) is written
        if (((1 < *(int *)(lVar18 + 0x48)) &&
             (fVar34 < *(float *)(lVar18 + 0x5c) || fVar34 == *(float *)(lVar18 + 0x5c))) &&
            (plVar1 = *(longlong **)(lVar18 + 0x38), plVar1 != (longlong *)0x0)) {
            (**(code **)(*plVar1 + 0x128))(plVar1,1);
            (**(code **)(**(longlong **)(lVar18 + 0x38) + 0x140))();
            (**(code **)(**(longlong **)(lVar18 + 0x38) + 0x70))();
        }
    }
    // WARNING: Read-only address (ram,0x000140b7b240) is written
    (**(code **)(**(longlong **)(param_1 + 0x73b8) + 0x30))
            (*(longlong **)(param_1 + 0x73b8),DAT_140c636a8,0);
    (**(code **)(**(longlong **)(param_1 + 0x73b8) + 0x40))
            (*(longlong **)(param_1 + 0x73b8),(longlong)*(float *)(param_1 + 0x72c0));
    local_108 = (ulonglong)local_108._4_4_ << 0x20;
    (**(code **)(**(longlong **)(param_1 + 0x73b8) + 0x50))
            (*(longlong **)(param_1 + 0x73b8),&DAT_140dc2400,&DAT_140dc2440,&DAT_140dc2480);
    for (lVar18 = *(longlong *)(param_1 + 0x73c0); lVar18 != 0; lVar18 = *(longlong *)(lVar18 + 0x70))
    {
        // WARNING: Read-only address (ram,0x000140b7b240) is written
        if ((1 < *(int *)(lVar18 + 0x48)) &&
            (fVar34 < *(float *)(lVar18 + 0x5c) || fVar34 == *(float *)(lVar18 + 0x5c))) {
            plVar1 = *(longlong **)(lVar18 + 0x38);
            if (plVar1 == (longlong *)0x0) {
                if (*(longlong *)(lVar18 + 0x40) != 0) {
                    (**(code **)(*DAT_140c65670 + 0x120))();
                    (**(code **)(*DAT_140c65670 + 0x140))(DAT_140c65670,*(undefined8 *)(param_1 + 0x7b98),0);
                    (**(code **)(*DAT_140c65670 + 0x178))(DAT_140c65670,*(undefined8 *)(param_1 + 0x7b80),1);
                    local_108 = 0;
                    (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,0);
                    (**(code **)(*DAT_140c65670 + 0x1d0))(DAT_140c65670,4);
                    local_100 = 0;
                    local_108 = 0;
                    auVar23 = maxps(ZEXT816(0) & (undefined  [16])0xffffffff,
                                    CONCAT412(*(undefined4 *)(lVar18 + 0x5c),
                                              CONCAT48(0x3f800000,CONCAT44(fVar36,0x3f800000))));
                    auVar23 = minps(auVar23,_DAT_140b7b240);
                    iVar22 = (int)(SUB164(auVar23,0) * 255.0 + 0.5);
                    uVar19 = (uint)(SUB164(auVar23 >> 0x20,0) * 255.0 + 0.5);
                    iVar24 = (int)(SUB164(auVar23 >> 0x40,0) * 255.0 + 0.5);
                    iVar25 = (int)(SUB164(auVar23 >> 0x60,0) * 255.0 + 0.5);
                    cVar26 = (char)((uint)iVar22 >> 0x10);
                    cVar27 = (char)((uint)iVar25 >> 0x10);
                    uVar16 = (ulonglong)
                            CONCAT16((char)(uVar19 >> 0x10),
                                     CONCAT15((char)(uVar19 >> 8),CONCAT14((char)uVar19,iVar24)));
                    uVar20 = ((ulonglong)uVar19 & 0xff000000) << 0x20 | uVar16;
                    Var10 = CONCAT19((char)((uint)iVar22 >> 8),CONCAT18((char)iVar22,uVar20));
                    auVar11 = CONCAT111((char)((uint)iVar22 >> 0x18),CONCAT110(cVar26,Var10));
                    auVar12 = CONCAT113((char)((uint)iVar25 >> 8),CONCAT112((char)iVar25,auVar11));
                    sVar6 = (short)iVar24;
                    cVar2 = (0 < sVar6) * (sVar6 < 0xff) * (char)iVar24 - (0xff < sVar6);
                    sVar6 = (short)(uVar16 >> 0x10);
                    sVar7 = (short)(uVar16 >> 0x20);
                    cVar3 = (0 < sVar7) * (sVar7 < 0xff) * (char)(uVar16 >> 0x20) - (0xff < sVar7);
                    sVar7 = (short)(uVar20 >> 0x30);
                    sVar8 = (short)((unkuint10)Var10 >> 0x40);
                    cVar4 = (0 < sVar8) * (sVar8 < 0xff) * (char)iVar22 - (0xff < sVar8);
                    sVar8 = SUB122(auVar11 >> 0x50,0);
                    sVar9 = SUB142(auVar12 >> 0x60,0);
                    cVar5 = (0 < sVar9) * (sVar9 < 0xff) * (char)iVar25 - (0xff < sVar9);
                    sVar9 = SUB162(CONCAT115((char)((uint)iVar25 >> 0x18),CONCAT114(cVar27,auVar12)) >> 0x70,0
                    );
                    sVar13 = CONCAT11((0 < sVar6) * (sVar6 < 0xff) * (char)(uVar16 >> 0x10) - (0xff < sVar6),
                                      cVar2);
                    uVar14 = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * (char)(uVar16 >> 0x30) - (0xff < sVar7),
                                      CONCAT12(cVar3,sVar13));
                    uVar15 = CONCAT15((0 < sVar8) * (sVar8 < 0xff) * cVar26 - (0xff < sVar8),
                                      CONCAT14(cVar4,uVar14));
                    sVar6 = (short)((uint)uVar14 >> 0x10);
                    sVar7 = (short)((uint6)uVar15 >> 0x20);
                    sVar8 = (short)(CONCAT17((0 < sVar9) * (sVar9 < 0xff) * cVar27 - (0xff < sVar9),
                                             CONCAT16(cVar5,uVar15)) >> 0x30);
                    (**(code **)(*DAT_140c65670 + 0x298))
                            (DAT_140c65670,
                             CONCAT13((0 < sVar8) * (sVar8 < 0xff) * cVar5 - (0xff < sVar8),
                                      CONCAT12((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                                               CONCAT11((0 < sVar6) * (sVar6 < 0xff) * cVar3 -
                                                        (0xff < sVar6),
                                                        (0 < sVar13) * (sVar13 < 0xff) * cVar2 -
                                                        (0xff < sVar13)))));
                }
            }
            else {
                (**(code **)(*plVar1 + 0x140))(plVar1,1);
                (**(code **)(**(longlong **)(param_1 + 0x73b8) + 0x88))();
            }
        }
    }
    // WARNING: Read-only address (ram,0x000140b7b240) is written
    FUN_1407db4f0(local_58 ^ (ulonglong)auStack296);
    return;
}



void FUN_1403eb3c0(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                   undefined8 param_5,longlong param_6)

{
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    if (param_4 == 0) {
        if (*(int *)(param_6 + 0x48) == 2) {
            local_1c = 0;
            local_14 = 0;
            local_c = 0;
            local_20 = 0x3f800000;
            local_28 = 0x96;
            (**(code **)(*param_1 + 0x248))(param_1,0,&local_28);
        }
        else if (*(int *)(param_6 + 0x48) == 3) {
            FUN_1403e59a0();
            return;
        }
    }
    return;
}



void FUN_1403eb430(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
    int **ppiVar1;
    int iVar2;
    ulonglong uVar3;
    longlong lVar4;
    int *piVar5;
    int *piVar6;
    int **ppiVar7;
    int *piVar8;

    ppiVar7 = (int **)(param_1 + 0x73c0);
    for (piVar6 = *ppiVar7; piVar6 != (int *)0x0; piVar6 = *(int **)(piVar6 + 0x1c)) {
        if (*piVar6 == param_2) {
            if (piVar6[0x12] != 3) {
                return;
            }
            FUN_1403e59a0();
            break;
        }
    }
    lVar4 = FUN_1401ffde0(param_2);
    if (lVar4 == 0) {
        return;
    }
    piVar5 = (int *)FUN_14018b280(0x78);
    piVar6 = (int *)0x0;
    piVar8 = piVar6;
    if (piVar5 != (int *)0x0) {
        *(undefined8 *)(piVar5 + 0xe) = 0;
        *(undefined8 *)(piVar5 + 0x10) = 0;
        *(undefined8 *)(piVar5 + 0x1a) = 0;
        *(undefined8 *)(piVar5 + 0x1c) = 0;
        piVar8 = piVar5;
    }
    *piVar8 = param_2;
    iVar2 = *(int *)(lVar4 + 0x24);
    piVar8[4] = param_4;
    piVar8[1] = iVar2;
    piVar8[5] = param_5;
    iVar2 = *(int *)(lVar4 + 0x20);
    piVar8[3] = param_3;
    piVar8[2] = iVar2;
    piVar8[6] = *(int *)(lVar4 + 0x28);
    piVar8[7] = *(int *)(lVar4 + 0x2c);
    piVar8[8] = *(int *)(lVar4 + 0x30);
    piVar8[9] = *(int *)(lVar4 + 0x34);
    piVar8[10] = *(int *)(lVar4 + 0x38);
    piVar8[0xb] = *(int *)(lVar4 + 0x3c);
    piVar8[0xc] = *(int *)(lVar4 + 0x40);
    piVar8[0xd] = *(int *)(lVar4 + 0x44);
    uVar3 = *(ulonglong *)(lVar4 + 0x18);
    if (((uVar3 != 0) && (uVar3 <= DAT_140c3fe70)) && (DAT_140c3fe68 + uVar3 != 0)) {
        piVar5 = piVar6;
        if ((uVar3 != 0) && (uVar3 <= DAT_140c3fe70)) {
            piVar5 = (int *)(DAT_140c3fe68 + uVar3);
        }
        if (*(short *)piVar5 != 0) {
            if ((uVar3 != 0) && (uVar3 <= DAT_140c3fe70)) {
                piVar6 = (int *)(DAT_140c3fe68 + uVar3);
            }
            (**(code **)(**(longlong **)(param_1 + 0x73b8) + 0x28))
                    (*(longlong **)(param_1 + 0x73b8),piVar6,piVar8 + 0xe,0);
            (**(code **)(**(longlong **)(piVar8 + 0xe) + 0x288))
                    (*(longlong **)(piVar8 + 0xe),FUN_1403eb3c0,piVar8);
            goto LAB_1403eb620;
        }
    }
    uVar3 = *(ulonglong *)(lVar4 + 0x10);
    if (((uVar3 != 0) && (uVar3 <= DAT_140c3fe70)) && (DAT_140c3fe68 + uVar3 != 0)) {
        piVar5 = piVar6;
        if ((uVar3 != 0) && (uVar3 <= DAT_140c3fe70)) {
            piVar5 = (int *)(DAT_140c3fe68 + uVar3);
        }
        if (*(short *)piVar5 != 0) {
            if ((uVar3 != 0) && (uVar3 <= DAT_140c3fe70)) {
                piVar6 = (int *)(DAT_140c3fe68 + uVar3);
            }
            (**(code **)(*DAT_140c65670 + 0x50))(DAT_140c65670,piVar6,0,1,1,0x100,0,0,piVar8 + 0x10);
        }
    }
    LAB_1403eb620:
    piVar8[0x12] = 0;
    if (*(longlong *)(piVar8 + 0x1a) == 0) {
        if (*ppiVar7 != (int *)0x0) {
            do {
                piVar6 = *ppiVar7;
                if ((uint)piVar8[2] <= (uint)piVar6[2]) break;
                ppiVar7 = (int **)(piVar6 + 0x1c);
            } while (*(longlong *)(piVar6 + 0x1c) != 0);
        }
        *(int ***)(piVar8 + 0x1a) = ppiVar7;
        ppiVar1 = (int **)(piVar8 + 0x1c);
        *ppiVar1 = *ppiVar7;
        *ppiVar7 = piVar8;
        if (*ppiVar1 != (int *)0x0) {
            *(int ***)(*ppiVar1 + 0x1a) = ppiVar1;
        }
    }
    return;
}



void FUN_1403eb690(undefined8 param_1,int param_2,int param_3,int param_4)

{
    longlong *plVar1;
    int iVar2;
    int *piVar3;
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    piVar3 = *(int **)(DAT_140c65898 + 0x73c0);
    if (piVar3 == (int *)0x0) {
        return;
    }
    while (((*piVar3 != param_2 || (piVar3[4] != param_3)) || (piVar3[5] != param_4))) {
        piVar3 = *(int **)(piVar3 + 0x1c);
        if (piVar3 == (int *)0x0) {
            return;
        }
    }
    if ((1 < piVar3[0x12]) && (plVar1 = *(longlong **)(piVar3 + 0xe), plVar1 != (longlong *)0x0)) {
        iVar2 = (**(code **)(*plVar1 + 0x198))(plVar1,0xa5);
        if (iVar2 != 0) {
            local_28 = 0xa5;
            local_20 = 0x3f800000;
            local_1c = 0;
            local_14 = 0;
            local_c = 0;
            (**(code **)(**(longlong **)(piVar3 + 0xe) + 0x248))(*(longlong **)(piVar3 + 0xe),0,&local_28)
                    ;
            piVar3[0x12] = 3;
            return;
        }
    }
    FUN_1403e59a0(piVar3);
    return;
}



void FUN_1403eb750(longlong param_1)

{
    longlong *plVar1;
    int iVar2;
    uint uVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong lVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    undefined4 local_c8 [4];
    undefined4 local_b8 [4];
    undefined8 local_a8;
    undefined8 local_a0;
    undefined4 local_98;
    undefined4 local_94;
    undefined8 local_90;

    lVar6 = *(longlong *)(param_1 + 0x73c0);
    *(undefined4 *)(param_1 + 0x73c8) = 0x3f800000;
    if (lVar6 != 0) {
        fVar12 = 1.0;
        fVar13 = 0.001;
        fVar14 = 0.5;
        do {
            if (*(int *)(lVar6 + 0x48) < 1) {
                plVar1 = *(longlong **)(lVar6 + 0x38);
                if (plVar1 == (longlong *)0x0) {
                    LAB_1403eb7fc:
                    plVar1 = *(longlong **)(lVar6 + 0x40);
                    if (plVar1 != (longlong *)0x0) {
                        local_b8[0] = 0;
                        iVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,local_b8);
                        if (iVar2 == 0) goto LAB_1403ebbab;
                    }
                    *(undefined4 *)(lVar6 + 0x48) = 1;
                    goto LAB_1403eb823;
                }
                local_c8[0] = 0;
                iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,local_c8,0);
                if (iVar2 != 0) goto LAB_1403eb7fc;
            }
            else {
                LAB_1403eb823:
                if (*(int *)(lVar6 + 0x48) < 2) {
                    *(int *)(lVar6 + 0x4c) = DAT_140c636a8;
                }
                iVar2 = *(int *)(lVar6 + 4);
                fVar9 = 0.0;
                if (iVar2 == 0) {
                    plVar1 = *(longlong **)(param_1 + 0x78);
                    if ((plVar1 != (longlong *)0x0) &&
                        ((*(int *)(plVar1 + 0x4a) == 0 || (*(longlong *)(param_1 + 0x7380) != 0)))) {
                        uVar3 = (**(code **)(*plVar1 + 0x40))(plVar1);
                        fVar9 = (float)(ulonglong)uVar3;
                        uVar3 = (**(code **)(*plVar1 + 0x48))();
                        fVar9 = fVar9 / (float)(ulonglong)uVar3;
                        if ((DAT_140dc27e0 & 1) == 0) {
                            DAT_140dc27e0 = DAT_140dc27e0 | 1;
                            lVar4 = FUN_140200220();
                            DAT_140dc27e4 = fVar12;
                            if (lVar4 != 0) {
                                DAT_140dc27e4 = *(float *)(lVar4 + 0x18);
                            }
                        }
                        if (fVar9 <= DAT_140dc27e4) {
                            iVar2 = DAT_140c45cf0;
                            if (*DAT_140c63750 < DAT_140c45cf0) {
                                iVar2 = *DAT_140c63750;
                            }
                            fVar8 = (DAT_140dc27e4 - fVar9) /
                                    (DAT_140dc27e4 - *(float *)(&DAT_140c45d00 + (longlong)iVar2 * 4));
                            if (fVar12 <= fVar8) {
                                fVar8 = fVar12;
                            }
                            fVar9 = 0.0;
                            if (0.0 <= fVar8) {
                                fVar9 = fVar8;
                            }
                            goto LAB_1403eba3c;
                        }
                    }
                    goto LAB_1403ebba4;
                }
                if (iVar2 == 1) {
                    fVar8 = (float)(ulonglong)(uint)(DAT_140c636a8 - *(int *)(lVar6 + 0x4c)) /
                            (float)(ulonglong)*(uint *)(lVar6 + 0xc);
                    if (fVar12 <= fVar8) {
                        fVar8 = fVar12;
                    }
                    fVar9 = 0.0;
                    if (0.0 <= fVar8) {
                        fVar9 = fVar8;
                    }
                }
                else if (iVar2 == 2) {
                    plVar1 = *(longlong **)(param_1 + 0x78);
                    if ((plVar1 != (longlong *)0x0) &&
                        ((*(int *)(plVar1 + 0x4a) == 0 || (*(longlong *)(param_1 + 0x7380) != 0)))) {
                        uVar3 = (**(code **)(*plVar1 + 0x40))(plVar1);
                        fVar8 = (float)(ulonglong)uVar3;
                        uVar3 = (**(code **)(*plVar1 + 0x48))();
                        fVar8 = fVar8 / (float)(ulonglong)uVar3;
                        if ((DAT_140dc27e0 & 2) == 0) {
                            DAT_140dc27e0 = DAT_140dc27e0 | 2;
                            lVar4 = FUN_140200220();
                            DAT_140dc27e8 = fVar12;
                            if (lVar4 != 0) {
                                DAT_140dc27e8 = *(float *)(lVar4 + 0x18);
                            }
                        }
                        if (fVar8 <= DAT_140dc27e8) {
                            iVar2 = DAT_140c45cf0;
                            if (*DAT_140c63750 < DAT_140c45cf0) {
                                iVar2 = *DAT_140c63750;
                            }
                            fVar8 = (DAT_140dc27e8 - fVar8) /
                                    (DAT_140dc27e8 - *(float *)(&DAT_140c45d00 + (longlong)iVar2 * 4));
                            if (fVar12 <= fVar8) {
                                fVar8 = fVar12;
                            }
                            if (fVar9 <= fVar8) {
                                fVar9 = fVar8;
                            }
                            goto LAB_1403eba3c;
                        }
                    }
                    LAB_1403ebba4:
                    *(undefined4 *)(lVar6 + 0x48) = 1;
                    goto LAB_1403ebbab;
                }
                LAB_1403eba3c:
                iVar2 = DAT_140c636a8;
                if (*(int *)(lVar6 + 0x48) < 2) {
                    plVar1 = *(longlong **)(lVar6 + 0x38);
                    *(float *)(lVar6 + 0x50) = fVar9;
                    *(int *)(lVar6 + 0x4c) = iVar2;
                    *(undefined8 *)(lVar6 + 0x54) = 0;
                    if (plVar1 != (longlong *)0x0) {
                        local_a8 = 0x536;
                        local_a0 = 0x3f800000;
                        local_98 = 0;
                        local_90 = 0;
                        local_94 = 3;
                        (**(code **)(*plVar1 + 0x248))(plVar1,0);
                    }
                    *(undefined4 *)(lVar6 + 0x48) = 2;
                }
                uVar5 = (ulonglong)(uint)(DAT_140c636a8 - *(int *)(lVar6 + 0x4c));
                fVar11 = (*(float *)(lVar6 + 0x1c) - *(float *)(lVar6 + 0x18)) * fVar9 +
                         *(float *)(lVar6 + 0x18);
                fVar10 = (*(float *)(lVar6 + 0x24) - *(float *)(lVar6 + 0x20)) * fVar9 +
                         *(float *)(lVar6 + 0x20);
                fVar8 = (*(float *)(lVar6 + 0x2c) - *(float *)(lVar6 + 0x28)) * fVar9 +
                        *(float *)(lVar6 + 0x28);
                if (fVar9 != *(float *)(lVar6 + 0x50)) {
                    *(float *)(lVar6 + 0x50) = fVar9;
                    fVar7 = (float)uVar5 * fVar13;
                    *(float *)(lVar6 + 0x54) =
                            (*(float *)(lVar6 + 0x54) - fVar7 * fVar8 * 6.283185) +
                            fVar7 * *(float *)(lVar6 + 0x58) * 6.283185;
                }
                *(float *)(lVar6 + 0x58) = fVar8;
                fVar8 = (float)FUN_1408fe3d0((float)uVar5 * fVar13 * fVar8 * 6.283185 +
                                             *(float *)(lVar6 + 0x54));
                fVar7 = (*(float *)(lVar6 + 0x34) - *(float *)(lVar6 + 0x30)) * fVar9 +
                        *(float *)(lVar6 + 0x30);
                *(float *)(lVar6 + 0x5c) = (fVar8 + fVar12) * fVar14 * (fVar10 - fVar11) + fVar11;
                *(float *)(lVar6 + 0x60) = fVar7;
                fVar9 = *(float *)(param_1 + 0x73c8);
                if (fVar7 <= *(float *)(param_1 + 0x73c8)) {
                    fVar9 = fVar7;
                }
                *(float *)(param_1 + 0x73c8) = fVar9;
            }
            LAB_1403ebbab:
            lVar6 = *(longlong *)(lVar6 + 0x70);
        } while (lVar6 != 0);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1403ebc30(longlong param_1)

{
    longlong lVar1;

    if (_DAT_140c89bb4 == 0) {
        lVar1 = *(longlong *)(param_1 + 0x71a8);
        if (lVar1 == 0) {
            lVar1 = *(longlong *)(param_1 + 0x71a0);
        }
        FUN_140608df0(*(undefined8 *)(param_1 + 0x73f8),lVar1 + 0x60,lVar1 + 0xe0);
    }
    FUN_1403ead20(param_1);
    return;
}



wchar_t * FUN_1403ebc80(longlong param_1)

{
    int iVar1;

    if (*(longlong *)(param_1 + 0x6490) != 0) {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x6490) + 0xdc);
        if (iVar1 == 1) {
            return L"AttackWarrior";
        }
        if (iVar1 == 3) {
            return L"AttackESPer";
        }
        if (iVar1 == 4) {
            return L"AttackMedic";
        }
        if (iVar1 == 7) {
            return L"AttackSpellslinger";
        }
    }
    return L"Attack";
}



undefined8 FUN_1403ebcd0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
    undefined *puVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong lVar5;
    float extraout_XMM0_Da;
    float fVar6;
    float fVar7;
    undefined4 uVar8;

    lVar5 = *(longlong *)(param_4 + 0x1908);
    if (((*(char *)(lVar5 + 4) == '\0') || (*(longlong *)(lVar5 + 0x40) == 0)) ||
        (iVar2 = FUN_14046c6a0(param_4), iVar2 != 0)) {
        return 0;
    }
    fVar7 = *(float *)(lVar5 + 0x10);
    if (fVar7 <= 0.0) {
        fVar7 = 5.0;
    }
    uVar8 = 0;
    iVar2 = FUN_14046c580(param_4,*(undefined8 *)(param_3 + 0x78));
    fVar6 = extraout_XMM0_Da;
    if (iVar2 != 0) {
        lVar3 = FUN_1403acd90(DAT_140c65b70,iVar2,*(undefined8 *)(param_3 + 0x6490));
        if (lVar3 == 0) {
            iVar2 = 0;
            goto LAB_1403ebdc6;
        }
        uVar8 = FUN_1403ad860(DAT_140c65b70,iVar2,param_4);
        fVar6 = (float)FUN_1403ad8f0(DAT_140c65b70,iVar2,param_4);
        fVar7 = fVar6;
    }
    iVar2 = FUN_1403ad690(fVar6,param_2,uVar8,fVar7,*(undefined8 *)(param_3 + 0x6490),param_4);
    LAB_1403ebdc6:
    if (*(char *)(lVar5 + 0xc) == '\0') {
        if (iVar2 == 0) {
            lVar5 = *(longlong *)(lVar5 + 0x28);
        }
        else {
            lVar5 = *(longlong *)(lVar5 + 0x20);
        }
        if (lVar5 == 0) {
            return 0;
        }
        uVar4 = *(undefined8 *)(*(longlong *)(DAT_140c65898 + 0x7340) + 0x168);
    }
    else {
        uVar4 = *(undefined8 *)(*(longlong *)(DAT_140c65898 + 0x7340) + 0x168);
        if (iVar2 == 0) {
            puVar1 = (&PTR_u_PathSoldierInactive_140b66848)[*(int *)(DAT_140c65970 + 8)];
        }
        else {
            puVar1 = (&PTR_u_PathSoldier_140b66828)[*(int *)(DAT_140c65970 + 8)];
        }
        if (puVar1 == (undefined *)0x0) {
            return 0;
        }
    }
    uVar4 = FUN_1401545c0(uVar4);
    return uVar4;
}



undefined8
FUN_1403ebe80(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
              undefined8 param_5_00,undefined8 param_6_00,undefined4 *param_7,undefined4 *param_5,
              int param_6)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined4 extraout_XMM0_Da;
    undefined4 uVar3;
    undefined4 uVar4;

    uVar4 = 0;
    if ((param_6 != 0) ||
        (param_6 = FUN_14046c580(param_5_00,*(undefined8 *)(param_4 + 0x78)), uVar3 = extraout_XMM0_Da,
                param_6 != 0)) {
        lVar1 = FUN_1403acd90(DAT_140c65b70,param_6,*(undefined8 *)(param_4 + 0x6490));
        if (lVar1 == 0) {
            if (param_7 != (undefined4 *)0x0) {
                *param_7 = 0;
            }
            if (param_5 != (undefined4 *)0x0) {
                *param_5 = param_3;
            }
            return 0;
        }
        uVar4 = FUN_1403ad860(DAT_140c65b70,param_6,param_5_00);
        uVar3 = FUN_1403ad8f0(DAT_140c65b70,param_6,param_5_00);
        param_3 = uVar3;
    }
    if (param_7 != (undefined4 *)0x0) {
        *param_7 = uVar4;
    }
    if (param_5 != (undefined4 *)0x0) {
        *param_5 = param_3;
    }
    uVar2 = FUN_1403ad690(uVar3,param_2,uVar4,param_3,*(undefined8 *)(param_4 + 0x6490),param_5_00);
    return uVar2;
}



undefined8 FUN_1403ebfa0(longlong param_1)

{
    uint uVar1;
    bool bVar2;
    char cVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    undefined8 uVar9;

    if (*(int *)(param_1 + 0x28) == 4) {
        return 0;
    }
    for (lVar5 = *(longlong *)(param_1 + 0x20); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x20)) {
        if (*(int *)(lVar5 + 0x28) != 4) {
            return 0;
        }
    }
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x7588) + 0xb8))();
    if ((((iVar4 != 0) && (iVar4 = FUN_14055a260(param_1 + 0x7330), iVar4 == 0)) ||
         (lVar5 = *(longlong *)(param_1 + 0x7340), *(char *)(lVar5 + 0xb18) == '\0')) ||
        (*(int *)(param_1 + 0x7450) != 0)) {
        LAB_1403ec04c:
        FUN_140252260();
        return 0;
    }
    iVar4 = DAT_140c45d50;
    if (*DAT_140c63750 < DAT_140c45d50) {
        iVar4 = *DAT_140c63750;
    }
    if ((&DAT_140c45d60)[iVar4] == '\0') goto LAB_1403ec04c;
    iVar4 = FUN_14055a260(param_1 + 0x7330);
    if (iVar4 != 0) {
        FUN_1400e6e80(lVar5);
        goto LAB_1403ec04c;
    }
    cVar3 = FUN_1400e6e80(lVar5);
    if ((cVar3 != '\0') || (iVar4 = FUN_1404b6860(), iVar4 != 0)) {
        LAB_1403ec09e:
        FUN_140252260();
        return 0;
    }
    iVar4 = FUN_14039e1a0(param_1);
    if ((iVar4 != 0) && (*(longlong *)(param_1 + 0x7ec8) != 0)) {
        (**(code **)(*DAT_140c65670 + 0x1d8))(DAT_140c65670,*(longlong *)(param_1 + 0x7ec8),0x10);
        goto LAB_1403ec09e;
    }
    if (*(longlong *)(param_1 + 0x78) == 0) {
        return 0;
    }
    lVar5 = FUN_1403d90d0(param_1,*(undefined4 *)(param_1 + 0x64c4));
    lVar6 = FUN_1401545c0(*(undefined8 *)(*(longlong *)(param_1 + 0x7340) + 0x168));
    if (((*(longlong *)(param_1 + 0x6ce8) != 0) &&
         (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x6ce8) + 0x70),
                 *(int *)(lVar8 + 0x10c) << 5 < 0)) &&
        ((uVar1 = *(uint *)(lVar8 + 0x7c), uVar1 < 9 && ((0x12aU >> (uVar1 & 0x1f) & 1) != 0)))) {
        lVar6 = FUN_1401545c0(*(undefined8 *)(*(longlong *)(param_1 + 0x7340) + 0x168),
                              L"PendingSpellInvalid");
    }
    lVar8 = lVar6;
    if (lVar5 != 0) {
        bVar2 = true;
        if (((((*(int *)(lVar5 + 0x250) != 0) || (**(int **)(lVar5 + 0x1908) == 0)) ||
              ((*(byte *)(lVar5 + 0x24) & 0x10) != 0)) || ((*(uint *)(lVar5 + 0x28) & 0x4000) != 0)) ||
            (((*(int *)(lVar5 + 0x80) != 0x14 && (*(int *)(lVar5 + 0x80) != 0x17)) &&
              ((*(longlong *)(lVar5 + 0x18) == 0 ||
                ((uVar1 = *(uint *)(*(longlong *)(lVar5 + 0x18) + 4), 0x13 < uVar1 ||
                                                                      ((0x8208dU >> (uVar1 & 0x1f) & 1) == 0)))))))) {
            bVar2 = false;
        }
        lVar7 = FUN_1403ebcd0(param_1,lVar5);
        iVar4 = FUN_14045a950(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(lVar5 + 8));
        if (iVar4 == 0) {
            if (bVar2) {
                LAB_1403ec233:
                uVar9 = *(undefined8 *)(*(longlong *)(param_1 + 0x7340) + 0x168);
                lVar5 = FUN_1403ebc80(param_1);
                if (lVar5 == 0) goto LAB_1403ec28b;
                lVar8 = FUN_1401545c0(uVar9,lVar5);
            }
            else if (lVar7 != 0) {
                lVar8 = lVar7;
            }
        }
        else if (iVar4 == 1) {
            lVar8 = lVar7;
            if ((lVar7 == 0) && (lVar8 = lVar6, bVar2)) goto LAB_1403ec233;
        }
        else if (iVar4 == 2) {
            if ((*(longlong *)(param_1 + 0x6ce8) == 0) ||
                (-1 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x6ce8) + 0x70) + 0x10c) << 5)) {
                if (lVar7 != 0) {
                    lVar8 = lVar7;
                }
            }
            else {
                lVar8 = FUN_1401545c0(*(undefined8 *)(*(longlong *)(param_1 + 0x7340) + 0x168),
                                      L"PendingSpell");
            }
        }
    }
    if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x58) != 0)) {
        (**(code **)(*DAT_140c65670 + 0x1d8))
                (DAT_140c65670,*(longlong *)(lVar8 + 0x58),*(undefined4 *)(lVar8 + 0x60),
                 *(undefined4 *)(lVar8 + 100));
    }
    LAB_1403ec28b:
    FUN_140252260();
    return 0;
}



LRESULT FUN_1403ec440(longlong param_1,HWND param_2,UINT param_3,WPARAM param_4,LPARAM param_5)

{
    longlong *plVar1;
    int iVar2;
    undefined4 *puVar3;
    longlong lVar4;
    LRESULT LVar5;
    undefined local_res8 [8];

    plVar1 = *(longlong **)(param_1 + 0x7588);
    if (plVar1 == (longlong *)0x0) {
        LAB_1403ec571:
        LVar5 = DefWindowProcW(param_2,param_3,param_4,param_5);
    }
    else {
        if (*(int *)(param_1 + 0x28) == 4) {
            LAB_1403ec555:
            iVar2 = (**(code **)(**(longlong **)(param_1 + 0x7588) + 0x1a8))
                    (*(longlong **)(param_1 + 0x7588),param_3,param_4,param_5);
            if (iVar2 == 0) goto LAB_1403ec571;
        }
        else {
            for (lVar4 = *(longlong *)(param_1 + 0x20); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x20)) {
                if (*(int *)(lVar4 + 0x28) != 4) goto LAB_1403ec555;
            }
            if (param_3 == 0x200) {
                puVar3 = (undefined4 *)(**(code **)(*plVar1 + 0xd0))(plVar1,local_res8,param_5);
                *(undefined4 *)(param_1 + 0x7594) = *puVar3;
                *(undefined4 *)(param_1 + 0x7598) = puVar3[1];
                LAB_1403ec4e8:
                FUN_1405df340(param_1 + 0x6838);
            }
            else if (((param_3 - 0xff < 7) && ((0x67U >> (param_3 - 0xff & 0x1f) & 1) != 0)) ||
                     (param_3 - 0x201 < 0xd)) goto LAB_1403ec4e8;
            iVar2 = (**(code **)(**(longlong **)(param_1 + 0x7588) + 0xb8))();
            if ((((iVar2 != 0) && (param_3 - 0x200 < 0xe)) ||
                 ((lVar4 = (**(code **)(**(longlong **)(param_1 + 0x7340) + 0x38))
                         (*(longlong **)(param_1 + 0x7340),param_2,param_3,param_4,param_5),
                         lVar4 != 0 || (*(char *)(*(longlong *)(param_1 + 0x7340) + 0xd20) != '\0')))) &&
                (iVar2 = FUN_1404b5d10(), iVar2 != 0)) goto LAB_1403ec555;
        }
        LVar5 = 0;
    }
    return LVar5;
}



undefined8 FUN_1403ec5a0(longlong param_1,int *param_2)

{
    int iVar1;
    undefined8 uVar2;

    if (param_2 == (int *)0x0) {
        return 0x80070057;
    }
    if (*param_2 == 0x18) {
        FUN_1403fa730();
        FUN_1403fa3d0(param_1);
        FUN_140016480(DAT_140c635f0);
        FUN_14039f920();
        iVar1 = param_2[10];
        uVar2 = 0x2ff05;
        if (iVar1 == 0) {
            uVar2 = 0x62f72;
        }
        else if (iVar1 + -1 == 0) {
            uVar2 = 0x62f73;
            iVar1 = iVar1 + -1;
        }
        else if (iVar1 + -2 == 0) {
            uVar2 = 0x62f75;
            iVar1 = iVar1 + -2;
        }
        else {
            iVar1 = iVar1 + -3;
            if (iVar1 == 0) {
                uVar2 = 0x62f76;
            }
        }
        uVar2 = FUN_14034bdd0(iVar1,uVar2);
        uVar2 = FUN_1400481b0(param_1,uVar2,0);
        if (-1 < (int)uVar2) {
            if (*(longlong *)(param_1 + 0x7928) != 0) {
                (**(code **)(*DAT_140c65808 + 0x28))
                        (DAT_140c65808,*(undefined4 *)(*(longlong *)(param_1 + 0x7928) + 0x98));
                if (*(longlong **)(param_1 + 0x7928) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)(param_1 + 0x7928) + 8))();
                    *(undefined8 *)(param_1 + 0x7928) = 0;
                }
            }
            return 0;
        }
    }
    else {
        uVar2 = 1;
    }
    return uVar2;
}



undefined8 FUN_1403ec6a0(longlong param_1,int param_2,int param_3)

{
    undefined8 uVar1;
    undefined *puVar2;
    undefined local_78 [8];
    longlong local_70;

    if ((*(longlong *)(param_1 + 0x7928) != 0) &&
        (param_2 == *(int *)(*(longlong *)(param_1 + 0x7928) + 0x98))) {
        *(undefined4 *)(param_1 + 0x7b4c) = DAT_140c636a8;
        if (param_3 - 0x61U < 0x912) {
            // WARNING: Could not recover jumptable at 0x0001403ec719. Too many branches
            // WARNING: Treating indirect jump as call
            uVar1 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                               *(uint *)(&DAT_1403f1344 + (ulonglong)(param_3 - 0x61U) * 4)))
                    (IMAGE_DOS_HEADER_140000000.e_magic +
                     *(uint *)(&DAT_1403f1344 + (ulonglong)(param_3 - 0x61U) * 4));
            return uVar1;
        }
        if (DAT_140c65828 == 0) {
            FUN_14018ee90(local_78,"Message Id #%d",param_3);
            puVar2 = local_78;
        }
        else {
            puVar2 = (undefined *)FUN_140335f10(local_78,param_3);
        }
        FUN_1400035b0(0xb,0,0,*(undefined8 *)(puVar2 + 8));
        if (local_70 != 0) {
            FUN_14018b900();
        }
    }
    return 1;
}



void FUN_1403f3790(longlong param_1)

{
    LONG *pLVar1;
    tagPOINT local_res8 [4];

    if (((*(longlong *)(param_1 + 0x7340) != 0) && (DAT_140c635f0 != 0)) &&
        (*(longlong *)(param_1 + 0x7588) != 0)) {
        GetCursorPos(local_res8);
        ScreenToClient(*(HWND *)(DAT_140c635f0 + 8),local_res8);
        pLVar1 = *(LONG **)(*(longlong *)(param_1 + 0x7340) + 0xb10);
        pLVar1[1] = local_res8[0].y;
        *pLVar1 = local_res8[0].x;
        (**(code **)(**(longlong **)(param_1 + 0x7588) + 0x78))(*(longlong **)(param_1 + 0x7588),0);
        FUN_1400e6e80(*(undefined8 *)(param_1 + 0x7340));
    }
    return;
}



void FUN_1403f3820(longlong param_1)

{
    undefined8 local_28;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 uStack16;
    undefined4 uStack12;

    if ((*(longlong *)(param_1 + 0x7928) != 0) &&
        (-1 < (DAT_140c636a8 - *(int *)(param_1 + 0x7b4c)) + -7000)) {
        local_20 = 0x40;
        local_28 = 0;
        local_18 = 0x3f800000;
        uStack20 = 0x3f800000;
        uStack16 = 0x3f800000;
        uStack12 = 0x3f800000;
        local_1c = 0x40;
        if (*(longlong *)(param_1 + 0x7930) != 0) {
            FUN_140103cf0(*(longlong *)(param_1 + 0x7930),&local_28,&local_18,0,
                          (DAT_140c63664 - *(float *)(param_1 + 0x7938)) * *(float *)(param_1 + 0x793c));
        }
    }
    return;
}



undefined8 FUN_1403f3b50(longlong param_1,int *param_2)

{
    int iVar1;
    int iVar2;
    undefined8 *puVar3;
    code *pcVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    undefined *puVar7;
    undefined local_58 [16];
    longlong local_48;

    iVar1 = *param_2;
    FUN_140400f50(local_58);
    if (iVar1 == 0) {
        FUN_1403f8590(param_1,param_2 + 6,param_2 + 2);
    }
    puVar3 = *(undefined8 **)(param_1 + 0x6808);
    while (puVar6 = puVar3, puVar6 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)puVar6[3];
        if ((*(int *)(puVar6 + 4) == param_2[2]) && (puVar6[5] == *(longlong *)(param_2 + 4))) {
            iVar2 = *param_2;
            pcVar4 = (code *)puVar6[1];
            uVar5 = *puVar6;
            puVar6[1] = 0;
            *puVar6 = 0;
            (*pcVar4)(uVar5,iVar2,puVar6 + 4,puVar6[6]);
            if ((undefined8 *)puVar6[2] != (undefined8 *)0x0) {
                *(undefined8 *)puVar6[2] = puVar6[3];
            }
            if (puVar6[3] != 0) {
                *(undefined8 *)(puVar6[3] + 0x10) = puVar6[2];
            }
            puVar6[2] = 0;
            puVar6[3] = 0;
            FUN_14018b900(puVar6);
        }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x6810);
    while (puVar6 = puVar3, puVar6 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)puVar6[3];
        if ((((*(int *)(puVar6 + 4) == param_2[2]) && (puVar6[5] == *(longlong *)(param_2 + 4))) &&
             (*(uint *)(puVar6 + 7) < 9)) && ((0x123U >> (*(uint *)(puVar6 + 7) & 0x1f) & 1) != 0)) {
            iVar2 = *param_2;
            pcVar4 = (code *)puVar6[1];
            uVar5 = *puVar6;
            puVar6[1] = 0;
            *puVar6 = 0;
            puVar7 = local_58;
            if (iVar1 != 0) {
                puVar7 = (undefined *)0x0;
            }
            (*pcVar4)(uVar5,puVar6 + 4,*(undefined4 *)(puVar6 + 7),iVar2,puVar7,puVar6[6]);
            if ((undefined8 *)puVar6[2] != (undefined8 *)0x0) {
                *(undefined8 *)puVar6[2] = puVar6[3];
            }
            if (puVar6[3] != 0) {
                *(undefined8 *)(puVar6[3] + 0x10) = puVar6[2];
            }
            puVar6[2] = 0;
            puVar6[3] = 0;
            FUN_14018b900(puVar6,0);
        }
    }
    if (local_48 != 0) {
        (**(code **)(*(longlong *)(local_48 + -0x10) + 8))(local_48 + -0x10);
    }
    return 0;
}



undefined8 FUN_1403f3d30(longlong param_1,int *param_2)

{
    int iVar1;
    int iVar2;
    undefined8 *puVar3;
    code *pcVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    undefined *puVar7;
    undefined local_48 [16];
    longlong local_38;

    FUN_1403f3b50();
    iVar1 = *param_2;
    FUN_140400e10(local_48,param_2);
    puVar3 = *(undefined8 **)(param_1 + 0x6810);
    while (puVar6 = puVar3, puVar6 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)puVar6[3];
        if ((*(int *)(puVar6 + 4) == param_2[2]) && (puVar6[5] == *(longlong *)(param_2 + 4))) {
            iVar2 = *param_2;
            pcVar4 = (code *)puVar6[1];
            uVar5 = *puVar6;
            puVar6[1] = 0;
            *puVar6 = 0;
            puVar7 = local_48;
            if (iVar1 != 0) {
                puVar7 = (undefined *)0x0;
            }
            (*pcVar4)(uVar5,puVar6 + 4,*(undefined4 *)(puVar6 + 7),iVar2,puVar7,puVar6[6]);
            if ((undefined8 *)puVar6[2] != (undefined8 *)0x0) {
                *(undefined8 *)puVar6[2] = puVar6[3];
            }
            if (puVar6[3] != 0) {
                *(undefined8 *)(puVar6[3] + 0x10) = puVar6[2];
            }
            puVar6[2] = 0;
            puVar6[3] = 0;
            FUN_14018b900(puVar6,0);
        }
    }
    if (local_38 != 0) {
        (**(code **)(*(longlong *)(local_38 + -0x10) + 8))(local_38 + -0x10);
    }
    return 0;
}



undefined8 FUN_1403f3e60(longlong param_1,int *param_2)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    code *pcVar3;
    undefined8 uVar4;
    undefined8 *puVar5;

    FUN_1400167a0(param_1,*param_2,*(undefined8 *)(param_2 + 2));
    puVar1 = *(undefined8 **)(param_1 + 0x6818);
    while (puVar5 = puVar1, puVar5 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)puVar5[3];
        if (*(int *)(puVar5 + 4) == *param_2) {
            uVar2 = *(undefined8 *)(param_2 + 2);
            pcVar3 = (code *)puVar5[1];
            uVar4 = *puVar5;
            puVar5[1] = 0;
            *puVar5 = 0;
            (*pcVar3)(uVar4,*(undefined4 *)(puVar5 + 4),uVar2,puVar5[5]);
            if ((undefined8 *)puVar5[2] != (undefined8 *)0x0) {
                *(undefined8 *)puVar5[2] = puVar5[3];
            }
            if (puVar5[3] != 0) {
                *(undefined8 *)(puVar5[3] + 0x10) = puVar5[2];
            }
            puVar5[2] = 0;
            puVar5[3] = 0;
            FUN_14018b900(puVar5);
        }
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1403f3f10(undefined8 param_1,uint *param_2)

{
    short sVar1;
    longlong lVar2;
    undefined2 *puVar3;
    short *psVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong *plVar7;
    longlong *plVar8;
    uint uVar9;
    int iVar10;
    int iVar11;
    ulonglong uVar12;
    undefined local_118 [8];
    longlong local_110;
    undefined2 *local_108;
    longlong local_100;
    undefined **local_f8;
    undefined local_f0 [8];
    undefined2 *local_e8;
    undefined2 *local_e0;
    undefined local_38 [16];
    undefined2 *local_28;

    uVar9 = 0x7fffffff;
    if ((int)*param_2 < 0x7fffffff) {
        uVar9 = *param_2;
    }
    uVar12 = 0x80000000;
    if (-0x80000000 < (int)uVar9) {
        uVar12 = (ulonglong)uVar9;
    }
    iVar10 = (int)(uVar12 / 0xe10);
    if ((iVar10 == 0) && (iVar11 = (int)(uVar12 / 0x3c), iVar10 = (int)uVar12, iVar11 != 0)) {
        iVar10 = iVar11;
    }
    FUN_1400b6f30(&local_f8);
    plVar8 = (longlong *)0x0;
    local_f8 = &PTR_FUN_140b69230;
    local_38 = ZEXT816(0);
    local_28 = (undefined2 *)0x0;
    puVar3 = (undefined2 *)FUN_14018b280(0x10);
    local_28 = puVar3 + 8;
    local_38 = CONCAT88(puVar3,puVar3);
    if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
    }
    psVar4 = (short *)FUN_14034bdd0(local_28,0x8afb3);
    if (psVar4 == (short *)0x0) {
        if (local_e8 != local_e0) {
            *local_e8 = 0;
            local_e0 = local_e8;
        }
    }
    else {
        sVar1 = *psVar4;
        plVar7 = plVar8;
        while (sVar1 != 0) {
            plVar7 = (longlong *)((longlong)plVar7 + 1);
            sVar1 = psVar4[(longlong)plVar7];
        }
        FUN_14001c480(local_f0,psVar4,psVar4 + (longlong)plVar7);
    }
    lVar5 = FUN_14018b280(0x60);
    plVar7 = plVar8;
    if (lVar5 != 0) {
        uVar6 = FUN_14034bdd0();
        plVar7 = (longlong *)FUN_1404ddc40(lVar5,uVar6,iVar10);
    }
    local_110 = 0;
    local_108 = (undefined2 *)0x0;
    local_100 = 0;
    do {
        psVar4 = &DAT_140af83aa + (longlong)plVar8;
        plVar8 = (longlong *)((longlong)plVar8 + 1);
    } while (*psVar4 != 0);
    lVar5 = (longlong)plVar8 * 2 >> 1;
    uVar12 = lVar5 + 1;
    if (uVar12 < 0x7fffffffffffffff) {
        lVar2 = uVar12 * 2;
        local_108 = (undefined2 *)FUN_14018b280(lVar2,0);
        local_100 = lVar2 + (longlong)local_108;
    }
    lVar2 = (longlong)local_108;
    lVar5 = lVar5 * 2;
    local_110 = (longlong)local_108;
    FUN_1407db590(local_108,&DAT_140af83a8,lVar5);
    local_108 = (undefined2 *)(lVar5 + lVar2);
    if (local_108 != (undefined2 *)0x0) {
        *local_108 = 0;
    }
    FUN_1400b7480(&local_f8,plVar7);
    (**(code **)(*plVar7 + 0x48))(plVar7,local_118);
    if (local_110 != 0) {
        FUN_14018b900(local_110,0);
    }
    lVar5 = FUN_1400b7660(&local_f8);
    FUN_140003890(DAT_140c658a0,2,0,*(undefined8 *)(lVar5 + 8),0,0);
    if (local_38._0_8_ != 0) {
        FUN_14018b900(local_38._0_8_,0);
    }
    FUN_1400b7390(&local_f8);
    return 0;
}



undefined8 FUN_1403f4170(longlong param_1,undefined4 *param_2)

{
    undefined4 *puVar1;
    undefined local_18 [16];

    puVar1 = (undefined4 *)FUN_1400bd5d0(param_1 + 0x7f30);
    if (puVar1 == (undefined4 *)0x0) {
        FUN_1400bd4a0(param_1 + 0x7f30,param_2,param_2 + 4);
    }
    else {
        *puVar1 = param_2[4];
    }
    FUN_140496ca0();
    local_18 = ZEXT1216(*(undefined (*) [12])(param_2 + 1));
    FUN_140430f80(*(undefined8 *)(param_1 + 0x7340),*param_2,local_18);
    return 0;
}



undefined4 FUN_1403f4250(undefined8 param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    undefined4 local_res10 [2];

    lVar2 = DAT_140c65898;
    local_res10[0] = param_2;
    uVar4 = (**(code **)(DAT_140c65898 + 0x7f48))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(lVar2 + 0x7f40) + (uVar4 % *(ulonglong *)(lVar2 + 0x7f38)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar4 == *puVar1) &&
            (iVar3 = (**(code **)(lVar2 + 0x7f50))(local_res10,puVar1 + 2), iVar3 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if ((undefined4 *)((longlong)puVar1 + 0x14) == (undefined4 *)0x0) {
        return 0;
    }
    return *(undefined4 *)((longlong)puVar1 + 0x14);
}



undefined8 FUN_1403f42e0(undefined8 param_1,undefined8 *param_2)

{
    longlong *plVar1;
    longlong lVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    longlong *plVar6;
    longlong lVar7;
    longlong *plVar8;
    longlong *plVar9;
    longlong *plVar10;
    longlong *plVar11;
    longlong lVar12;
    longlong *plVar13;
    undefined4 *puVar14;
    longlong *plVar15;
    longlong *plVar16;
    longlong *plVar17;
    longlong *plVar18;
    uint local_res18;
    longlong *local_98;
    longlong local_90;
    undefined8 local_70;
    undefined8 local_68;
    ulonglong local_60;
    longlong *local_58;

    plVar13 = (longlong *)0x0;
    lVar2 = *(longlong *)(DAT_140c65898 + 0x7340);
    plVar6 = (longlong *)FUN_14018dbc0(0,*(undefined4 *)(lVar2 + 0x9d8),0x18);
    local_res18 = 0;
    plVar10 = plVar13;
    if (plVar6 != (longlong *)0x0) {
        plVar10 = plVar6;
    }
    plVar6 = plVar13;
    plVar15 = plVar13;
    plVar11 = plVar13;
    if (*(int *)(lVar2 + 0x9d8) != 0) {
        local_90 = 0;
        plVar9 = plVar13;
        plVar16 = plVar13;
        plVar17 = plVar13;
        local_98 = plVar10;
        do {
            lVar12 = *(longlong *)(local_90 + *(longlong *)(lVar2 + 0x9d0));
            plVar6 = plVar9;
            plVar15 = plVar16;
            plVar11 = plVar17;
            if ((((lVar12 != 0) && (*(char *)(lVar12 + 0x138) != '\0')) &&
                 (lVar7 = FUN_140137390(lVar12,L"OptionsScreen"), lVar7 == 0)) &&
                ((lVar7 = FUN_140137390(lVar12,L"FrontEndScreen"), lVar7 == 0 &&
                                                                   (lVar7 = FUN_140137390(lVar12,L"ExternalTool"), lVar7 == 0)))) {
                plVar6 = (longlong *)((longlong)plVar9 + 1);
                plVar8 = (longlong *)FUN_14018db00(plVar10,plVar6,0x18);
                plVar18 = plVar10;
                if ((plVar10 != plVar8) &&
                    (FUN_1407db590(plVar8,plVar10), plVar18 = plVar8, local_98 = plVar8,
                            plVar10 != (longlong *)0x0)) {
                    (**(code **)(plVar10[-2] + 8))(plVar10 + -2);
                }
                plVar8 = plVar18 + (longlong)plVar9 * 3;
                *(undefined *)plVar8 = *(undefined *)(lVar12 + 0x218);
                *(uint *)((longlong)plVar8 + 4) = (uint)*(byte *)(lVar12 + 0x108);
                *(undefined *)(plVar8 + 1) = *(undefined *)(lVar12 + 0xf8);
                puVar14 = *(undefined4 **)(lVar12 + 0x18);
                plVar8[2] = (longlong)puVar14;
                plVar9 = plVar13;
                plVar10 = plVar18;
                if (*(short *)puVar14 != 0) {
                    do {
                        plVar9 = (longlong *)((longlong)plVar9 + 1);
                    } while (*(short *)((longlong)puVar14 + (longlong)plVar9 * 2) != 0);
                    if (&DAT_00000080 < plVar9) {
                        if (puVar14 == (undefined4 *)0x0) {
                            plVar10 = (longlong *)0x0;
                        }
                        else {
                            plVar10 = (longlong *)FUN_14018b280(0x112,0);
                            plVar11 = plVar13;
                            if (plVar10 != (longlong *)0x0) {
                                plVar10[1] = 0x80;
                                *plVar10 = (longlong)&PTR_LAB_140b55060;
                                plVar11 = plVar10;
                            }
                            plVar10 = plVar11 + 2;
                            if ((((uint)puVar14 | (uint)plVar10) & 0xf) == 0) {
                                lVar12 = 2;
                                plVar9 = plVar10;
                                do {
                                    uVar3 = puVar14[1];
                                    uVar4 = puVar14[2];
                                    uVar5 = puVar14[3];
                                    *(undefined4 *)plVar9 = *puVar14;
                                    *(undefined4 *)((longlong)plVar9 + 4) = uVar3;
                                    *(undefined4 *)(plVar9 + 1) = uVar4;
                                    *(undefined4 *)((longlong)plVar9 + 0xc) = uVar5;
                                    uVar3 = puVar14[5];
                                    uVar4 = puVar14[6];
                                    uVar5 = puVar14[7];
                                    *(undefined4 *)(plVar9 + 2) = puVar14[4];
                                    *(undefined4 *)((longlong)plVar9 + 0x14) = uVar3;
                                    *(undefined4 *)(plVar9 + 3) = uVar4;
                                    *(undefined4 *)((longlong)plVar9 + 0x1c) = uVar5;
                                    uVar3 = puVar14[9];
                                    uVar4 = puVar14[10];
                                    uVar5 = puVar14[0xb];
                                    *(undefined4 *)(plVar9 + 4) = puVar14[8];
                                    *(undefined4 *)((longlong)plVar9 + 0x24) = uVar3;
                                    *(undefined4 *)(plVar9 + 5) = uVar4;
                                    *(undefined4 *)((longlong)plVar9 + 0x2c) = uVar5;
                                    uVar3 = puVar14[0xd];
                                    uVar4 = puVar14[0xe];
                                    uVar5 = puVar14[0xf];
                                    *(undefined4 *)(plVar9 + 6) = puVar14[0xc];
                                    *(undefined4 *)((longlong)plVar9 + 0x34) = uVar3;
                                    *(undefined4 *)(plVar9 + 7) = uVar4;
                                    *(undefined4 *)((longlong)plVar9 + 0x3c) = uVar5;
                                    uVar3 = puVar14[0x11];
                                    uVar4 = puVar14[0x12];
                                    uVar5 = puVar14[0x13];
                                    *(undefined4 *)(plVar9 + 8) = puVar14[0x10];
                                    *(undefined4 *)((longlong)plVar9 + 0x44) = uVar3;
                                    *(undefined4 *)(plVar9 + 9) = uVar4;
                                    *(undefined4 *)((longlong)plVar9 + 0x4c) = uVar5;
                                    uVar3 = puVar14[0x15];
                                    uVar4 = puVar14[0x16];
                                    uVar5 = puVar14[0x17];
                                    *(undefined4 *)(plVar9 + 10) = puVar14[0x14];
                                    *(undefined4 *)((longlong)plVar9 + 0x54) = uVar3;
                                    *(undefined4 *)(plVar9 + 0xb) = uVar4;
                                    *(undefined4 *)((longlong)plVar9 + 0x5c) = uVar5;
                                    uVar3 = puVar14[0x19];
                                    uVar4 = puVar14[0x1a];
                                    uVar5 = puVar14[0x1b];
                                    *(undefined4 *)(plVar9 + 0xc) = puVar14[0x18];
                                    *(undefined4 *)((longlong)plVar9 + 100) = uVar3;
                                    *(undefined4 *)(plVar9 + 0xd) = uVar4;
                                    *(undefined4 *)((longlong)plVar9 + 0x6c) = uVar5;
                                    uVar3 = puVar14[0x1d];
                                    uVar4 = puVar14[0x1e];
                                    uVar5 = puVar14[0x1f];
                                    *(undefined4 *)(plVar9 + 0xe) = puVar14[0x1c];
                                    *(undefined4 *)((longlong)plVar9 + 0x74) = uVar3;
                                    *(undefined4 *)(plVar9 + 0xf) = uVar4;
                                    *(undefined4 *)((longlong)plVar9 + 0x7c) = uVar5;
                                    lVar12 = lVar12 + -1;
                                    plVar9 = plVar9 + 0x10;
                                    puVar14 = puVar14 + 0x20;
                                } while (lVar12 != 0);
                                *(undefined2 *)(plVar11 + 0x22) = 0;
                            }
                            else {
                                FUN_1407db590(plVar10,puVar14,0x100);
                                *(undefined2 *)(plVar11 + 0x22) = 0;
                            }
                        }
                        plVar11 = (longlong *)((longlong)plVar17 + 1);
                        plVar9 = (longlong *)FUN_14018db00(plVar16,plVar11,8);
                        if ((longlong **)(plVar9 + (longlong)plVar17) != (longlong **)0x0) {
                            plVar9[(longlong)plVar17] = (longlong)plVar10;
                            plVar10 = plVar13;
                        }
                        if (plVar16 != plVar9) {
                            if (plVar17 != (longlong *)0x0) {
                                plVar18 = plVar17;
                                do {
                                    plVar1 = (longlong *)(((longlong)plVar9 - (longlong)plVar16) + (longlong)plVar15);
                                    if (plVar1 != (longlong *)0x0) {
                                        *plVar1 = *plVar15;
                                        *plVar15 = 0;
                                    }
                                    lVar12 = *plVar15;
                                    if (lVar12 != 0) {
                                        (**(code **)(*(longlong *)(lVar12 + -0x10) + 8))(lVar12 + -0x10);
                                    }
                                    plVar15 = plVar15 + 1;
                                    plVar18 = (longlong *)((longlong)plVar18 + -1);
                                } while (plVar18 != (longlong *)0x0);
                            }
                            plVar15 = plVar9;
                            if (plVar16 != (longlong *)0x0) {
                                (**(code **)(plVar16[-2] + 8))(plVar16 + -2);
                            }
                        }
                        if (plVar10 != (longlong *)0x0) {
                            (**(code **)(plVar10[-2] + 8))(plVar10 + -2);
                        }
                        plVar8[2] = plVar15[(longlong)plVar17];
                        plVar10 = local_98;
                    }
                }
            }
            local_res18 = local_res18 + 1;
            local_90 = local_90 + 8;
            plVar9 = plVar6;
            plVar16 = plVar15;
            plVar17 = plVar11;
        } while (local_res18 < *(uint *)(lVar2 + 0x9d8));
    }
    local_70 = *param_2;
    local_60 = (ulonglong)plVar6 & 0xffffffff;
    local_68 = param_2[1];
    local_58 = plVar10;
    FUN_1403f4740(param_1,0x7b6,&local_70);
    if (plVar11 != (longlong *)0x0) {
        do {
            lVar2 = plVar15[(longlong)plVar13];
            if (lVar2 != 0) {
                (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            plVar13 = (longlong *)((longlong)plVar13 + 1);
        } while (plVar13 < plVar11);
    }
    if (plVar15 != (longlong *)0x0) {
        (**(code **)(plVar15[-2] + 8))(plVar15 + -2);
    }
    if (plVar10 != (longlong *)0x0) {
        (**(code **)(plVar10[-2] + 8))(plVar10 + -2);
    }
    return 0;
}



void FUN_1403f4740(longlong param_1,undefined4 param_2,undefined8 param_3)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    longlong *local_res8;
    undefined8 local_res20;
    undefined8 local_58;
    undefined8 local_50;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if (*(longlong *)(param_1 + 0x7928) != 0) {
        iVar3 = (**(code **)(*DAT_140c65808 + 0x108))(DAT_140c65808,param_1 + 0x7960,param_2,param_3);
        if (iVar3 == 0) {
            local_58 = 0;
            local_50 = 0;
            local_50 = (**(code **)(**(longlong **)(param_1 + 0x7960) + 0x10))();
            lVar1 = *(longlong *)(param_1 + 0x7928);
            local_58 = CONCAT44(local_58._4_4_,0xb);
            local_res8 = *(longlong **)(DAT_140c635f0 + 0x118);
            iVar3 = (**(code **)(*DAT_140c65808 + 0x108))(DAT_140c65808,&local_res8,0x38c,&local_58);
            if (iVar3 == 0) {
                lVar4 = (**(code **)(*local_res8 + 0x10))();
                iVar3 = (**(code **)(*local_res8 + 0x20))();
                lVar2 = *(longlong *)(lVar1 + 0x10);
                if (lVar2 != 0) {
                    (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 8),lVar4 + 4,iVar3 + -4);
                }
                local_res20 = 0;
                local_res20 = (**(code **)(*local_res8 + 0x10))();
                (**(code **)(*DAT_140c65808 + 0xf0))
                        (DAT_140c65808,*(undefined4 *)(lVar1 + 0x98),0x244,&local_res20);
            }
        }
        else {
            local_40 = 0;
            local_48 = &PTR_LAB_140b5e648;
            local_38 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_48);
            local_28 = local_48;
            local_res8 = (longlong *)0x141df29f8;
            local_18 = local_38;
            local_20 = local_40;
            iVar3 = FUN_1401971e0(&DAT_140c8a76c,5,&local_res8,&local_28);
            local_48 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_38);
            if (iVar3 != 0) {
                DebugBreak();
            }
        }
    }
    return;
}



void FUN_1403f4900(longlong param_1,undefined4 param_2,undefined8 param_3)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    longlong *local_res8;
    undefined8 local_res20;
    undefined8 local_58;
    undefined8 local_50;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if ((*(longlong *)(param_1 + 0x7928) != 0) && (DAT_140c65808 != (longlong *)0x0)) {
        iVar3 = (**(code **)(*DAT_140c65808 + 0x108))(DAT_140c65808,param_1 + 0x7960,param_2,param_3);
        if (iVar3 == 0) {
            local_58 = 0;
            local_50 = 0;
            local_50 = (**(code **)(**(longlong **)(param_1 + 0x7960) + 0x10))();
            lVar1 = *(longlong *)(param_1 + 0x7928);
            local_58 = CONCAT44(local_58._4_4_,3);
            local_res8 = *(longlong **)(DAT_140c635f0 + 0x118);
            iVar3 = (**(code **)(*DAT_140c65808 + 0x108))(DAT_140c65808,&local_res8,0x38c,&local_58);
            if (iVar3 == 0) {
                lVar4 = (**(code **)(*local_res8 + 0x10))();
                iVar3 = (**(code **)(*local_res8 + 0x20))();
                lVar2 = *(longlong *)(lVar1 + 0x10);
                if (lVar2 != 0) {
                    (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 8),lVar4 + 4,iVar3 + -4);
                }
                local_res20 = 0;
                local_res20 = (**(code **)(*local_res8 + 0x10))();
                (**(code **)(*DAT_140c65808 + 0xf0))
                        (DAT_140c65808,*(undefined4 *)(lVar1 + 0x98),0x244,&local_res20);
            }
        }
        else {
            local_40 = 0;
            local_48 = &PTR_LAB_140b5e648;
            local_38 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_48);
            local_28 = local_48;
            local_res8 = (longlong *)0x141df2a98;
            local_18 = local_38;
            local_20 = local_40;
            iVar3 = FUN_1401971e0(&DAT_140c8a770,5,&local_res8,&local_28);
            local_48 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_38);
            if (iVar3 != 0) {
                DebugBreak();
            }
        }
    }
    return;
}



longlong * FUN_1403f4ad0(longlong *param_1,longlong *param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;

    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    FUN_14001c1b0(param_1 + 2,param_2[3],param_2[4]);
    param_1[6] = param_2[6];
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
    uVar1 = *(undefined4 *)((longlong)param_2 + 0x54);
    uVar2 = *(undefined4 *)(param_2 + 0xb);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x5c);
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    *(undefined4 *)((longlong)param_1 + 0x54) = uVar1;
    *(undefined4 *)(param_1 + 0xb) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x5c) = uVar3;
    uVar1 = *(undefined4 *)((longlong)param_2 + 100);
    uVar2 = *(undefined4 *)(param_2 + 0xd);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x6c);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)((longlong)param_1 + 100) = uVar1;
    *(undefined4 *)(param_1 + 0xd) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x6c) = uVar3;
    uVar1 = *(undefined4 *)((longlong)param_2 + 0x74);
    uVar2 = *(undefined4 *)(param_2 + 0xf);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x7c);
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
    *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
    *(undefined4 *)(param_1 + 0xf) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x7c) = uVar3;
    uVar1 = *(undefined4 *)((longlong)param_2 + 0x84);
    uVar2 = *(undefined4 *)(param_2 + 0x11);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x8c);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)((longlong)param_1 + 0x84) = uVar1;
    *(undefined4 *)(param_1 + 0x11) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x8c) = uVar3;
    uVar1 = *(undefined4 *)((longlong)param_2 + 0x94);
    uVar2 = *(undefined4 *)(param_2 + 0x13);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x9c);
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
    *(undefined4 *)((longlong)param_1 + 0x94) = uVar1;
    *(undefined4 *)(param_1 + 0x13) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x9c) = uVar3;
    if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
        (***(code ***)(undefined8 *)*param_1)();
    }
    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
        (***(code ***)(undefined8 *)param_1[1])();
    }
    return param_1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1403f4b90(longlong param_1)

{
    longlong lVar1;
    undefined auVar2 [16];
    undefined auVar3 [16];
    int iVar4;
    undefined (*pauVar5) [16];
    int iVar6;
    longlong *plVar7;
    longlong *plVar8;
    int *piVar9;
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
    undefined4 uVar20;
    undefined4 uVar21;
    undefined4 uVar22;
    undefined4 uVar23;
    undefined auStack840 [32];
    float *local_328;
    undefined4 local_320;
    undefined *local_318;
    undefined4 local_310;
    undefined local_308 [16];
    undefined local_2f8 [8];
    undefined8 uStack752;
    int local_2e8;
    int local_2e4;
    undefined local_2d8 [8];
    undefined8 uStack720;
    undefined local_2c8 [8];
    undefined8 uStack704;
    undefined local_2b8 [16];
    undefined local_2a8 [8];
    float fStack672;
    float fStack668;
    float local_298;
    float fStack660;
    float fStack656;
    float fStack652;
    float local_288;
    float fStack644;
    float fStack640;
    float fStack636;
    float local_278;
    float fStack628;
    float fStack624;
    float fStack620;
    undefined local_268 [16];
    longlong *local_258;
    longlong *local_250;
    longlong local_240;
    longlong local_238;
    longlong *local_228;
    float local_21c;
    float local_208;
    float fStack516;
    float local_1f8;
    float fStack500;
    undefined local_1d8 [12];
    undefined4 local_1cc;
    undefined local_1c8 [16];
    undefined local_1b8 [16];
    undefined local_198 [64];
    float local_158;
    float local_154;
    float local_150;
    undefined local_148 [16];
    undefined local_138 [16];
    undefined local_128 [16];
    undefined4 local_118;
    undefined4 uStack276;
    undefined4 uStack272;
    undefined4 uStack268;
    undefined *local_108;
    undefined8 local_100;
    ulonglong local_b8;

    local_b8 = DAT_140c0f7b0 ^ (ulonglong)auStack840;
    if ((longlong *)**(longlong **)(param_1 + 0x7c68) != *(longlong **)(param_1 + 0x7c68)) {
        FUN_1403fc850(param_1 + 0x7c60,0);
        (**(code **)(*DAT_140c65670 + 0x248))();
        plVar7 = (longlong *)**(longlong **)(param_1 + 0x7c68);
        if (plVar7 != *(longlong **)(param_1 + 0x7c68)) {
            fVar16 = 0.5;
            fVar15 = 0.0;
            fVar18 = 0.5;
            fVar19 = 0.5;
            local_308 = CONCAT88(&local_298,local_148);
            fVar17 = 1.0;
            uVar20 = SUB84(&local_298,0);
            uVar21 = (undefined4)((ulonglong)&local_298 >> 0x20);
            uVar22 = SUB84(local_148,0);
            uVar23 = (undefined4)((ulonglong)local_148 >> 0x20);
            do {
                FUN_1403f4ad0(&local_258,plVar7 + 2);
                (**(code **)(*DAT_140c65680 + 0x88))();
                (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,1);
                local_108 = (undefined *)CONCAT44(uVar23,uVar22);
                local_100 = CONCAT44(uVar21,uVar20);
                local_298 = _DAT_140c78410;
                fStack660 = fRam0000000140c78414;
                fStack656 = fRam0000000140c78418;
                fStack652 = fRam0000000140c7841c;
                local_288 = _DAT_140c78420;
                fStack644 = fRam0000000140c78424;
                fStack640 = fRam0000000140c78428;
                fStack636 = fRam0000000140c7842c;
                local_278 = _DAT_140c78430;
                fStack628 = fRam0000000140c78434;
                fStack624 = fRam0000000140c78438;
                fStack620 = fRam0000000140c7843c;
                local_158 = local_21c;
                local_154 = local_21c;
                local_268 = CONCAT412(fVar17,CONCAT48(fVar17,CONCAT44((fStack500 + fStack516) * fVar19,
                                                                      (local_1f8 + local_208) * fVar18)));
                local_148 = CONCAT412(fRam0000000140c7841c * local_21c,
                                      CONCAT48(fRam0000000140c78418 * local_21c,
                                               CONCAT44(fRam0000000140c78414 * local_21c,
                                                        _DAT_140c78410 * local_21c)));
                local_138 = CONCAT412(fRam0000000140c7842c * local_21c,
                                      CONCAT48(fRam0000000140c78428 * local_21c,
                                               CONCAT44(fRam0000000140c78424 * local_21c,
                                                        _DAT_140c78420 * local_21c)));
                local_118 = _DAT_140c78440;
                uStack276 = uRam0000000140c78444;
                uStack272 = uRam0000000140c78448;
                uStack268 = uRam0000000140c7844c;
                local_128 = CONCAT412(fRam0000000140c7843c * fVar17,
                                      CONCAT48(fRam0000000140c78438 * fVar17,
                                               CONCAT44(fRam0000000140c78434 * fVar17,
                                                        _DAT_140c78430 * fVar17)));
                local_150 = fVar17;
                FUN_1401afb10(&local_108,local_198);
                (**(code **)(*DAT_140c65680 + 0x50))(DAT_140c65680,local_198);
                if (local_258 == (longlong *)0x0) {
                    local_108 = local_198;
                    FUN_1401afc20(&local_108);
                    local_2f8._0_4_ = SUB164(local_268,0);
                    fVar13 = local_208;
                    fVar12 = local_1f8;
                    if (fVar15 < local_298) {
                        fVar13 = local_1f8;
                        fVar12 = local_208;
                    }
                    fVar11 = fStack516;
                    fVar14 = fStack500;
                    if (fVar15 < local_288) {
                        fVar11 = fStack500;
                        fVar14 = fStack516;
                    }
                    fVar10 = local_2f8._0_4_ + fVar12 * local_298 + fVar14 * local_288;
                    fVar14 = local_1f8 * fStack660;
                    fVar13 = local_2f8._0_4_ + fVar13 * local_298 + fVar11 * local_288;
                    local_2f8._4_4_ = SUB164(local_268 >> 0x20,0);
                    fVar12 = local_208 * fStack660;
                    if (fVar15 < fStack660) {
                        fVar12 = fVar14;
                        fVar14 = local_208 * fStack660;
                    }
                    fVar11 = fStack500 * fStack644;
                    local_2a8._4_4_ = fStack516 * fStack644;
                    if (fVar15 < fStack644) {
                        local_2a8._4_4_ = fVar11;
                        fVar11 = fStack516 * fStack644;
                    }
                    fVar11 = local_2f8._4_4_ + fVar14 + fVar11;
                    local_2a8._4_4_ = local_2f8._4_4_ + fVar12 + local_2a8._4_4_;
                    fVar12 = fVar15;
                    fStack672 = fVar15;
                    fStack668 = fVar15;
                    fVar14 = fVar15;
                }
                else {
                    fVar14 = fVar15;
                    pauVar5 = (undefined (*) [16])FUN_140141910();
                    auVar3 = *pauVar5;
                    iVar6 = *DAT_140c63750;
                    iVar4 = DAT_140c48100;
                    if (iVar6 < DAT_140c48100) {
                        iVar4 = iVar6;
                    }
                    if (*(float *)((longlong)local_258 + 0x33c) <=
                        *(float *)(&DAT_140c48110 + (longlong)iVar4 * 4) &&
                        *(float *)(&DAT_140c48110 + (longlong)iVar4 * 4) !=
                        *(float *)((longlong)local_258 + 0x33c)) {
                        local_2a8._0_4_ = SUB124(*(undefined (*) [12])*pauVar5,0);
                        fVar13 = 25.0;
                        if (25.0 <= local_2a8._0_4_) {
                            fVar13 = local_2a8._0_4_;
                        }
                    }
                    else {
                        iVar4 = DAT_140c48100;
                        if (iVar6 < DAT_140c48100) {
                            iVar4 = iVar6;
                        }
                        fVar13 = *(float *)(&DAT_140c48110 + (longlong)iVar4 * 4);
                    }
                    local_2a8._4_4_ = SUB164(auVar3 >> 0x20,0);
                    fStack672 = SUB164(auVar3 >> 0x40,0);
                    fStack668 = SUB164(auVar3 >> 0x60,0);
                    fVar10 = 0.0 - (fVar13 - 0.0);
                    fVar11 = 0.0 - (local_2a8._4_4_ - 0.0);
                    fVar15 = 0.0 - (fStack672 - 0.0);
                    fVar12 = 0.0 - (fStack668 - 0.0);
                    fVar13 = fVar13 - (fVar13 - 0.0);
                    local_2a8._4_4_ = local_2a8._4_4_ - (local_2a8._4_4_ - 0.0);
                    fStack672 = fStack672 - (fStack672 - 0.0);
                    fStack668 = fStack668 - (fStack668 - 0.0);
                    local_2b8 = CONCAT412(fVar12,CONCAT48(fVar15,CONCAT44(fVar11,fVar10)));
                    _local_2a8 = CONCAT412(fStack668,CONCAT48(fStack672,CONCAT44(local_2a8._4_4_,fVar13)));
                }
                _local_2c8 = CONCAT412(fStack668,CONCAT48(fStack672,CONCAT44(local_2a8._4_4_,fVar13)));
                _local_2d8 = CONCAT412(fVar12,CONCAT48(fVar15,CONCAT44(fVar11,fVar10)));
                if (local_228 != (longlong *)0x0) {
                    plVar8 = local_228;
                    piVar9 = DAT_140c63750;
                    if (*local_228 == 0) {
                        local_2e8 = 0;
                        local_2e4 = 0;
                    }
                    else {
                        FUN_1401015b0();
                    }
                    iVar6 = DAT_140c45b10;
                    if (*piVar9 < DAT_140c45b10) {
                        iVar6 = *piVar9;
                    }
                    lVar1 = (longlong)iVar6 * 0x10;
                    fVar10 = fVar10 - *(float *)(&DAT_140c45b20 + lVar1);
                    fVar11 = fVar11 - *(float *)(lVar1 + 0x140c45b24);
                    auVar3 = CONCAT412(fVar12 - *(float *)(lVar1 + 0x140c45b2c),
                                       CONCAT48(fVar15 - *(float *)(lVar1 + 0x140c45b28),
                                                CONCAT44(fVar11,fVar10)));
                    iVar6 = DAT_140c45bd0;
                    if (*piVar9 < DAT_140c45bd0) {
                        iVar6 = *piVar9;
                    }
                    lVar1 = (longlong)iVar6 * 0x10;
                    fVar13 = *(float *)(&DAT_140c45be0 + lVar1) + fVar13;
                    local_2a8._4_4_ = *(float *)(lVar1 + 0x140c45be4) + local_2a8._4_4_;
                    auVar2 = CONCAT412(*(float *)(lVar1 + 0x140c45bec) + fStack668,
                                       CONCAT48(*(float *)(lVar1 + 0x140c45be8) + fStack672,
                                                CONCAT44(local_2a8._4_4_,fVar13)));
                    if (fVar13 - fVar10 < (float)local_2e8) {
                        fVar15 = ((float)local_2e8 - (fVar13 - fVar10)) * fVar16;
                        fVar10 = fVar10 - fVar15;
                        fVar13 = fVar13 + fVar15;
                    }
                    _local_2c8 = CONCAT124(SUB1612(auVar2 >> 0x20,0),fVar13);
                    _local_2d8 = CONCAT124(SUB1612(auVar3 >> 0x20,0),fVar10);
                    if (local_2a8._4_4_ - fVar11 < (float)local_2e4) {
                        fVar15 = ((float)local_2e4 - (local_2a8._4_4_ - fVar11)) * fVar16;
                    }
                    if (*plVar8 != 0) {
                        local_328 = (float *)((ulonglong)local_328 & 0xffffffff00000000 |
                                              (ulonglong)
                                                      (uint)((DAT_140c63664 - *(float *)(plVar8 + 1)) *
                                                             *(float *)((longlong)plVar8 + 0xc)));
                        FUN_140103e60(*plVar8,local_2d8,local_1c8,0);
                    }
                }
                if (local_258 == (longlong *)0x0) {
                    local_310 = 1;
                    local_318 = local_1d8;
                    local_328 = &local_208;
                    local_320 = 0x11;
                    (**(code **)(*DAT_140c65680 + 0x108))
                            (DAT_140c65680,local_250,local_240,local_238 - local_240 >> 1);
                    fVar15 = fVar14;
                }
                else {
                    (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,0x10);
                    FUN_140141100(local_258);
                    local_1b8 = CONCAT412(local_1cc,CONCAT48(0x3f800000,CONCAT44(fVar17,0x3f800000)));
                    (**(code **)(*DAT_140c65680 + 0xa8))(DAT_140c65680,local_1b8);
                    FUN_140141820(local_258,local_2b8);
                    (**(code **)(*DAT_140c65680 + 0x48))();
                    fVar15 = fVar14;
                }
                (**(code **)(*DAT_140c65680 + 0x48))();
                if (local_250 != (longlong *)0x0) {
                    (**(code **)(*local_250 + 8))();
                    local_250 = (longlong *)0x0;
                }
                if (local_258 != (longlong *)0x0) {
                    (**(code **)(*local_258 + 8))();
                    local_258 = (longlong *)0x0;
                }
                if (local_240 != 0) {
                    FUN_14018b900(local_240,0);
                }
                plVar7 = (longlong *)*plVar7;
            } while (plVar7 != (longlong *)*(longlong *)(param_1 + 0x7c68));
        }
        FUN_1403fe1b0(param_1 + 0x7c60);
    }
    FUN_1407db4f0(local_b8 ^ (ulonglong)auStack840);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1403f52a0(undefined8 param_1,undefined8 param_2,float *param_3,longlong param_4)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    float *pfVar4;
    longlong *plVar5;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    undefined auVar6 [16];
    float fVar7;
    float fVar8;
    float fVar9;
    ulonglong uVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    undefined4 uVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    undefined auStack1384 [32];
    longlong *local_548;
    undefined4 local_540;
    longlong *local_538;
    undefined4 local_530;
    float local_528;
    float fStack1316;
    float fStack1312;
    float fStack1308;
    undefined local_518 [4];
    undefined auStack1300 [12];
    int local_508;
    int local_504;
    int local_500;
    int local_4fc;
    float local_4f8;
    float local_4f4;
    float local_4e8;
    float fStack1252;
    float fStack1248;
    float fStack1244;
    float local_4d8;
    float fStack1236;
    float fStack1232;
    float fStack1228;
    float local_4c8;
    float fStack1220;
    float fStack1216;
    float fStack1212;
    undefined4 local_4b8;
    undefined4 uStack1204;
    float fStack1200;
    undefined4 uStack1196;
    float local_4a8;
    float fStack1188;
    float fStack1184;
    float fStack1180;
    undefined *local_498;
    float *local_490;
    undefined *local_488;
    float *local_480;
    undefined *local_478;
    float *local_470;
    undefined *local_468;
    float *local_460;
    undefined local_458 [16];
    float local_448;
    float fStack1092;
    float fStack1088;
    float fStack1084;
    float local_438;
    float fStack1076;
    float fStack1072;
    float fStack1068;
    float local_428;
    float fStack1060;
    float fStack1056;
    float fStack1052;
    undefined4 local_418;
    undefined4 uStack1044;
    float fStack1040;
    undefined4 uStack1036;
    float local_408;
    float fStack1028;
    float fStack1024;
    float fStack1020;
    float local_3f8;
    float fStack1012;
    float fStack1008;
    float fStack1004;
    float local_3e8;
    float fStack996;
    float fStack992;
    float fStack988;
    ulonglong local_3d8;
    undefined8 uStack976;
    ulonglong local_3c8;
    undefined8 uStack960;
    undefined local_3b8 [16];
    undefined local_398 [64];
    float local_358;
    float local_354;
    undefined4 local_350;
    undefined local_348 [16];
    undefined local_338 [16];
    undefined local_328 [16];
    ulonglong local_318;
    undefined8 uStack784;
    undefined *local_308;
    float *local_300;
    undefined local_2f8 [64];
    undefined *local_2b8;
    float *local_2b0;
    int local_268;
    int local_264;
    int local_260;
    int local_25c;
    int local_e8;
    int local_e4;
    int local_e0;
    int local_dc;
    ulonglong local_d8;

    local_d8 = DAT_140c0f7b0 ^ (ulonglong)auStack1384;
    if ((longlong *)**(longlong **)(param_4 + 8) != *(longlong **)(param_4 + 8)) {
        lVar3 = (**(code **)(*DAT_140c65670 + 0x248))();
        (**(code **)(*DAT_140c65680 + 0x88))();
        plVar5 = (longlong *)**(longlong **)(param_4 + 8);
        if (plVar5 != *(longlong **)(param_4 + 8)) {
            uVar18 = 0;
            FUN_1408fe3d0();
            fVar15 = extraout_XMM0_Da;
            local_4f8 = extraout_XMM0_Da;
            FUN_1408fc950();
            fVar16 = 0.5;
            local_488 = local_348;
            fVar17 = 1.0;
            local_480 = &local_4e8;
            local_478 = local_2f8;
            local_470 = &local_408;
            local_498 = local_348;
            local_490 = &local_448;
            local_468 = local_2f8;
            local_460 = &local_408;
            local_4f4 = extraout_XMM0_Da_00;
            do {
                fStack1068 = *(float *)((longlong)plVar5 + 0x4c);
                local_448 = _DAT_140c78410 * fStack1068;
                fStack1092 = fRam0000000140c78414 * fStack1068;
                fStack1088 = fRam0000000140c78418 * fStack1068;
                fStack1084 = fRam0000000140c7841c * fStack1068;
                local_428 = _DAT_140c78430 * fStack1068;
                fStack1060 = fRam0000000140c78434 * fStack1068;
                fStack1056 = fRam0000000140c78438 * fStack1068;
                fStack1052 = fRam0000000140c7843c * fStack1068;
                local_438 = _DAT_140c78420 * fStack1068;
                fStack1076 = fRam0000000140c78424 * fStack1068;
                fStack1072 = fRam0000000140c78428 * fStack1068;
                fStack1068 = fRam0000000140c7842c * fStack1068;
                local_418 = _DAT_140c78440;
                uStack1044 = uRam0000000140c78444;
                fStack1040 = (float)uRam0000000140c78448;
                uStack1036 = uRam0000000140c7844c;
                fVar11 = local_4f4;
                if (*(int *)((longlong)plVar5 + 0x54) == 0) {
                    if (plVar5[2] == 0) {
                        local_530 = 1;
                        fVar14 = (float)(ulonglong)*(uint *)(lVar3 + 8) * fVar16;
                        iVar2 = DAT_140c44f30;
                        if (*DAT_140c63750 < DAT_140c44f30) {
                            iVar2 = *DAT_140c63750;
                        }
                        fStack1316 = 0.0;
                        local_538 = plVar5 + 0x12;
                        local_548 = (longlong *)&local_528;
                        local_540 = 0x411;
                        fVar8 = (float)(ulonglong)*(uint *)(lVar3 + 8) *
                                *(float *)(&DAT_140c44f40 + (longlong)iVar2 * 4) * fVar16;
                        local_528 = fVar14 - fVar8;
                        _local_518 = CONCAT124(SUB1612(_local_518 >> 0x20,0) &
                                               SUB1612((undefined  [16])0xffffffffffffffff >> 0x20,0),
                                               fVar8 + fVar14);
                        (**(code **)(*DAT_140c65680 + 0x108))(DAT_140c65680,plVar5[3]);
                    }
                    else {
                        FUN_140141100();
                        pfVar4 = (float *)FUN_140141910();
                        auVar6 = divps(ZEXT816(CONCAT44((float)(int)pfVar4[1] - (float)DAT_140c77764,
                                                        (float)(int)*pfVar4 - (float)DAT_140c77760)),
                                       _DAT_140b7b2f0);
                        local_528 = (float)DAT_140c77760 - SUB164(auVar6,0);
                        fVar14 = SUB164(auVar6 >> 0x20,0);
                        fStack1316 = (float)DAT_140c77764 - fVar14;
                        fVar8 = SUB164(auVar6 >> 0x40,0);
                        fStack1312 = 0.0 - fVar8;
                        fVar7 = SUB164(auVar6 >> 0x60,0);
                        fStack1308 = 0.0 - fVar7;
                        _local_518 = CONCAT412(0.0 - fVar7,
                                               CONCAT48(0.0 - fVar8,
                                                        CONCAT44((float)(int)pfVar4[1] - fVar14,
                                                                 (float)(int)*pfVar4 - SUB164(auVar6,0))));
                    }
                    fVar14 = *(float *)(plVar5 + 0x10);
                    fVar8 = *(float *)((longlong)plVar5 + 0x84);
                    fVar7 = *(float *)(plVar5 + 0x11);
                    auStack1300._0_4_ = auStack1300._0_4_ - fStack1316;
                    fVar12 = fVar8 * param_3[4] + fVar14 * *param_3 + fVar7 * param_3[8] + param_3[0xc];
                    fVar13 = fVar8 * param_3[5] + fVar14 * param_3[1] + fVar7 * param_3[9] + param_3[0xd];
                    fStack1040 = fVar8 * param_3[6] + fVar14 * param_3[2] + fVar7 * param_3[10] + param_3[0xe]
                            ;
                    fVar14 = fVar8 * param_3[7] + fVar14 * param_3[3] + fVar7 * param_3[0xb] + param_3[0xf];
                    local_458 = CONCAT412(fVar14,CONCAT48(fStack1040,CONCAT44(fVar13,fVar12)));
                    fVar14 = fVar17 / fVar14;
                    fStack1040 = fVar14 * fStack1040;
                    local_518 = local_518 - local_528;
                    local_528 = (float)(int)((fVar12 * fVar16 * fVar14 + fVar16) *
                                             (float)(ulonglong)*(uint *)(lVar3 + 8) + fVar16) -
                                local_518 * fVar16;
                    fStack1316 = (float)(int)((fVar16 - fVar13 * fVar16 * fVar14) *
                                              (float)(ulonglong)*(uint *)(lVar3 + 0xc) + fVar16) -
                                 auStack1300._0_4_;
                }
                else {
                    fStack1040 = *(float *)(plVar5 + 9);
                    _local_518 = *(undefined (*) [16])(plVar5 + 0xe);
                    local_528 = *(float *)(plVar5 + 0xc);
                    fStack1316 = *(float *)((longlong)plVar5 + 100);
                    fStack1312 = *(float *)(plVar5 + 0xd);
                    fStack1308 = *(float *)((longlong)plVar5 + 0x6c);
                    if (plVar5[2] != 0) {
                        FUN_140141100();
                    }
                }
                auVar6 = ZEXT416((uint)(*(float *)((longlong)plVar5 + 0x74) -
                                        *(float *)((longlong)plVar5 + 100))) &
                         (undefined  [16])0xffffffffffffffff;
                local_408 = _DAT_140c78410;
                fStack1028 = fRam0000000140c78414;
                fStack1024 = fRam0000000140c78418;
                fStack1020 = fRam0000000140c7841c;
                fVar9 = SUB164(auVar6,0) * fVar16 + *(float *)((longlong)plVar5 + 100);
                fVar16 = (*(float *)(plVar5 + 0xe) - *(float *)(plVar5 + 0xc)) * fVar16 +
                         *(float *)(plVar5 + 0xc);
                local_3f8 = _DAT_140c78420;
                fStack1012 = fRam0000000140c78424;
                fStack1008 = fRam0000000140c78428;
                fStack1004 = fRam0000000140c7842c;
                local_3e8 = _DAT_140c78430;
                fStack996 = fRam0000000140c78434;
                fStack992 = fRam0000000140c78438;
                fStack988 = fRam0000000140c7843c;
                local_3b8 = CONCAT412(uVar18,CONCAT48(uVar18,CONCAT44(fVar9,fVar16)));
                uStack976 = SUB168(CONCAT412(fVar17,CONCAT48(uVar18,CONCAT44(uVar18,fVar16))) >> 0x40,0);
                local_3d8 = (ulonglong)(uint)fVar16 |
                                             SUB168(CONCAT124(SUB1612(auVar6 >> 0x20,0),fVar9),0) << 0x20;
                fVar17 = _DAT_140c78430;
                fVar14 = fRam0000000140c78434;
                fVar8 = fRam0000000140c78438;
                fVar7 = fRam0000000140c7843c;
                fVar12 = _DAT_140c78420;
                fVar13 = fRam0000000140c78424;
                fVar19 = fRam0000000140c78428;
                fVar20 = fRam0000000140c7842c;
                fVar21 = _DAT_140c78410;
                fVar22 = fRam0000000140c78414;
                fVar23 = fRam0000000140c78418;
                fVar24 = fRam0000000140c7841c;
                FUN_1408fe3d0();
                fVar16 = extraout_XMM0_Da_01;
                FUN_1408fc950();
                local_4a8 = extraout_XMM0_Da_02 * fVar11 * fVar15 + fVar16 * fVar15 * fVar11;
                fStack1188 = extraout_XMM0_Da_02 * fVar15 * fVar11 - fVar16 * fVar11 * fVar15;
                fStack1184 = fVar16 * fVar11 * fVar11 - extraout_XMM0_Da_02 * fVar15 * fVar15;
                fStack1180 = fVar16 * fVar15 * fVar15 + extraout_XMM0_Da_02 * fVar11 * fVar11;
                fVar16 = fStack1188 * 2.0;
                local_354 = fVar9 * -1.0;
                local_328 = CONCAT412(fVar7,CONCAT48(fVar8,CONCAT44(fVar14,fVar17)));
                fStack1244 = 0.0;
                fStack1228 = 0.0;
                fStack1212 = 0.0;
                local_348 = CONCAT412(fVar24,CONCAT48(fVar23,CONCAT44(fVar22,fVar21)));
                local_338 = CONCAT412(fVar20,CONCAT48(fVar19,CONCAT44(fVar13,fVar12)));
                fVar15 = fStack1184 * 2.0;
                uVar18 = 0;
                fStack1220 = local_4a8 * 2.0 * fStack1180;
                local_4c8 = fVar15 * local_4a8 + fVar16 * fStack1180;
                fStack1248 = fVar15 * local_4a8 - fVar16 * fStack1180;
                local_4e8 = (1.0 - fVar16 * fStack1188) - fVar15 * fStack1184;
                fStack1232 = fVar15 * fStack1188 + fStack1220;
                fStack1220 = fVar15 * fStack1188 - fStack1220;
                fStack1252 = fVar16 * local_4a8 + fVar15 * fStack1180;
                local_4d8 = fVar16 * local_4a8 - fVar15 * fStack1180;
                local_358 = SUB164(local_3b8,0) * -1.0;
                fStack1216 = 1.0 - local_4a8 * 2.0 * local_4a8;
                fStack1236 = fStack1216 - fVar15 * fStack1184;
                fStack1216 = fStack1216 - fVar16 * fStack1188;
                local_4b8 = 0;
                uStack1204 = 0;
                fStack1200 = 0.0;
                uStack1196 = 0x3f800000;
                local_350 = 0;
                uVar10 = SUB168(CONCAT124(SUB1612(local_3b8 >> 0x20,0),local_358),0);
                local_308 = local_488;
                uStack784 = SUB168(CONCAT412(0x3f800000,ZEXT812(uVar10) & (undefined  [12])0xffffffff) >>
                                                                                                       0x40,0);
                local_318 = uVar10 & 0xffffffff | (ulonglong)(uint)local_354 << 0x20;
                local_300 = local_480;
                FUN_1401afb10(&local_308,local_2f8);
                local_2b8 = local_478;
                local_2b0 = local_470;
                FUN_1401afb10(&local_2b8,local_398);
                (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,1);
                (**(code **)(*DAT_140c65680 + 0x58))();
                if ((longlong *)plVar5[8] != (longlong *)0x0) {
                    local_500 = (int)local_518;
                    local_4fc = (int)auStack1300._0_4_;
                    local_508 = (int)local_528;
                    local_504 = (int)fStack1316;
                    if (*(longlong *)plVar5[8] != 0) {
                        FUN_140109c00();
                    }
                    local_508 = local_508 - (local_260 - local_268);
                    local_4d8 = local_438;
                    fStack1236 = fStack1076;
                    fStack1232 = fStack1072;
                    fStack1228 = fStack1068;
                    local_4e8 = local_448;
                    fStack1252 = fStack1092;
                    fStack1248 = fStack1088;
                    fStack1244 = fStack1084;
                    local_504 = local_504 - (local_25c - local_264);
                    local_4b8 = local_418;
                    uStack1204 = uStack1044;
                    uStack1196 = uStack1036;
                    fStack1200 = fStack1040 + 1e-05;
                    local_4c8 = local_428;
                    fStack1220 = fStack1060;
                    fStack1216 = fStack1056;
                    fStack1212 = fStack1052;
                    local_500 = local_500 + (local_e0 - local_e8);
                    local_4fc = local_4fc + (local_dc - local_e4);
                    (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,1);
                    (**(code **)(*DAT_140c65680 + 0x58))(DAT_140c65680,&local_4e8);
                    plVar1 = (longlong *)plVar5[8];
                    if (*plVar1 != 0) {
                        local_548 = (longlong *)
                                ((ulonglong)local_548 & 0xffffffff00000000 |
                                 (ulonglong)
                                         (uint)((DAT_140c63664 - *(float *)(plVar1 + 1)) *
                                                *(float *)((longlong)plVar1 + 0xc)));
                        FUN_140103cf0(*plVar1,&local_508);
                    }
                    (**(code **)(*DAT_140c65680 + 0x48))();
                }
                fVar16 = 0.5;
                fVar17 = 1.0;
                local_408 = _DAT_140c78410;
                fStack1028 = fRam0000000140c78414;
                fStack1024 = fRam0000000140c78418;
                fStack1020 = fRam0000000140c7841c;
                local_3f8 = _DAT_140c78420;
                fStack1012 = fRam0000000140c78424;
                fStack1008 = fRam0000000140c78428;
                fStack1004 = fRam0000000140c7842c;
                local_3e8 = _DAT_140c78430;
                fStack996 = fRam0000000140c78434;
                fStack992 = fRam0000000140c78438;
                fStack988 = fRam0000000140c7843c;
                local_348 = CONCAT412(fRam0000000140c7841c,
                                      CONCAT48(fRam0000000140c78418,
                                               CONCAT44(fRam0000000140c78414,_DAT_140c78410)));
                fVar11 = (auStack1300._0_4_ - fStack1316) * 0.5;
                local_358 = (local_518 - local_528) * 0.5;
                local_338 = CONCAT412(fRam0000000140c7842c,
                                      CONCAT48(fRam0000000140c78428,
                                               CONCAT44(fRam0000000140c78424,_DAT_140c78420)));
                fVar15 = local_358 + local_528;
                local_328 = CONCAT412(fRam0000000140c7843c,
                                      CONCAT48(fRam0000000140c78438,
                                               CONCAT44(fRam0000000140c78434,_DAT_140c78430)));
                local_358 = (float)((uint)local_528 ^ 0x80000000) - local_358;
                local_354 = (float)((uint)fStack1316 ^ 0x80000000) - fVar11;
                uStack976 = SUB168(CONCAT412(0x3f800000,CONCAT48(uVar18,CONCAT44(uVar18,fVar15))) >> 0x40,0)
                        ;
                local_3d8 = CONCAT44(fVar11 + fStack1316,fVar15);
                uStack784 = SUB168(CONCAT412(0x3f800000,CONCAT48(uVar18,CONCAT44(uVar18,local_358))) >> 0x40
                        ,0);
                local_318 = CONCAT44(local_354,local_358);
                local_308 = local_498;
                local_300 = local_490;
                local_350 = uVar18;
                FUN_1401afb10(&local_308,local_2f8);
                local_2b8 = local_468;
                local_2b0 = local_460;
                FUN_1401afb10(&local_2b8,&local_4e8);
                (**(code **)(*DAT_140c65680 + 0x58))(DAT_140c65680,&local_4e8);
                if (plVar5[2] == 0) {
                    local_530 = 1;
                    local_538 = plVar5 + 0x12;
                    local_548 = plVar5 + 0xc;
                    local_540 = 0x111;
                    (**(code **)(*DAT_140c65680 + 0x108))();
                }
                else {
                    (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,0x10);
                    uStack960 = SUB168(CONCAT412(*(undefined4 *)((longlong)plVar5 + 0x9c),
                                                 CONCAT48(SUB164(_DAT_140b7a4c0 >> 0x20,0),
                                                          SUB168(_DAT_140b7a4c0,0))) >> 0x40,0);
                    local_3c8 = SUB168(_DAT_140b7a4c0,0) & 0xffffffff | (ulonglong)(uint)fVar17 << 0x20;
                    (**(code **)(*DAT_140c65680 + 0xa8))(DAT_140c65680,&local_3c8);
                    FUN_140141820();
                    (**(code **)(*DAT_140c65680 + 0x48))();
                }
                (**(code **)(*DAT_140c65680 + 0x48))();
                plVar5 = (longlong *)*plVar5;
                fVar15 = local_4f8;
            } while (plVar5 != (longlong *)*(longlong *)(param_4 + 8));
        }
        FUN_1403fe1b0(param_4);
    }
    FUN_1407db4f0(local_d8 ^ (ulonglong)auStack1384);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1403f5e40(undefined8 param_1,undefined4 param_2,short *param_3,undefined4 *param_4,
                   undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,
                   undefined4 param_9)

{
    short sVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
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
    undefined local_d0 [8];
    undefined local_c8 [16];
    undefined8 local_b8;

    lVar2 = DAT_140c65898;
    lVar3 = 0;
    local_b8 = 0;
    local_c8 = ZEXT816(0);
    sVar1 = *param_3;
    while (sVar1 != 0) {
        lVar3 = lVar3 + 1;
        sVar1 = param_3[lVar3];
    }
    FUN_14001c1b0(local_d0,param_3,param_3 + lVar3);
    uVar5 = *param_4;
    uVar6 = param_4[1];
    uVar7 = param_4[2];
    uVar8 = param_4[3];
    uVar9 = param_4[4];
    uVar10 = param_4[5];
    uVar11 = param_4[6];
    uVar12 = param_4[7];
    uVar13 = *param_8;
    uVar14 = param_8[1];
    uVar15 = param_8[2];
    uVar16 = param_8[3];
    lVar3 = *(longlong *)(lVar2 + 0x7c98);
    plVar4 = (longlong *)FUN_14018b280(0x80,0);
    if (plVar4 + 2 != (longlong *)0x0) {
        *(undefined4 *)(plVar4 + 2) = param_2;
        plVar4[4] = 0;
        plVar4[5] = 0;
        plVar4[6] = 0;
        FUN_14001c1b0(plVar4 + 3,local_c8._0_8_,local_c8._8_8_);
        *(undefined4 *)((longlong)plVar4 + 0x44) = param_9;
        *(undefined4 *)(plVar4 + 7) = param_5;
        *(undefined4 *)((longlong)plVar4 + 0x3c) = param_6;
        *(undefined4 *)(plVar4 + 8) = param_7;
        *(undefined (*) [16])(plVar4 + 10) = CONCAT412(uVar8,CONCAT48(uVar7,CONCAT44(uVar6,uVar5)));
        *(undefined (*) [16])(plVar4 + 0xc) = CONCAT412(uVar12,CONCAT48(uVar11,CONCAT44(uVar10,uVar9)));
        *(undefined (*) [16])(plVar4 + 0xe) = CONCAT412(uVar16,CONCAT48(uVar15,CONCAT44(uVar14,uVar13)))
                ;
    }
    *plVar4 = lVar3;
    plVar4[1] = *(longlong *)(lVar3 + 8);
    **(longlong ***)(lVar3 + 8) = plVar4;
    *(longlong **)(lVar3 + 8) = plVar4;
    if (local_c8._0_8_ != 0) {
        FUN_14018b900(local_c8._0_8_,0);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1403f5fd0(longlong param_1)

{
    short sVar1;
    int iVar2;
    short *psVar3;
    longlong *plVar4;
    ulonglong uVar5;
    longlong *plVar6;
    ulonglong uVar7;
    longlong lVar8;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    float fVar9;
    undefined auVar10 [16];
    float fVar11;
    float fVar12;
    undefined4 uVar13;
    float fVar14;
    float fVar15;
    undefined4 uVar16;
    undefined4 uVar17;
    undefined4 uVar18;
    undefined4 uVar19;
    undefined4 uVar20;
    undefined4 uVar21;
    undefined4 uVar22;
    undefined auStack1208 [32];
    float local_498;
    float local_488;
    float local_484;
    float local_478;
    float local_474;
    float local_468;
    undefined4 local_464;
    float local_458;
    float fStack1108;
    float fStack1104;
    float fStack1100;
    undefined *local_448;
    undefined4 *local_440;
    undefined4 *local_438;
    float *local_430;
    float local_428;
    float local_424;
    float local_420;
    undefined4 local_41c;
    float local_418;
    float local_414;
    float local_410;
    undefined4 local_40c;
    float local_408;
    float local_404;
    float local_400;
    undefined4 local_3fc;
    undefined4 local_3f8;
    undefined4 uStack1012;
    undefined4 uStack1008;
    undefined4 uStack1004;
    undefined local_3e8 [16];
    undefined4 local_3d8;
    undefined4 uStack980;
    undefined4 uStack976;
    undefined4 uStack972;
    undefined4 local_3c8;
    undefined4 uStack964;
    undefined4 uStack960;
    undefined4 uStack956;
    undefined4 local_3b8;
    undefined4 uStack948;
    undefined4 uStack944;
    undefined4 uStack940;
    ulonglong local_3a8;
    undefined8 uStack928;
    undefined local_398 [64];
    float local_358;
    float local_354;
    undefined4 local_350;
    undefined4 local_348;
    undefined4 uStack836;
    undefined4 uStack832;
    undefined4 uStack828;
    undefined local_338 [16];
    undefined local_328 [16];
    undefined local_318 [16];
    undefined4 *local_308;
    float *local_300;
    undefined local_2f8 [64];
    undefined *local_2b8;
    undefined4 *local_2b0;
    int local_268;
    int local_264;
    int local_260;
    int local_25c;
    int local_258;
    int local_250;
    int local_248;
    int local_240;
    int local_238;
    int local_230;
    int local_228;
    int local_220;
    int local_214;
    int local_20c;
    int local_1c4;
    int local_1bc;
    int local_174;
    int local_16c;
    int local_124;
    int local_11c;
    ulonglong local_d8;

    local_d8 = DAT_140c0f7b0 ^ (ulonglong)auStack1208;
    if ((longlong *)**(longlong **)(param_1 + 0x7c98) != *(longlong **)(param_1 + 0x7c98)) {
        (**(code **)(*DAT_140c65680 + 0x88))();
        plVar6 = (longlong *)**(longlong **)(param_1 + 0x7c98);
        if (plVar6 != *(longlong **)(param_1 + 0x7c98)) {
            uVar13 = 0;
            FUN_1408fe3d0();
            fVar12 = extraout_XMM0_Da;
            local_488 = extraout_XMM0_Da;
            FUN_1408fc950();
            local_438 = &local_348;
            local_430 = &local_428;
            local_448 = local_2f8;
            local_440 = &local_3d8;
            local_484 = extraout_XMM0_Da_00;
            do {
                fVar15 = 2.0;
                iVar2 = *(int *)(plVar6 + 2);
                if ((iVar2 < 0) &&
                    ((int)((*(longlong *)(DAT_140c65898 + 0x7cc0) - *(longlong *)(DAT_140c65898 + 0x7cb8)) /
                           0x70) <= iVar2)) {
                    lVar8 = 0;
                }
                else {
                    lVar8 = (longlong)iVar2 * 0x70 + *(longlong *)(DAT_140c65898 + 0x7cb8);
                }
                local_478 = *(float *)(plVar6 + 10);
                local_468 = *(float *)(plVar6 + 10);
                local_3c8 = _DAT_140c78420;
                uStack964 = uRam0000000140c78424;
                uStack960 = uRam0000000140c78428;
                uStack956 = uRam0000000140c7842c;
                local_3b8 = _DAT_140c78430;
                uStack948 = uRam0000000140c78434;
                uStack944 = uRam0000000140c78438;
                uStack940 = uRam0000000140c7843c;
                local_464 = *(undefined4 *)((longlong)plVar6 + 100);
                auVar10 = ZEXT416((uint)(*(float *)((longlong)plVar6 + 100) -
                                         *(float *)((longlong)plVar6 + 0x54))) &
                          (undefined  [16])0xffffffffffffffff;
                local_3d8 = _DAT_140c78410;
                uStack980 = uRam0000000140c78414;
                uStack976 = uRam0000000140c78418;
                uStack972 = uRam0000000140c7841c;
                fVar9 = SUB164(auVar10,0) * 0.5 + *(float *)((longlong)plVar6 + 0x54);
                fVar11 = (*(float *)(plVar6 + 0xc) - *(float *)(plVar6 + 10)) * 0.5 +
                         *(float *)(plVar6 + 10);
                local_3e8 = CONCAT412(uVar13,CONCAT48(uVar13,CONCAT44(fVar9,fVar11)));
                uStack928 = SUB168(CONCAT412(0x3f800000,CONCAT48(uVar13,CONCAT44(uVar13,fVar11))) >> 0x40,0)
                        ;
                local_3a8 = (ulonglong)(uint)fVar11 |
                                             SUB168(CONCAT124(SUB1612(auVar10 >> 0x20,0),fVar9),0) << 0x20;
                fVar14 = local_484;
                uVar13 = _DAT_140c78430;
                uVar16 = uRam0000000140c78434;
                uVar17 = uRam0000000140c78438;
                uVar18 = uRam0000000140c7843c;
                uVar19 = _DAT_140c78420;
                uVar20 = uRam0000000140c78424;
                uVar21 = uRam0000000140c78428;
                uVar22 = uRam0000000140c7842c;
                FUN_1408fe3d0();
                fVar11 = extraout_XMM0_Da_01;
                FUN_1408fc950();
                local_458 = fVar14 * fVar12 * extraout_XMM0_Da_02 + fVar12 * fVar14 * fVar11;
                fStack1108 = fVar12 * fVar14 * extraout_XMM0_Da_02 - fVar14 * fVar12 * fVar11;
                fStack1100 = fVar12 * fVar12 * fVar11 + fVar14 * fVar14 * extraout_XMM0_Da_02;
                fStack1104 = fVar14 * fVar14 * fVar11 - fVar12 * fVar12 * extraout_XMM0_Da_02;
                local_41c = 0;
                fVar12 = fStack1108 * fVar15;
                local_40c = 0;
                local_3fc = 0;
                fVar11 = fVar15 * 0.0;
                local_338 = CONCAT412(uVar22,CONCAT48(uVar21,CONCAT44(uVar20,uVar19)));
                local_328 = CONCAT412(uVar18,CONCAT48(uVar17,CONCAT44(uVar16,uVar13)));
                local_404 = local_458 * fVar15 * fStack1100;
                local_408 = local_458 * fVar11 + fVar12 * fStack1100;
                local_420 = local_458 * fVar11 - fVar12 * fStack1100;
                local_410 = fStack1108 * fVar11 + local_404;
                local_404 = fStack1108 * fVar11 - local_404;
                local_428 = (1.0 - fStack1108 * fVar12) - fVar11 * 0.0;
                local_424 = local_458 * fVar12 + fVar11 * fStack1100;
                local_418 = local_458 * fVar12 - fVar11 * fStack1100;
                local_414 = 1.0 - local_458 * local_458 * fVar15;
                local_400 = local_414 - fStack1108 * fVar12;
                local_358 = local_3e8._0_4_ * -1.0;
                local_354 = fVar9 * -1.0;
                local_414 = local_414 - fVar11 * 0.0;
                local_350 = 0;
                local_3f8 = 0;
                uStack1012 = 0;
                uStack1008 = 0;
                uStack1004 = 0x3f800000;
                local_348 = _DAT_140c78410;
                uStack836 = uRam0000000140c78414;
                uStack832 = uRam0000000140c78418;
                uStack828 = uRam0000000140c7841c;
                local_308 = local_438;
                local_300 = local_430;
                local_318 = CONCAT412(0x3f800000,ZEXT812(CONCAT44(local_354,local_358)));
                FUN_1401afb10(&local_308,local_2f8);
                local_2b8 = local_448;
                local_2b0 = local_440;
                FUN_1401afb10(&local_2b8,local_398);
                (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,1);
                (**(code **)(*DAT_140c65680 + 0x58))();
                uVar7 = 0;
                while( true ) {
                    psVar3 = (short *)plVar6[4];
                    uVar5 = 0;
                    sVar1 = *psVar3;
                    while (sVar1 != 0) {
                        uVar5 = uVar5 + 1;
                        sVar1 = psVar3[uVar5];
                    }
                    if (uVar5 <= uVar7) break;
                    if ((ushort)psVar3[uVar7] - 0x30 < 10) {
                        plVar4 = *(longlong **)
                                (lVar8 + 0x20 + (longlong)(int)((ushort)psVar3[uVar7] - 0x30) * 8);
                        if (*plVar4 != 0) {
                            FUN_140109c00();
                        }
                        fVar12 = 0.5;
                        local_468 = (float)((((((local_250 - local_248) - local_258) - local_238) - local_228) -
                                             local_268) + local_260 + local_240 + local_230 + local_220) *
                                    *(float *)((longlong)plVar6 + 0x3c) + 0.5 + local_478;
                        local_474 = *(float *)((longlong)plVar6 + 100) -
                                    ((float)((((((local_25c - local_264) - local_214) - local_1c4) - local_174)
                                              - local_124) + local_20c + local_1bc + local_16c + local_11c) *
                                     *(float *)((longlong)plVar6 + 0x3c) + 0.5);
                        if (*plVar4 != 0) {
                            local_498 = (DAT_140c63664 - *(float *)(plVar4 + 1)) *
                                        *(float *)((longlong)plVar4 + 0xc);
                            FUN_140103e60(*plVar4,&local_478,plVar6 + 0xe,0);
                        }
                        local_478 = (float)*(int *)((longlong)plVar6 + 0x44) *
                                    *(float *)((longlong)plVar6 + 0x3c) + fVar12 + local_468;
                    }
                    uVar7 = (ulonglong)((int)uVar7 + 1);
                }
                (**(code **)(*DAT_140c65680 + 0x48))();
                plVar6 = (longlong *)*plVar6;
                uVar13 = 0;
                fVar12 = local_488;
            } while (plVar6 != (longlong *)*(longlong *)(param_1 + 0x7c98));
        }
        plVar6 = (longlong *)**(longlong **)(param_1 + 0x7c98);
        if (plVar6 != *(longlong **)(param_1 + 0x7c98)) {
            do {
                plVar4 = (longlong *)*plVar6;
                if (plVar6[4] != 0) {
                    FUN_14018b900(plVar6[4],0);
                }
                FUN_14018b900(plVar6,0);
                plVar6 = plVar4;
            } while (plVar4 != (longlong *)*(longlong *)(param_1 + 0x7c98));
        }
        *(undefined8 *)*(undefined8 *)(param_1 + 0x7c98) = *(undefined8 *)(param_1 + 0x7c98);
        *(longlong *)(*(longlong *)(param_1 + 0x7c98) + 8) = *(longlong *)(param_1 + 0x7c98);
    }
    FUN_1407db4f0(local_d8 ^ (ulonglong)auStack1208);
    return;
}



void FUN_1403f6750(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;

    if ((longlong *)**(longlong **)(param_1 + 0x7ca8) != *(longlong **)(param_1 + 0x7ca8)) {
        (**(code **)(*DAT_140c65680 + 0x88))();
        plVar2 = (longlong *)**(longlong **)(param_1 + 0x7ca8);
        if (plVar2 != *(longlong **)(param_1 + 0x7ca8)) {
            do {
                plVar1 = (longlong *)plVar2[8];
                if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
                    FUN_140103e60(*plVar1,plVar2 + 2,plVar2 + 6,0,
                                  (DAT_140c63664 - *(float *)(plVar1 + 1)) *
                                  *(float *)((longlong)plVar1 + 0xc));
                }
                plVar2 = (longlong *)*plVar2;
            } while (plVar2 != (longlong *)*(longlong *)(param_1 + 0x7ca8));
        }
        plVar2 = (longlong *)**(longlong **)(param_1 + 0x7ca8);
        if (plVar2 != *(longlong **)(param_1 + 0x7ca8)) {
            do {
                plVar1 = (longlong *)*plVar2;
                FUN_14018b900(plVar2,0);
                plVar2 = plVar1;
            } while (plVar1 != (longlong *)*(longlong *)(param_1 + 0x7ca8));
        }
        *(undefined8 *)*(undefined8 *)(param_1 + 0x7ca8) = *(undefined8 *)(param_1 + 0x7ca8);
        *(longlong *)(*(longlong *)(param_1 + 0x7ca8) + 8) = *(longlong *)(param_1 + 0x7ca8);
    }
    return;
}



int FUN_1403f6830(undefined8 param_1,longlong param_2)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined2 *puVar4;
    undefined2 *puVar5;
    longlong lVar6;
    undefined4 uVar7;
    undefined8 local_58;
    undefined4 local_50;
    undefined4 local_4c;
    undefined2 *local_40;
    undefined2 *local_38;
    undefined2 *local_30;

    lVar6 = DAT_140c65898;
    puVar3 = (undefined8 *)
            FUN_140108e80(*(longlong *)(DAT_140c65898 + 0x7340) + 0xf0,*(undefined8 *)(param_2 + 8));
    if (puVar3 != (undefined8 *)0x0) {
        puVar4 = (undefined2 *)FUN_14018b280(0x10);
        local_30 = puVar4 + 8;
        if (puVar4 != (undefined2 *)0x0) {
            *puVar4 = 0;
        }
        uVar7 = DAT_140c63664;
        local_58 = 0;
        puVar1 = *(undefined8 **)(lVar6 + 0x7c50);
        local_50 = DAT_140c63664;
        local_4c = 0x3f800000;
        local_40 = puVar4;
        local_38 = puVar4;
        if (puVar1 == *(undefined8 **)(lVar6 + 0x7c58)) {
            FUN_1403fbb30(lVar6 + 0x7c40,puVar1,&local_58);
        }
        else {
            if (puVar1 != (undefined8 *)0x0) {
                puVar1[3] = 0;
                puVar1[4] = 0;
                puVar1[5] = 0;
                puVar5 = (undefined2 *)FUN_14018b280(0x10);
                puVar1[3] = puVar5;
                puVar1[4] = puVar5;
                puVar1[5] = puVar5 + 8;
                if (puVar5 != (undefined2 *)0x0) {
                    *puVar5 = 0;
                }
                *(undefined4 *)(puVar1 + 1) = uVar7;
                *puVar1 = 0;
            }
            *(longlong *)(lVar6 + 0x7c50) = *(longlong *)(lVar6 + 0x7c50) + 0x30;
        }
        if (puVar4 != (undefined2 *)0x0) {
            FUN_14018b900(puVar4,0);
        }
        lVar2 = *(longlong *)(lVar6 + 0x7c50);
        if (puVar3 != *(undefined8 **)(&DAT_ffffffffffffffd0 + lVar2)) {
            (**(code **)*puVar3)(puVar3);
            if (*(longlong **)(&DAT_ffffffffffffffd0 + lVar2) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(&DAT_ffffffffffffffd0 + lVar2) + 8))();
                *(undefined8 *)(&DAT_ffffffffffffffd0 + lVar2) = 0;
            }
            *(undefined8 **)(&DAT_ffffffffffffffd0 + lVar2) = puVar3;
        }
        lVar6 = *(longlong *)(lVar6 + 0x7c50) - *(longlong *)(lVar6 + 0x7c48);
        lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
        if (*(longlong *)(param_2 + 8) != 0) {
            FUN_14018b900(*(longlong *)(param_2 + 8),0);
        }
        return ((int)(lVar6 >> 3) - (int)(lVar6 >> 0x3f)) + -1;
    }
    if (*(longlong *)(param_2 + 8) != 0) {
        FUN_14018b900(*(longlong *)(param_2 + 8),0);
    }
    return -1;
}



longlong FUN_1403f6a00(longlong param_1,short *param_2)

{
    short sVar1;
    longlong lVar2;
    undefined4 uVar3;
    undefined2 *puVar4;
    ulonglong uVar5;
    short *psVar6;
    undefined *puVar7;
    longlong *plVar8;
    longlong lVar9;
    longlong **pplVar10;
    longlong *plVar11;
    ulonglong uVar12;
    longlong **pplVar13;
    longlong **pplVar14;
    uint uVar15;
    undefined local_68 [8];
    short *local_60;
    short *local_58;
    short *local_50;
    undefined local_48 [8];
    longlong local_40;

    uVar12 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    puVar4 = (undefined2 *)FUN_14018b280(0x10,0);
    *(undefined2 **)(param_1 + 8) = puVar4;
    *(undefined2 **)(param_1 + 0x10) = puVar4;
    *(undefined2 **)(param_1 + 0x18) = puVar4 + 8;
    if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
    }
    sVar1 = *param_2;
    uVar5 = uVar12;
    while (sVar1 != 0) {
        uVar5 = uVar5 + 1;
        sVar1 = param_2[uVar5];
    }
    FUN_14001c480(param_1,param_2,param_2 + uVar5);
    lVar2 = *(longlong *)(DAT_140c65898 + 0x7340);
    psVar6 = (short *)FUN_14018b280(0x10);
    local_50 = psVar6 + 8;
    if (psVar6 != (short *)0x0) {
        *psVar6 = 0;
    }
    pplVar14 = (longlong **)(param_1 + 0x20);
    local_60 = psVar6;
    local_58 = psVar6;
    do {
        puVar7 = (undefined *)FUN_14018efa0(local_48,L"%s%d",param_2,uVar12);
        if (puVar7 != local_68) {
            FUN_14001c480(local_68,*(undefined8 *)(puVar7 + 8),*(undefined8 *)(puVar7 + 0x10));
            psVar6 = local_60;
        }
        if (local_40 != 0) {
            FUN_14018b900(local_40,0);
        }
        if (((psVar6 == (short *)0x0) || (*psVar6 == 0)) ||
            ((*(longlong *)(lVar2 + 0x158) - *(longlong *)(lVar2 + 0x150) & 0xfffffffffffffff8U) == 0)) {
            LAB_1403f6b65:
            puVar7 = (undefined *)FUN_14018efa0(local_48,L"%s_%d",param_2,uVar12);
            if (puVar7 != local_68) {
                FUN_14001c480(local_68,*(undefined8 *)(puVar7 + 8),*(undefined8 *)(puVar7 + 0x10));
                psVar6 = local_60;
            }
            if (local_40 != 0) {
                FUN_14018b900(local_40,0);
            }
            if (((psVar6 == (short *)0x0) || (*psVar6 == 0)) ||
                ((*(longlong *)(lVar2 + 0x158) - *(longlong *)(lVar2 + 0x150) & 0xfffffffffffffff8U) == 0))
            {
                LAB_1403f6c03:
                plVar8 = (longlong *)0x0;
            }
            else {
                plVar8 = (longlong *)FUN_1400fdfe0(lVar2 + 0x120,psVar6);
                if (plVar8 == (longlong *)0x0) {
                    lVar9 = FUN_1407df6e0(psVar6,&DAT_1409d5204);
                    if (lVar9 == 0) goto LAB_1403f6c03;
                    plVar8 = (longlong *)FUN_1400fdfe0(lVar2 + 0x120,lVar9 + 2);
                }
            }
        }
        else {
            plVar8 = (longlong *)FUN_1400fdfe0(lVar2 + 0x120,psVar6);
            if (plVar8 == (longlong *)0x0) {
                lVar9 = FUN_1407df6e0(psVar6,&DAT_1409d5204);
                if (lVar9 == 0) goto LAB_1403f6b65;
                plVar8 = (longlong *)FUN_1400fdfe0(lVar2 + 0x120,lVar9 + 2);
            }
            if (plVar8 == (longlong *)0x0) goto LAB_1403f6b65;
        }
        pplVar10 = (longlong **)FUN_14018b280(0x30);
        pplVar13 = (longlong **)0x0;
        if (pplVar10 != (longlong **)0x0) {
            pplVar10[3] = (longlong *)0x0;
            pplVar10[4] = (longlong *)0x0;
            pplVar10[5] = (longlong *)0x0;
            plVar11 = (longlong *)FUN_14018b280(0x10);
            pplVar10[3] = plVar11;
            pplVar10[4] = plVar11;
            pplVar10[5] = plVar11 + 2;
            if (plVar11 != (longlong *)0x0) {
                *(undefined2 *)plVar11 = 0;
            }
            uVar3 = DAT_140c63664;
            *pplVar10 = (longlong *)0x0;
            *(undefined4 *)((longlong)pplVar10 + 0xc) = 0x3f800000;
            *(undefined4 *)(pplVar10 + 1) = uVar3;
            pplVar13 = pplVar10;
        }
        if (plVar8 != *pplVar13) {
            if (plVar8 != (longlong *)0x0) {
                (**(code **)*plVar8)(plVar8);
            }
            if (*pplVar13 != (longlong *)0x0) {
                (**(code **)(**pplVar13 + 8))();
                *pplVar13 = (longlong *)0x0;
            }
            *pplVar13 = plVar8;
        }
        uVar15 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar15;
        *pplVar14 = (longlong *)pplVar13;
        pplVar14 = pplVar14 + 1;
        if (9 < (int)uVar15) {
            if (psVar6 != (short *)0x0) {
                FUN_14018b900(psVar6,0);
            }
            return param_1;
        }
    } while( true );
}



longlong FUN_1403f6ce0(longlong param_1,longlong param_2)

{
    undefined2 *puVar1;
    longlong *plVar2;
    longlong *plVar3;
    longlong **pplVar4;
    longlong lVar5;

    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    puVar1 = (undefined2 *)FUN_14018b280(0x10);
    *(undefined2 **)(param_1 + 8) = puVar1;
    *(undefined2 **)(param_1 + 0x10) = puVar1;
    *(undefined2 **)(param_1 + 0x18) = puVar1 + 8;
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    if (param_2 != param_1) {
        FUN_14001c480(param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    }
    pplVar4 = (longlong **)(param_1 + 0x20);
    lVar5 = 10;
    do {
        plVar2 = (longlong *)FUN_14018b280(0x30);
        plVar3 = (longlong *)0x0;
        if (plVar2 != (longlong *)0x0) {
            plVar3 = *(longlong **)((param_2 - param_1) + (longlong)pplVar4);
            plVar2[3] = 0;
            plVar2[4] = 0;
            plVar2[5] = 0;
            puVar1 = (undefined2 *)FUN_14018b280(0x10);
            plVar2[3] = (longlong)puVar1;
            plVar2[4] = (longlong)puVar1;
            plVar2[5] = (longlong)(puVar1 + 8);
            if (puVar1 != (undefined2 *)0x0) {
                *puVar1 = 0;
            }
            if ((undefined8 *)*plVar3 != (undefined8 *)0x0) {
                (***(code ***)(undefined8 *)*plVar3)();
            }
            *plVar2 = *plVar3;
            *(undefined4 *)(plVar2 + 1) = *(undefined4 *)(plVar3 + 1);
            plVar3 = plVar2;
        }
        *pplVar4 = plVar3;
        pplVar4 = pplVar4 + 1;
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    return param_1;
}



longlong FUN_1403f6e00(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    undefined2 *puVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong **pplVar5;

    if (param_2 != param_1) {
        FUN_14001c480(param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    }
    pplVar5 = (longlong **)(param_1 + 0x20);
    lVar4 = 10;
    do {
        plVar1 = (longlong *)FUN_14018b280(0x30);
        plVar3 = (longlong *)0x0;
        if (plVar1 != (longlong *)0x0) {
            plVar3 = *(longlong **)((param_2 - param_1) + (longlong)pplVar5);
            plVar1[3] = 0;
            plVar1[4] = 0;
            plVar1[5] = 0;
            puVar2 = (undefined2 *)FUN_14018b280(0x10);
            plVar1[3] = (longlong)puVar2;
            plVar1[4] = (longlong)puVar2;
            plVar1[5] = (longlong)(puVar2 + 8);
            if (puVar2 != (undefined2 *)0x0) {
                *puVar2 = 0;
            }
            if ((undefined8 *)*plVar3 != (undefined8 *)0x0) {
                (***(code ***)(undefined8 *)*plVar3)();
            }
            *plVar1 = *plVar3;
            *(undefined4 *)(plVar1 + 1) = *(undefined4 *)(plVar3 + 1);
            plVar3 = plVar1;
        }
        *pplVar5 = plVar3;
        pplVar5 = pplVar5 + 1;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    return param_1;
}



void FUN_1403f6ee0(longlong param_1)

{
    longlong **pplVar1;
    longlong lVar2;
    longlong **pplVar3;

    pplVar3 = (longlong **)(param_1 + 0x20);
    lVar2 = 10;
    do {
        pplVar1 = (longlong **)*pplVar3;
        if (pplVar1 != (longlong **)0x0) {
            if (*pplVar1 != (longlong *)0x0) {
                (**(code **)(**pplVar1 + 8))();
                *pplVar1 = (longlong *)0x0;
            }
            if (pplVar1[3] != (longlong *)0x0) {
                FUN_14018b900(pplVar1[3],0);
            }
            FUN_14018b900(pplVar1,0);
        }
        pplVar3 = pplVar3 + 1;
        lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    if (*(longlong *)(param_1 + 8) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 8),0);
    }
    return;
}



ulonglong FUN_1403f6f80(undefined8 param_1,ushort *param_2)

{
    longlong lVar1;
    ushort uVar2;
    longlong **pplVar3;
    ulonglong uVar4;
    longlong lVar5;
    int iVar6;
    ulonglong uVar7;
    undefined8 uVar8;
    ushort *puVar9;
    ulonglong uVar10;
    longlong lVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    int iVar15;
    undefined local_98 [8];
    longlong local_90;
    longlong *aplStack120 [10];

    lVar5 = DAT_140c65898;
    uVar14 = 0;
    lVar1 = DAT_140c65898 + 0x7cb0;
    uVar4 = (*(longlong *)(DAT_140c65898 + 0x7cc0) - *(longlong *)(DAT_140c65898 + 0x7cb8)) / 0x70;
    iVar15 = (int)uVar4;
    if (0 < iVar15) {
        lVar11 = *(longlong *)(DAT_140c65898 + 0x7cb8);
        uVar7 = uVar14;
        uVar2 = *param_2;
        uVar13 = uVar14;
        uVar12 = uVar14;
        do {
            while (uVar2 != 0) {
                uVar7 = uVar7 + 1;
                uVar2 = param_2[uVar7];
            }
            if (*(longlong *)(lVar11 + 0x10) - *(longlong *)(lVar11 + 8) >> 1 == uVar7) {
                if (uVar7 == 0) {
                    return uVar12;
                }
                puVar9 = param_2;
                uVar10 = uVar14;
                while( true ) {
                    uVar2 = *(ushort *)((*(longlong *)(lVar11 + 8) - (longlong)param_2) + (longlong)puVar9);
                    if (uVar2 != *puVar9) break;
                    uVar10 = uVar10 + 1;
                    puVar9 = puVar9 + 1;
                    if (uVar7 <= uVar10) {
                        return uVar12;
                    }
                }
                iVar6 = 1;
                if (uVar2 < *puVar9) {
                    iVar6 = -1;
                }
                if (iVar6 == 0) {
                    return uVar12;
                }
            }
            uVar13 = uVar13 + 1;
            uVar12 = (ulonglong)((int)uVar12 + 1);
            lVar11 = lVar11 + 0x70;
            uVar7 = uVar14;
            uVar2 = *param_2;
        } while ((longlong)uVar13 < (longlong)iVar15);
    }
    uVar8 = FUN_1403f6a00(local_98,param_2);
    lVar11 = *(longlong *)(lVar5 + 0x7cc0);
    if (lVar11 == *(longlong *)(lVar5 + 0x7cc8)) {
        FUN_1403fbcf0(lVar1,lVar11,uVar8);
    }
    else {
        if (lVar11 != 0) {
            FUN_1403f6ce0(lVar11,uVar8);
        }
        *(longlong *)(lVar5 + 0x7cc0) = *(longlong *)(lVar5 + 0x7cc0) + 0x70;
    }
    do {
        pplVar3 = (longlong **)aplStack120[uVar14];
        if (pplVar3 != (longlong **)0x0) {
            if (*pplVar3 != (longlong *)0x0) {
                (**(code **)(**pplVar3 + 8))();
                *pplVar3 = (longlong *)0x0;
            }
            if (pplVar3[3] != (longlong *)0x0) {
                FUN_14018b900(pplVar3[3],0);
            }
            FUN_14018b900(pplVar3,0);
        }
        uVar14 = uVar14 + 1;
    } while ((longlong)uVar14 < 10);
    if (local_90 != 0) {
        FUN_14018b900(local_90,0);
    }
    return uVar4 & 0xffffffff;
}



undefined8 FUN_1403f7130(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
    longlong *plVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined8 local_res10;

    lVar3 = (longlong)param_4;
    if (param_2 != 0) {
        uVar2 = (**(code **)(*DAT_140c65680 + 0x20))();
        if (-1 < (int)uVar2) {
            plVar1 = *(longlong **)(param_1 + 0x7b50 + lVar3 * 8);
            if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 8))();
                *(undefined8 *)(param_1 + 0x7b50 + lVar3 * 8) = 0;
            }
            *(undefined8 *)(param_1 + 0x7b50 + lVar3 * 8) = local_res10;
            uVar2 = 0;
        }
        return uVar2;
    }
    return 0x80070057;
}



void FUN_1403f7320(undefined8 param_1,longlong param_2)

{
    int iVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    int iVar4;

    if (DAT_140c65898 != 0) {
        iVar1 = *DAT_140c63750;
        uVar3 = *(undefined8 *)(param_2 + 8);
        iVar4 = DAT_140c45050;
        if (iVar1 < DAT_140c45050) {
            iVar4 = iVar1;
        }
        uVar2 = *(undefined4 *)(&DAT_140c45060 + (longlong)iVar4 * 4);
        iVar4 = DAT_140c44ff0;
        if (iVar1 < DAT_140c44ff0) {
            iVar4 = iVar1;
        }
        FUN_1403f7130(DAT_140c65898,uVar3,*(undefined4 *)(&DAT_140c45000 + (longlong)iVar4 * 4),3);
        FUN_1403f7130(DAT_140c65898,uVar3,uVar2,4);
    }
    return;
}



void FUN_1403f7480(undefined8 param_1,char param_2)

{
    int iVar1;
    longlong lVar2;
    longlong local_res18 [2];

    lVar2 = DAT_140c65898;
    if (DAT_140c65898 != 0) {
        if (param_2 == '\0') {
            *(uint *)(DAT_140c65898 + 0x7ba0) = *(uint *)(DAT_140c65898 + 0x7ba0) & 0xfffffffd;
            iVar1 = DAT_140c45e40;
            if (*DAT_140c63750 < DAT_140c45e40) {
                iVar1 = *DAT_140c63750;
            }
            FUN_14001a6c0(&PTR_PTR_LAB_140c45e30,iVar1,0);
            lVar2 = DAT_140c65898;
        }
        else {
            *(uint *)(DAT_140c65898 + 0x7ba0) = *(uint *)(DAT_140c65898 + 0x7ba0) | 2;
        }
        local_res18[0] = (ulonglong)*(uint *)(lVar2 + 0x7ba0) << 0x20;
        FUN_1403f4900(lVar2,299,local_res18);
        if ((DAT_140c63620 != 0) && (*(longlong *)(DAT_140c63620 + 0x18) != 0)) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c63620 + 0x58),"OpenOptions",&DAT_1409d0202);
        }
    }
    return;
}



void FUN_1403f7530(undefined8 param_1,char param_2)

{
    longlong lVar1;
    longlong local_res18 [2];

    lVar1 = DAT_140c65898;
    if (DAT_140c65898 != 0) {
        if (param_2 == '\0') {
            *(uint *)(DAT_140c65898 + 0x7ba0) = *(uint *)(DAT_140c65898 + 0x7ba0) & 0xfffffffb;
        }
        else {
            *(uint *)(DAT_140c65898 + 0x7ba0) = *(uint *)(DAT_140c65898 + 0x7ba0) | 4;
        }
        local_res18[0] = (ulonglong)*(uint *)(lVar1 + 0x7ba0) << 0x20;
        FUN_1403f4900(lVar1,299,local_res18);
    }
    return;
}



void FUN_1403f7580(undefined8 param_1,char param_2)

{
    int iVar1;
    longlong lVar2;
    longlong local_res18 [2];

    lVar2 = DAT_140c65898;
    if (DAT_140c65898 != 0) {
        if (param_2 == '\0') {
            *(uint *)(DAT_140c65898 + 0x7ba0) = *(uint *)(DAT_140c65898 + 0x7ba0) & 0xfffffff7;
        }
        else {
            *(uint *)(DAT_140c65898 + 0x7ba0) = *(uint *)(DAT_140c65898 + 0x7ba0) | 8;
        }
        local_res18[0] = (ulonglong)*(uint *)(lVar2 + 0x7ba0) << 0x20;
        FUN_1403f4900(lVar2,299,local_res18);
        iVar1 = DAT_140c45e80;
        if (*DAT_140c63750 < DAT_140c45e80) {
            iVar1 = *DAT_140c63750;
        }
        FUN_14001a6c0(&PTR_PTR_LAB_140c45e70,iVar1,param_2);
        if ((DAT_140c63620 != 0) && (*(longlong *)(DAT_140c63620 + 0x18) != 0)) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c63620 + 0x58),"OpenOptions",&DAT_1409d0202);
        }
        if (param_2 == '\0') {
            *(undefined8 *)(DAT_140c65898 + 0x6370) = 0;
        }
    }
    return;
}



void FUN_1403f7640(undefined8 param_1,char param_2)

{
    longlong lVar1;
    undefined4 local_res18 [4];

    lVar1 = DAT_140c65898;
    if (DAT_140c65898 != 0) {
        if (param_2 == '\0') {
            *(uint *)(DAT_140c65898 + 0x7ba4) = *(uint *)(DAT_140c65898 + 0x7ba4) & 0xfffffffe;
        }
        else {
            *(uint *)(DAT_140c65898 + 0x7ba4) = *(uint *)(DAT_140c65898 + 0x7ba4) | 1;
        }
        local_res18[0] = *(undefined4 *)(lVar1 + 0x7ba4);
        FUN_1403f4900(lVar1,0x248,local_res18);
        if ((DAT_140c63620 != 0) && (*(longlong *)(DAT_140c63620 + 0x18) != 0)) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c63620 + 0x58),"OpenOptions",&DAT_1409d0202);
        }
    }
    return;
}



void FUN_1403f76b0(undefined8 param_1,char param_2)

{
    longlong lVar1;
    undefined4 local_res18 [4];

    lVar1 = DAT_140c65898;
    if (DAT_140c65898 != 0) {
        if (param_2 == '\0') {
            *(uint *)(DAT_140c65898 + 0x7ba8) = *(uint *)(DAT_140c65898 + 0x7ba8) & 0xfffffffe;
        }
        else {
            *(uint *)(DAT_140c65898 + 0x7ba8) = *(uint *)(DAT_140c65898 + 0x7ba8) | 1;
        }
        local_res18[0] = *(undefined4 *)(lVar1 + 0x7ba8);
        FUN_1403f4900(lVar1,0x249,local_res18);
        if ((DAT_140c63620 != 0) && (*(longlong *)(DAT_140c63620 + 0x18) != 0)) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c63620 + 0x58),"OpenOptions",&DAT_1409d0202);
        }
    }
    return;
}



void FUN_1403f7720(undefined8 param_1,char param_2)

{
    longlong lVar1;
    undefined4 local_res18 [4];

    lVar1 = DAT_140c65898;
    if (DAT_140c65898 != 0) {
        if (param_2 == '\0') {
            *(uint *)(DAT_140c65898 + 0x7ba8) = *(uint *)(DAT_140c65898 + 0x7ba8) & 0xfffffffd;
        }
        else {
            *(uint *)(DAT_140c65898 + 0x7ba8) = *(uint *)(DAT_140c65898 + 0x7ba8) | 2;
        }
        local_res18[0] = *(undefined4 *)(lVar1 + 0x7ba8);
        FUN_1403f4900(lVar1,0x249,local_res18);
        if ((DAT_140c63620 != 0) && (*(longlong *)(DAT_140c63620 + 0x18) != 0)) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c63620 + 0x58),"OpenOptions",&DAT_1409d0202);
        }
    }
    return;
}



void FUN_1403f7790(undefined8 param_1,char param_2)

{
    longlong lVar1;
    undefined4 local_res18 [4];

    lVar1 = DAT_140c65898;
    if (DAT_140c65898 != 0) {
        if (param_2 == '\0') {
            *(uint *)(DAT_140c65898 + 0x7ba8) = *(uint *)(DAT_140c65898 + 0x7ba8) & 0xfffffffb;
        }
        else {
            *(uint *)(DAT_140c65898 + 0x7ba8) = *(uint *)(DAT_140c65898 + 0x7ba8) | 4;
        }
        local_res18[0] = *(undefined4 *)(lVar1 + 0x7ba8);
        FUN_1403f4900(lVar1,0x249,local_res18);
        if ((DAT_140c63620 != 0) && (*(longlong *)(DAT_140c63620 + 0x18) != 0)) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c63620 + 0x58),"OpenOptions",&DAT_1409d0202);
        }
    }
    return;
}



void FUN_1403f7800(undefined8 param_1,char param_2)

{
    longlong lVar1;
    undefined4 local_res18 [4];

    lVar1 = DAT_140c65898;
    if (DAT_140c65898 != 0) {
        if (param_2 == '\0') {
            *(uint *)(DAT_140c65898 + 0x7ba8) = *(uint *)(DAT_140c65898 + 0x7ba8) & 0xfffffff7;
        }
        else {
            *(uint *)(DAT_140c65898 + 0x7ba8) = *(uint *)(DAT_140c65898 + 0x7ba8) | 8;
        }
        local_res18[0] = *(undefined4 *)(lVar1 + 0x7ba8);
        FUN_1403f4900(lVar1,0x249,local_res18);
        if ((DAT_140c63620 != 0) && (*(longlong *)(DAT_140c63620 + 0x18) != 0)) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c63620 + 0x58),"OpenOptions",&DAT_1409d0202);
        }
    }
    return;
}



void FUN_1403f7870(undefined8 param_1,char param_2)

{
    longlong lVar1;
    undefined4 local_res18 [4];

    lVar1 = DAT_140c65898;
    if (DAT_140c65898 != 0) {
        if (param_2 == '\0') {
            *(uint *)(DAT_140c65898 + 0x7ba8) = *(uint *)(DAT_140c65898 + 0x7ba8) & 0xffffffef;
        }
        else {
            *(uint *)(DAT_140c65898 + 0x7ba8) = *(uint *)(DAT_140c65898 + 0x7ba8) | 0x10;
        }
        local_res18[0] = *(undefined4 *)(lVar1 + 0x7ba8);
        FUN_1403f4900(lVar1,0x249,local_res18);
        if ((DAT_140c63620 != 0) && (*(longlong *)(DAT_140c63620 + 0x18) != 0)) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c63620 + 0x58),"OpenOptions",&DAT_1409d0202);
        }
    }
    return;
}



void FUN_1403f78e0(undefined8 param_1,char param_2)

{
    longlong lVar1;
    undefined4 local_res18 [4];

    lVar1 = DAT_140c65898;
    if (DAT_140c65898 != 0) {
        if (param_2 == '\0') {
            *(uint *)(DAT_140c65898 + 0x7ba8) = *(uint *)(DAT_140c65898 + 0x7ba8) & 0xffffffdf;
        }
        else {
            *(uint *)(DAT_140c65898 + 0x7ba8) = *(uint *)(DAT_140c65898 + 0x7ba8) | 0x20;
        }
        local_res18[0] = *(undefined4 *)(lVar1 + 0x7ba8);
        FUN_1403f4900(lVar1,0x249,local_res18);
        if ((DAT_140c63620 != 0) && (*(longlong *)(DAT_140c63620 + 0x18) != 0)) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c63620 + 0x58),"OpenOptions",&DAT_1409d0202);
        }
    }
    return;
}



void FUN_1403f7950(undefined8 param_1,char param_2)

{
    longlong lVar1;
    undefined4 local_res18 [4];

    lVar1 = DAT_140c65898;
    if (DAT_140c65898 != 0) {
        if (param_2 == '\0') {
            *(uint *)(DAT_140c65898 + 0x7ba8) = *(uint *)(DAT_140c65898 + 0x7ba8) & 0xffffffbf;
        }
        else {
            *(uint *)(DAT_140c65898 + 0x7ba8) = *(uint *)(DAT_140c65898 + 0x7ba8) | 0x40;
        }
        local_res18[0] = *(undefined4 *)(lVar1 + 0x7ba8);
        FUN_1403f4900(lVar1,0x249,local_res18);
        if ((DAT_140c63620 != 0) && (*(longlong *)(DAT_140c63620 + 0x18) != 0)) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c63620 + 0x58),"OpenOptions",&DAT_1409d0202);
        }
    }
    return;
}



void FUN_1403f79c0(undefined8 param_1,char param_2)

{
    longlong lVar1;
    undefined4 local_res18 [4];

    lVar1 = DAT_140c65898;
    if (DAT_140c65898 != 0) {
        if (param_2 == '\0') {
            *(uint *)(DAT_140c65898 + 0x7ba8) = *(uint *)(DAT_140c65898 + 0x7ba8) & 0xffffff7f;
        }
        else {
            *(uint *)(DAT_140c65898 + 0x7ba8) = *(uint *)(DAT_140c65898 + 0x7ba8) | 0x80;
        }
        local_res18[0] = *(undefined4 *)(lVar1 + 0x7ba8);
        FUN_1403f4900(lVar1,0x249,local_res18);
        if ((DAT_140c63620 != 0) && (*(longlong *)(DAT_140c63620 + 0x18) != 0)) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c63620 + 0x58),"OpenOptions",&DAT_1409d0202);
        }
    }
    return;
}



void FUN_1403f7a40(undefined8 param_1,char param_2)

{
    longlong lVar1;
    undefined4 local_res18 [4];

    lVar1 = DAT_140c65898;
    if (DAT_140c65898 != 0) {
        if (param_2 == '\0') {
            *(uint *)(DAT_140c65898 + 0x7ba8) = *(uint *)(DAT_140c65898 + 0x7ba8) & 0xfffffeff;
        }
        else {
            *(uint *)(DAT_140c65898 + 0x7ba8) = *(uint *)(DAT_140c65898 + 0x7ba8) | 0x100;
        }
        local_res18[0] = *(undefined4 *)(lVar1 + 0x7ba8);
        FUN_1403f4900(lVar1,0x249,local_res18);
        if ((DAT_140c63620 != 0) && (*(longlong *)(DAT_140c63620 + 0x18) != 0)) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c63620 + 0x58),"OpenOptions",&DAT_1409d0202);
        }
    }
    return;
}



void FUN_1403f7ac0(undefined8 param_1,char param_2)

{
    longlong lVar1;
    undefined4 local_res18 [4];

    lVar1 = DAT_140c65898;
    if (DAT_140c65898 != 0) {
        if (param_2 == '\0') {
            *(uint *)(DAT_140c65898 + 0x7ba8) = *(uint *)(DAT_140c65898 + 0x7ba8) & 0xfffffdff;
        }
        else {
            *(uint *)(DAT_140c65898 + 0x7ba8) = *(uint *)(DAT_140c65898 + 0x7ba8) | 0x200;
        }
        local_res18[0] = *(undefined4 *)(lVar1 + 0x7ba8);
        FUN_1403f4900(lVar1,0x249,local_res18);
        if ((DAT_140c63620 != 0) && (*(longlong *)(DAT_140c63620 + 0x18) != 0)) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c63620 + 0x58),"OpenOptions",&DAT_1409d0202);
        }
    }
    return;
}



void FUN_1403f7b40(undefined8 param_1,char param_2)

{
    longlong lVar1;
    undefined4 local_res18 [4];

    lVar1 = DAT_140c65898;
    if (DAT_140c65898 != 0) {
        if (param_2 == '\0') {
            *(uint *)(DAT_140c65898 + 0x7ba8) = *(uint *)(DAT_140c65898 + 0x7ba8) & 0xfffffbff;
        }
        else {
            *(uint *)(DAT_140c65898 + 0x7ba8) = *(uint *)(DAT_140c65898 + 0x7ba8) | 0x400;
        }
        local_res18[0] = *(undefined4 *)(lVar1 + 0x7ba8);
        FUN_1403f4900(lVar1,0x249,local_res18);
        if ((DAT_140c63620 != 0) && (*(longlong *)(DAT_140c63620 + 0x18) != 0)) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c63620 + 0x58),"OpenOptions",&DAT_1409d0202);
        }
    }
    return;
}



void FUN_1403f7bc0(undefined8 param_1,char param_2)

{
    longlong lVar1;
    undefined4 local_res18 [4];

    lVar1 = DAT_140c65898;
    if (DAT_140c65898 != 0) {
        if (param_2 == '\0') {
            *(uint *)(DAT_140c65898 + 0x7ba8) = *(uint *)(DAT_140c65898 + 0x7ba8) & 0xfffff7ff;
        }
        else {
            *(uint *)(DAT_140c65898 + 0x7ba8) = *(uint *)(DAT_140c65898 + 0x7ba8) | 0x800;
        }
        local_res18[0] = *(undefined4 *)(lVar1 + 0x7ba8);
        FUN_1403f4900(lVar1,0x249,local_res18);
        if ((DAT_140c63620 != 0) && (*(longlong *)(DAT_140c63620 + 0x18) != 0)) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c63620 + 0x58),"OpenOptions",&DAT_1409d0202);
        }
    }
    return;
}



void FUN_1403f7c40(undefined8 param_1,char param_2)

{
    longlong lVar1;
    undefined4 local_res18 [4];

    lVar1 = DAT_140c65898;
    if (DAT_140c65898 != 0) {
        if (param_2 == '\0') {
            *(uint *)(DAT_140c65898 + 0x7ba8) = *(uint *)(DAT_140c65898 + 0x7ba8) & 0xffffefff;
        }
        else {
            *(uint *)(DAT_140c65898 + 0x7ba8) = *(uint *)(DAT_140c65898 + 0x7ba8) | 0x1000;
        }
        local_res18[0] = *(undefined4 *)(lVar1 + 0x7ba8);
        FUN_1403f4900(lVar1,0x249,local_res18);
        if ((DAT_140c63620 != 0) && (*(longlong *)(DAT_140c63620 + 0x18) != 0)) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c63620 + 0x58),"OpenOptions",&DAT_1409d0202);
        }
    }
    return;
}



void FUN_1403f7cc0(undefined8 param_1,char param_2)

{
    longlong lVar1;
    undefined4 local_res18 [4];

    lVar1 = DAT_140c65898;
    if (DAT_140c65898 != 0) {
        if (param_2 == '\0') {
            *(uint *)(DAT_140c65898 + 0x7ba8) = *(uint *)(DAT_140c65898 + 0x7ba8) & 0xffffdfff;
        }
        else {
            *(uint *)(DAT_140c65898 + 0x7ba8) = *(uint *)(DAT_140c65898 + 0x7ba8) | 0x2000;
        }
        local_res18[0] = *(undefined4 *)(lVar1 + 0x7ba8);
        FUN_1403f4900(lVar1,0x249,local_res18);
        if ((DAT_140c63620 != 0) && (*(longlong *)(DAT_140c63620 + 0x18) != 0)) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c63620 + 0x58),"OpenOptions",&DAT_1409d0202);
        }
    }
    return;
}



undefined8 FUN_1403f7d40(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65898 + 0x7d58);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 != lVar1) {
        return *(undefined8 *)(local_res8 + 0x28);
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_1403f7e50(longlong param_1,int *param_2,uint param_3,int *param_4,float *param_5,int param_6,
              int *param_7)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    int iVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    undefined local_68 [64];

    lVar3 = *(longlong *)(param_1 + 0x78);
    *param_4 = 0;
    iVar6 = 0;
    fVar9 = 3.402823e+38;
    fVar10 = *(float *)(lVar3 + 0x11e0);
    fVar11 = *(float *)(lVar3 + 0x11e4);
    if (param_3 != 0) {
        uVar5 = (ulonglong)param_3;
        do {
            iVar2 = *param_2;
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c63e98 == 0) && (iVar1 = FUN_14024b720(), -1 < iVar1)) {
                    lVar3 = (**(code **)(*DAT_140c65388 + 0x18))(DAT_140c65388,iVar2);
                    goto LAB_1403f7f0b;
                }
            }
            else {
                lVar3 = (*DAT_140c63840)(&PTR_u_WorldLocation2_140a6e228,iVar2,DAT_140c63858);
                LAB_1403f7f0b:
                if (lVar3 != 0) {
                    fVar7 = *(float *)(lVar3 + 0x10);
                    fVar8 = *(float *)*(undefined (*) [12])(lVar3 + 0xc);
                    local_68._0_16_ = ZEXT1216(*(undefined (*) [12])(lVar3 + 0xc));
                    if ((*(uint *)(lVar3 + 0x30) & *(uint *)(param_1 + 0x674c)) != 0) {
                        iVar2 = (**(code **)(*(longlong *)(param_1 + 0x48) + 8))(param_1 + 0x48);
                        if (*(int *)(lVar3 + 0x28) == iVar2) {
                            fVar7 = ((fVar8 - fVar10) * (fVar8 - fVar10) + (fVar7 - fVar11) * (fVar7 - fVar11) +
                                     0.0) - *(float *)(lVar3 + 4) * *(float *)(lVar3 + 4);
                            if (fVar7 < fVar9) {
                                iVar2 = 0;
                                LAB_1403f7fe5:
                                *param_4 = *param_2;
                                fVar9 = fVar7;
                                iVar6 = iVar2;
                            }
                        }
                        else if ((param_6 != 0) &&
                                 (iVar2 = FUN_14043e6d0(param_1,param_6,*param_2,local_68), iVar2 != 0)) {
                            fVar7 = ((local_68._0_4_ - fVar10) * (local_68._0_4_ - fVar10) +
                                     (local_68._4_4_ - fVar11) * (local_68._4_4_ - fVar11) + 0.0) -
                                    *(float *)(lVar3 + 4) * *(float *)(lVar3 + 4);
                            iVar2 = param_6;
                            if (fVar7 < fVar9) goto LAB_1403f7fe5;
                        }
                    }
                }
            }
            param_2 = param_2 + 1;
            uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
    }
    if (param_5 != (float *)0x0) {
        *param_5 = fVar9;
    }
    if (param_7 != (int *)0x0) {
        *param_7 = iVar6;
    }
    uVar4 = 0x80004005;
    if (*param_4 != 0) {
        uVar4 = 0;
    }
    return uVar4;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_1403f8070(longlong param_1,longlong param_2,uint param_3,int *param_4,float *param_5,
              int *param_6)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    int *piVar5;
    ulonglong uVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    undefined local_58 [48];

    fVar9 = *(float *)(*(longlong *)(param_1 + 0x78) + 0x11e0);
    fVar10 = *(float *)(*(longlong *)(param_1 + 0x78) + 0x11e4);
    if (param_3 != 0) {
        piVar5 = (int *)(param_2 + 4);
        uVar6 = (ulonglong)param_3;
        do {
            iVar1 = *piVar5;
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c63e98 == 0) && (iVar2 = FUN_14024b720(), -1 < iVar2)) {
                    lVar3 = (**(code **)(*DAT_140c65388 + 0x18))(DAT_140c65388,iVar1);
                    goto LAB_1403f811b;
                }
            }
            else {
                lVar3 = (*DAT_140c63840)(&PTR_u_WorldLocation2_140a6e228,iVar1,DAT_140c63858);
                LAB_1403f811b:
                if (lVar3 != 0) {
                    fVar7 = *(float *)(lVar3 + 0x10);
                    fVar8 = *(float *)*(undefined (*) [12])(lVar3 + 0xc);
                    local_58._0_16_ = ZEXT1216(*(undefined (*) [12])(lVar3 + 0xc));
                    if ((*(uint *)(lVar3 + 0x30) & *(uint *)(param_1 + 0x674c)) != 0) {
                        iVar1 = piVar5[-1];
                        iVar2 = (**(code **)(*(longlong *)(param_1 + 0x48) + 8))();
                        if (*(int *)(lVar3 + 0x28) == iVar2) {
                            fVar7 = ((fVar8 - fVar9) * (fVar8 - fVar9) + (fVar7 - fVar10) * (fVar7 - fVar10) + 0.0
                                    ) - *(float *)(lVar3 + 4) * *(float *)(lVar3 + 4);
                            if (fVar7 < *param_5) {
                                iVar1 = *piVar5;
                                *param_5 = fVar7;
                                *param_6 = 0;
                                *param_4 = iVar1;
                            }
                        }
                        else if ((iVar1 != 0) &&
                                 (iVar2 = FUN_14043e6d0(param_1,iVar1,*piVar5,local_58), iVar2 != 0)) {
                            fVar7 = ((local_58._0_4_ - fVar9) * (local_58._0_4_ - fVar9) +
                                     (local_58._4_4_ - fVar10) * (local_58._4_4_ - fVar10) + 0.0) -
                                    *(float *)(lVar3 + 4) * *(float *)(lVar3 + 4);
                            if (fVar7 < *param_5) {
                                iVar2 = *piVar5;
                                *param_5 = fVar7;
                                *param_6 = iVar1;
                                *param_4 = iVar2;
                            }
                        }
                    }
                }
            }
            piVar5 = piVar5 + 2;
            uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
    }
    uVar4 = 0x80004005;
    if (*param_4 != 0) {
        uVar4 = 0;
    }
    return uVar4;
}



bool FUN_1403f8270(longlong param_1,undefined4 param_2,undefined4 param_3)

{
    int iVar1;
    longlong lVar2;
    bool bVar3;

    lVar2 = FUN_14024b980(param_2);
    if (lVar2 == 0) {
        LAB_1403f829b:
        bVar3 = false;
    }
    else {
        iVar1 = (**(code **)(*(longlong *)(param_1 + 0x48) + 8))(param_1 + 0x48);
        if (*(int *)(lVar2 + 0x28) != iVar1) {
            iVar1 = FUN_14043e6d0(param_1,param_3,param_2,0);
            if (iVar1 == 0) goto LAB_1403f829b;
        }
        bVar3 = (*(uint *)(param_1 + 0x674c) & *(uint *)(lVar2 + 0x30)) != 0;
    }
    return bVar3;
}



undefined8
FUN_1403f82f0(longlong param_1,uint param_2,longlong *param_3,undefined2 *param_4,uint param_5,
              longlong *param_6,longlong param_7)

{
    longlong **pplVar1;
    ulonglong uVar2;
    longlong **pplVar3;
    undefined2 *puVar4;
    uint uVar5;
    longlong lVar6;
    undefined8 *puVar7;
    longlong *plVar8;
    bool bVar9;
    longlong *plVar10;
    longlong lVar11;
    longlong lVar12;
    ulonglong local_48;
    longlong local_40;
    longlong local_38;

    uVar5 = *(uint *)param_3;
    if ((uVar5 == 0) || (lVar6 = param_3[1], lVar6 == 0)) {
        return 0;
    }
    for (puVar7 = *(undefined8 **)
            (*(longlong *)(param_1 + 0x67e8) +
             (((ulonglong)uVar5 << 0x30 | (ulonglong)((uint)lVar6 & 0xffffff)) %
              (ulonglong)(*(longlong *)(param_1 + 0x67f0) - *(longlong *)(param_1 + 0x67e8) >> 3)
             ) * 8); puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7) {
        if ((*(uint *)(puVar7 + 1) == uVar5) && (puVar7[2] == lVar6)) {
            if (puVar7 != (undefined8 *)0x0) {
                lVar6 = puVar7[4];
                lVar11 = 0;
                lVar12 = puVar7[5] - lVar6 >> 1;
                uVar2 = lVar12 + 1;
                if (uVar2 < 0x7fffffffffffffff) {
                    lVar11 = FUN_14018b280(uVar2 * 2,0);
                }
                lVar12 = lVar12 * 2;
                FUN_1407db590(lVar11,lVar6,lVar12);
                puVar4 = (undefined2 *)(lVar12 + lVar11);
                if (puVar4 != (undefined2 *)0x0) {
                    *puVar4 = 0;
                }
                if ((ulonglong)param_5 - 1 < 0x7fffffff) {
                    FUN_14001b680(param_4,param_5);
                }
                else if ((ulonglong)param_5 != 0) {
                    *param_4 = 0;
                }
                if (lVar11 != 0) {
                    FUN_14018b900(lVar11,0);
                }
                return 1;
            }
            break;
        }
    }
    if ((*param_6 != 0) || (param_6[1] != 0)) {
        pplVar3 = (longlong **)(param_1 + 0x6808);
        plVar10 = *pplVar3;
        bVar9 = true;
        joined_r0x0001403f83be:
        plVar8 = plVar10;
        if (plVar8 != (longlong *)0x0) {
            plVar10 = (longlong *)plVar8[3];
            if ((*plVar8 == *param_6) && (plVar8[1] == param_6[1])) goto code_r0x0001403f83d3;
            goto LAB_1403f83e9;
        }
        plVar10 = (longlong *)FUN_14018b280(0x40);
        if (plVar10 != (longlong *)0x0) {
            lVar6 = param_6[1];
            lVar12 = *param_6;
            plVar10[2] = 0;
            plVar10[3] = 0;
            *(undefined4 *)(plVar10 + 4) = 0;
            plVar10[5] = 0;
            *(uint *)(plVar10 + 7) = param_2;
            plVar10[1] = lVar6;
            *plVar10 = lVar12;
            plVar10[4] = *param_3;
            lVar6 = param_3[1];
            plVar10[6] = param_7;
            plVar10[5] = lVar6;
            if (plVar10[2] == 0) {
                plVar10[2] = (longlong)pplVar3;
                pplVar1 = (longlong **)(plVar10 + 3);
                *pplVar1 = *pplVar3;
                *pplVar3 = plVar10;
                if (*pplVar1 != (longlong *)0x0) {
                    (*pplVar1)[2] = (longlong)pplVar1;
                }
            }
        }
        if ((bVar9) && ((*(byte *)(param_1 + 0x7b48) & 0x10) != 0)) {
            local_40 = *param_3;
            local_48 = (ulonglong)param_2;
            local_38 = param_3[1];
            FUN_1403f4740(param_1,0x597,&local_48);
        }
    }
    return 0;
    code_r0x0001403f83d3:
    if (*(uint *)(plVar8 + 4) == uVar5) {
        if ((plVar8[5] == lVar6) && (plVar8[6] == param_7)) {
            return 0;
        }
        LAB_1403f83e9:
        if ((*(uint *)(plVar8 + 4) == uVar5) && (plVar8[5] == lVar6)) {
            bVar9 = false;
        }
    }
    goto joined_r0x0001403f83be;
}



void FUN_1403f8590(longlong param_1,short *param_2,uint *param_3)

{
    short sVar1;
    uint uVar2;
    undefined8 *puVar3;
    undefined8 uVar4;
    longlong lVar5;

    if (param_2 != (short *)0x0) {
        uVar2 = *param_3;
        if ((uVar2 != 0) && (lVar5 = *(longlong *)(param_3 + 2), lVar5 != 0)) {
            for (puVar3 = *(undefined8 **)
                    (*(longlong *)(param_1 + 0x67e8) +
                     (((ulonglong)uVar2 << 0x30 | (ulonglong)((uint)lVar5 & 0xffffff)) %
                      (ulonglong)
                              (*(longlong *)(param_1 + 0x67f0) - *(longlong *)(param_1 + 0x67e8) >> 3)) * 8);
                 puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
                if ((*(uint *)(puVar3 + 1) == uVar2) && (puVar3[2] == lVar5)) {
                    if (puVar3 != (undefined8 *)0x0) {
                        return;
                    }
                    break;
                }
            }
            uVar4 = FUN_1403fad00(param_1 + 0x67d8,param_3);
            lVar5 = 0;
            sVar1 = *param_2;
            while (sVar1 != 0) {
                lVar5 = lVar5 + 1;
                sVar1 = param_2[lVar5];
            }
            FUN_14001c480(uVar4,param_2,param_2 + lVar5);
        }
    }
    return;
}



void FUN_1403f8660(undefined8 param_1,uint param_2,longlong *param_3,longlong *param_4)

{
    longlong **pplVar1;
    longlong **pplVar2;
    longlong lVar3;
    longlong lVar4;
    bool bVar5;
    longlong lVar6;
    longlong *plVar7;
    ulonglong local_38;
    longlong local_30;
    longlong local_28;

    lVar6 = DAT_140c65898;
    if ((*param_4 != 0) || (param_4[1] != 0)) {
        pplVar2 = (longlong **)(DAT_140c65898 + 0x6810);
        plVar7 = *pplVar2;
        bVar5 = true;
        if (plVar7 != (longlong *)0x0) {
            do {
                if (((*(int *)(plVar7 + 4) == *(int *)param_3) && (plVar7[5] == param_3[1])) &&
                    (bVar5 = false, *(uint *)(plVar7 + 7) == param_2)) break;
                plVar7 = (longlong *)plVar7[3];
                bVar5 = true;
            } while (plVar7 != (longlong *)0x0);
        }
        plVar7 = (longlong *)FUN_14018b280(0x40);
        if (plVar7 != (longlong *)0x0) {
            lVar3 = param_4[1];
            lVar4 = *param_4;
            plVar7[2] = 0;
            plVar7[3] = 0;
            *(undefined4 *)(plVar7 + 4) = 0;
            plVar7[5] = 0;
            plVar7[1] = lVar3;
            *plVar7 = lVar4;
            plVar7[4] = *param_3;
            lVar3 = param_3[1];
            plVar7[6] = 0;
            *(uint *)(plVar7 + 7) = param_2;
            plVar7[5] = lVar3;
            if (plVar7[2] == 0) {
                plVar7[2] = (longlong)pplVar2;
                pplVar1 = (longlong **)(plVar7 + 3);
                *pplVar1 = *pplVar2;
                *pplVar2 = plVar7;
                if (*pplVar1 != (longlong *)0x0) {
                    (*pplVar1)[2] = (longlong)pplVar1;
                }
            }
        }
        if ((bVar5) && ((*(byte *)(lVar6 + 0x7b48) & 0x10) != 0)) {
            local_30 = *param_3;
            local_38 = (ulonglong)param_2;
            local_28 = param_3[1];
            FUN_1403f4740(lVar6,0x597,&local_38);
        }
    }
    return;
}



void FUN_1403f87b0(longlong param_1,ulonglong param_2,longlong *param_3,longlong param_4)

{
    longlong **pplVar1;
    longlong **pplVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    bool bVar6;
    longlong *plVar7;
    uint uVar8;
    ulonglong uVar9;
    longlong lVar10;
    ulonglong local_res18 [2];

    lVar3 = *param_3;
    uVar9 = param_2 & 0xffffffff;
    if ((lVar3 != 0) || (param_3[1] != 0)) {
        if ((int)param_2 == 0) {
            // WARNING: Could not recover jumptable at 0x0001403f87f2. Too many branches
            // WARNING: Treating indirect jump as call
            (*(code *)param_3[1])(lVar3,param_2,0);
            return;
        }
        uVar4 = *(ulonglong *)(DAT_140c635f0 + 0x15e0);
        uVar8 = (uint)uVar9;
        local_res18[0] = uVar4;
        uVar5 = *(ulonglong *)(uVar4 + 8);
        while (uVar5 != 0) {
            if (*(uint *)(uVar5 + 0x20) < uVar8) {
                uVar5 = *(ulonglong *)(uVar5 + 0x18);
            }
            else {
                local_res18[0] = uVar5;
                uVar5 = *(ulonglong *)(uVar5 + 0x10);
            }
        }
        if ((local_res18[0] == uVar4) || (uVar8 < *(uint *)(local_res18[0] + 0x20))) {
            local_res18[0] = uVar4;
        }
        if (local_res18[0] != uVar4) {
            lVar10 = 0;
            if (*(longlong *)(*(longlong *)(local_res18[0] + 0x28) + -8) != 0) {
                lVar10 = *(longlong *)(local_res18[0] + 0x28);
            }
            // WARNING: Could not recover jumptable at 0x0001403f8877. Too many branches
            // WARNING: Treating indirect jump as call
            (*(code *)param_3[1])(lVar3,uVar9,lVar10);
            return;
        }
        pplVar2 = (longlong **)(param_1 + 0x6818);
        bVar6 = true;
        for (plVar7 = *pplVar2; plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[3]) {
            if (*(uint *)(plVar7 + 4) == uVar8) {
                bVar6 = false;
                break;
            }
        }
        plVar7 = (longlong *)FUN_14018b280(0x30);
        if (plVar7 != (longlong *)0x0) {
            lVar3 = param_3[1];
            lVar10 = *param_3;
            plVar7[2] = 0;
            plVar7[3] = 0;
            plVar7[1] = lVar3;
            *plVar7 = lVar10;
            *(uint *)(plVar7 + 4) = uVar8;
            plVar7[5] = param_4;
            if (plVar7[2] == 0) {
                pplVar1 = (longlong **)(plVar7 + 3);
                plVar7[2] = (longlong)pplVar2;
                *pplVar1 = *pplVar2;
                *pplVar2 = plVar7;
                if (*pplVar1 != (longlong *)0x0) {
                    (*pplVar1)[2] = (longlong)pplVar1;
                }
            }
        }
        if ((bVar6) && ((*(byte *)(param_1 + 0x7b48) & 0x10) != 0)) {
            local_res18[0] = local_res18[0] & 0xffffffff00000000 | uVar9;
            FUN_1403f4740(param_1,0x59c,local_res18);
        }
    }
    return;
}



void FUN_1403f8940(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined4 local_res8 [2];
    ulonglong local_b8;
    undefined8 local_b0;
    undefined8 local_a8;
    undefined local_a0 [8];
    undefined *local_98;
    longlong local_90;
    undefined local_80 [8];
    undefined *local_78;
    longlong local_70;
    undefined local_60 [8];
    undefined *local_58;
    longlong local_50;
    undefined local_40 [8];
    char local_38;

    local_58 = (undefined *)FUN_14018b280(0x30);
    local_50 = 0;
    *local_58 = 0;
    *(undefined8 *)(local_58 + 8) = 0;
    *(undefined **)(local_58 + 0x10) = local_58;
    *(undefined **)(local_58 + 0x18) = local_58;
    for (lVar1 = *(longlong *)(param_1 + 0x6808); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x18)) {
        FUN_1403fd3d0(local_60,local_40,lVar1 + 0x20);
        if (local_38 != '\0') {
            local_b8 = (ulonglong)*(uint *)(lVar1 + 0x38);
            local_b0 = *(undefined8 *)(lVar1 + 0x20);
            local_a8 = *(undefined8 *)(lVar1 + 0x28);
            FUN_1403f4740(param_1,0x597,&local_b8);
        }
    }
    local_78 = (undefined *)FUN_14018b280(0x50);
    local_70 = 0;
    *local_78 = 0;
    *(undefined8 *)(local_78 + 8) = 0;
    *(undefined **)(local_78 + 0x10) = local_78;
    *(undefined **)(local_78 + 0x18) = local_78;
    for (lVar1 = *(longlong *)(param_1 + 0x6810); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x18)) {
        uVar5 = FUN_1403faf50(local_80,lVar1 + 0x20);
        FUN_1403addd0(uVar5,local_40,lVar1 + 0x38);
        if (local_38 != '\0') {
            local_b8 = (ulonglong)*(uint *)(lVar1 + 0x38);
            local_b0 = *(undefined8 *)(lVar1 + 0x20);
            local_a8 = *(undefined8 *)(lVar1 + 0x28);
            FUN_1403f4740(param_1,0x597,&local_b8);
        }
    }
    local_98 = (undefined *)FUN_14018b280(0x28);
    local_90 = 0;
    *local_98 = 0;
    *(undefined8 *)(local_98 + 8) = 0;
    *(undefined **)(local_98 + 0x10) = local_98;
    *(undefined **)(local_98 + 0x18) = local_98;
    for (lVar1 = *(longlong *)(param_1 + 0x6818); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x18)) {
        FUN_1400293c0(local_a0,local_40,lVar1 + 0x20);
        if (local_38 != '\0') {
            local_res8[0] = *(undefined4 *)(lVar1 + 0x20);
            FUN_1403f4740(param_1,0x59c,local_res8);
        }
    }
    if (local_90 != 0) {
        lVar1 = *(longlong *)(local_98 + 8);
        while (lVar1 != 0) {
            FUN_1400083b0(local_a0,*(undefined8 *)(lVar1 + 0x18));
            lVar2 = *(longlong *)(lVar1 + 0x10);
            FUN_14018b900(lVar1,0);
            lVar1 = lVar2;
        }
        *(undefined **)(local_98 + 0x10) = local_98;
        *(undefined8 *)(local_98 + 8) = 0;
        *(undefined **)(local_98 + 0x18) = local_98;
        local_90 = 0;
    }
    FUN_14018b900(local_98,0);
    if (local_70 != 0) {
        lVar1 = *(longlong *)(local_78 + 8);
        while (lVar1 != 0) {
            FUN_1403fd500(local_80,*(undefined8 *)(lVar1 + 0x18));
            lVar2 = *(longlong *)(lVar1 + 0x10);
            if (*(longlong *)(lVar1 + 0x40) != 0) {
                lVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + 8);
                while (lVar4 != 0) {
                    FUN_1400083b0(lVar1 + 0x30,*(undefined8 *)(lVar4 + 0x18));
                    lVar3 = *(longlong *)(lVar4 + 0x10);
                    FUN_14018b900(lVar4,0);
                    lVar4 = lVar3;
                }
                *(longlong *)(*(longlong *)(lVar1 + 0x38) + 0x10) = *(longlong *)(lVar1 + 0x38);
                *(undefined8 *)(*(longlong *)(lVar1 + 0x38) + 8) = 0;
                *(longlong *)(*(longlong *)(lVar1 + 0x38) + 0x18) = *(longlong *)(lVar1 + 0x38);
                *(undefined8 *)(lVar1 + 0x40) = 0;
            }
            FUN_14018b900(*(undefined8 *)(lVar1 + 0x38),0);
            FUN_14018b900(lVar1,0);
            lVar1 = lVar2;
        }
        *(undefined **)(local_78 + 0x10) = local_78;
        *(undefined8 *)(local_78 + 8) = 0;
        *(undefined **)(local_78 + 0x18) = local_78;
        local_70 = 0;
    }
    FUN_14018b900(local_78,0);
    if (local_50 != 0) {
        lVar1 = *(longlong *)(local_58 + 8);
        while (lVar1 != 0) {
            FUN_1400083b0(local_60,*(undefined8 *)(lVar1 + 0x18));
            lVar2 = *(longlong *)(lVar1 + 0x10);
            FUN_14018b900(lVar1,0);
            lVar1 = lVar2;
        }
        *(undefined **)(local_58 + 0x10) = local_58;
        *(undefined8 *)(local_58 + 8) = 0;
        *(undefined **)(local_58 + 0x18) = local_58;
        local_50 = 0;
    }
    FUN_14018b900(local_58,0);
    return;
}



// WARNING: Could not reconcile some variable overlaps

longlong FUN_1403f8ce0(longlong param_1,longlong param_2,int param_3)

{
    ulonglong uVar1;
    longlong lVar2;
    undefined auVar3 [16];
    int iVar4;
    longlong lVar5;
    undefined8 *puVar6;
    int *piVar7;
    longlong *plVar8;
    longlong *plVar9;
    ulonglong uVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    int local_res8;
    int local_resc;
    undefined local_res20 [8];
    undefined local_d8 [16];
    undefined local_c8 [16];
    undefined local_b8 [8];
    float fStack176;
    float fStack172;
    undefined local_a8 [8];
    float fStack160;
    float fStack156;
    undefined local_98 [16];
    longlong local_88;
    longlong *local_60;
    longlong *local_58;

    FUN_140474e10(local_98);
    (**(code **)(*local_58 + 0x30))();
    (**(code **)(*local_58 + 0x60))();
    lVar5 = (**(code **)(*DAT_140c65670 + 0x248))();
    uVar10 = 0;
    if ((param_3 != 0) &&
        (iVar4 = (**(code **)(**(longlong **)(param_2 + 0x40) + 0x10))(), iVar4 != 0)) {
        puVar6 = (undefined8 *)(**(code **)(*local_58 + 0x18))(local_58,local_res20);
        uVar1 = *(ulonglong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 0xc88);
        fVar11 = (float)(*(uint *)(lVar5 + 8) >> 1);
        fVar12 = (float)(*(uint *)(lVar5 + 0xc) >> 1);
        fVar13 = local_b8._0_4_ + (float)(int)*puVar6 + fVar11;
        fVar14 = local_b8._4_4_ + (float)*(int *)((longlong)puVar6 + 4) + fVar12;
        fVar15 = fStack176 + 0.0 + 0.0;
        fVar16 = fStack172 + 0.0 + 0.0;
        fVar11 = local_a8._0_4_ + (float)(int)*puVar6 + fVar11;
        fVar12 = local_a8._4_4_ + (float)*(int *)((longlong)puVar6 + 4) + fVar12;
        fVar17 = fStack160 + 0.0 + 0.0;
        fVar18 = fStack156 + 0.0 + 0.0;
        _local_b8 = CONCAT412(fVar16,CONCAT48(fVar15,CONCAT44(fVar14,fVar13)));
        _local_a8 = CONCAT412(fVar18,CONCAT48(fVar17,CONCAT44(fVar12,fVar11)));
        local_d8 = CONCAT412(fVar16,CONCAT48(fVar15,CONCAT44(fVar14,fVar13)));
        local_c8 = CONCAT412(fVar18,CONCAT48(fVar17,CONCAT44(fVar12,fVar11)));
        auVar3 = ZEXT816(0) & (undefined  [16])0x0;
        if (uVar1 != 0) {
            plVar8 = *(longlong **)(*(longlong *)(DAT_140c65898 + 0x7340) + 0xc80);
            plVar9 = plVar8;
            do {
                for (puVar6 = (undefined8 *)**(undefined8 **)(*plVar9 + 0x38);
                     puVar6 != *(undefined8 **)(*plVar9 + 0x38); puVar6 = (undefined8 *)*puVar6) {
                    if (puVar6[2] == 0) {
                        FUN_140157910(plVar8[uVar10],local_d8,local_b8,0);
                        auVar3 = local_d8;
                        goto LAB_1403f8e32;
                    }
                }
                uVar10 = uVar10 + 1;
                plVar9 = plVar9 + 1;
            } while (uVar10 < uVar1);
        }
        LAB_1403f8e32:
        local_d8 = auVar3;
        local_res8 = (int)local_d8._0_4_;
        local_resc = (int)local_d8._4_4_;
        piVar7 = (int *)(**(code **)(*local_58 + 0x18))(local_58,local_res20);
        local_res8 = local_res8 + *piVar7;
        local_resc = local_resc + piVar7[1];
        (**(code **)(*local_58 + 0x20))(local_58,&local_res8);
    }
    lVar5 = *(longlong *)(param_1 + 0x7da0);
    plVar8 = (longlong *)FUN_14018b280(0x80,0);
    if (plVar8 + 2 != (longlong *)0x0) {
        FUN_140474e10(plVar8 + 2,local_98);
    }
    *plVar8 = lVar5;
    plVar8[1] = *(longlong *)(lVar5 + 8);
    **(longlong ***)(lVar5 + 8) = plVar8;
    lVar2 = DAT_140c65898;
    *(longlong **)(lVar5 + 8) = plVar8;
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x7da0) + 8);
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x7340), lVar2 != 0)) {
        FUN_1400ea3e0(lVar2,"MessageFinished",&DAT_1409eb834,local_98);
    }
    if (local_60 != (longlong *)0x0) {
        (**(code **)(*local_60 + 8))();
        local_60 = (longlong *)0x0;
    }
    if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 8))();
        local_58 = (longlong *)0x0;
    }
    if (local_88 != 0) {
        FUN_14018b900(local_88,0);
    }
    return lVar5 + 0x10;
}



void FUN_1403f8f50(longlong param_1)

{
    longlong **pplVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    longlong lVar7;
    int iVar8;
    int iVar9;
    longlong *plVar10;

    iVar8 = DAT_140c636a8;
    plVar10 = (longlong *)**(longlong **)(param_1 + 0x7da0);
    if (plVar10 != *(longlong **)(param_1 + 0x7da0)) {
        do {
            pplVar1 = (longlong **)(plVar10 + 10);
            plVar2 = plVar10 + 2;
            plVar10 = (longlong *)*plVar10;
            if (*pplVar1 == (longlong *)0x0) {
                puVar3 = *(undefined8 **)(param_1 + 0x7da0);
                puVar4 = (undefined8 *)*puVar3;
                lVar7 = DAT_140c65898;
                while (puVar6 = puVar4, DAT_140c65898 = lVar7, puVar6 != puVar3) {
                    puVar4 = (undefined8 *)*puVar6;
                    if (puVar6 + 2 == plVar2) {
                        puVar5 = (undefined8 *)puVar6[1];
                        *puVar5 = puVar4;
                        puVar4[1] = puVar5;
                        if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x7340) != 0)) {
                            FUN_1400ea3e0(*(longlong *)(lVar7 + 0x7340),"MessageFinished",&DAT_1409eb834,
                                          puVar6 + 2);
                        }
                        if ((longlong *)puVar6[9] != (longlong *)0x0) {
                            (**(code **)(*(longlong *)puVar6[9] + 8))();
                            puVar6[9] = 0;
                        }
                        if ((longlong *)puVar6[10] != (longlong *)0x0) {
                            (**(code **)(*(longlong *)puVar6[10] + 8))();
                            puVar6[10] = 0;
                        }
                        if (puVar6[4] != 0) {
                            FUN_14018b900(puVar6[4],0);
                        }
                        FUN_14018b900(puVar6,0);
                        lVar7 = DAT_140c65898;
                    }
                }
            }
            else {
                iVar9 = (**(code **)(**pplVar1 + 0x30))();
                if (0 < (iVar8 - *(int *)plVar2) - iVar9) {
                    puVar3 = *(undefined8 **)(param_1 + 0x7da0);
                    puVar4 = (undefined8 *)*puVar3;
                    lVar7 = DAT_140c65898;
                    while (puVar6 = puVar4, DAT_140c65898 = lVar7, puVar6 != puVar3) {
                        puVar4 = (undefined8 *)*puVar6;
                        if (puVar6 + 2 == plVar2) {
                            puVar5 = (undefined8 *)puVar6[1];
                            *puVar5 = puVar4;
                            puVar4[1] = puVar5;
                            if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x7340) != 0)) {
                                FUN_1400ea3e0(*(longlong *)(lVar7 + 0x7340),"MessageFinished",&DAT_1409eb834,
                                              puVar6 + 2);
                            }
                            if ((longlong *)puVar6[9] != (longlong *)0x0) {
                                (**(code **)(*(longlong *)puVar6[9] + 8))();
                                puVar6[9] = 0;
                            }
                            if ((longlong *)puVar6[10] != (longlong *)0x0) {
                                (**(code **)(*(longlong *)puVar6[10] + 8))();
                                puVar6[10] = 0;
                            }
                            if (puVar6[4] != 0) {
                                FUN_14018b900(puVar6[4],0);
                            }
                            FUN_14018b900(puVar6,0);
                            lVar7 = DAT_140c65898;
                        }
                    }
                }
            }
        } while (plVar10 != (longlong *)*(longlong *)(param_1 + 0x7da0));
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1403f9160(longlong param_1)

{
    longlong **pplVar1;
    longlong **pplVar2;
    short sVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong **pplVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    uint uVar10;
    ulonglong uVar11;
    undefined4 *puVar12;
    longlong lVar13;
    undefined8 uVar14;
    longlong *plVar15;
    float *pfVar16;
    undefined8 *puVar17;
    longlong lVar18;
    longlong *plVar19;
    undefined *puVar20;
    int iVar21;
    longlong **pplVar22;
    longlong **pplVar23;
    undefined *puVar24;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    undefined4 uVar25;
    undefined extraout_XMM0 [16];
    float fVar26;
    undefined auVar27 [16];
    undefined auVar28 [16];
    float fVar29;
    float fVar31;
    float fVar32;
    float fVar33;
    float fVar34;
    float fVar35;
    float fVar36;
    float fVar37;
    float fVar38;
    float fVar39;
    float fVar40;
    undefined4 uVar41;
    undefined4 uVar42;
    undefined4 uVar43;
    undefined auVar44 [16];
    float fVar45;
    float fVar46;
    float fVar47;
    float fVar48;
    float fVar49;
    float local_res8;
    undefined4 uStackX12;
    int local_res10;
    ulonglong local_res18;
    int local_res20;
    undefined local_218 [4];
    undefined auStack532 [4];
    undefined8 uStack528;
    undefined local_208 [4];
    undefined auStack516 [4];
    undefined8 uStack512;
    undefined *local_1f8;
    undefined local_1f0 [8];
    undefined *local_1e8;
    longlong local_1e0;
    undefined local_1d0 [8];
    longlong **local_1c8;
    longlong **local_1c0;
    longlong **local_1b8;
    undefined local_1b0 [4];
    undefined4 local_1ac;
    undefined4 local_1a8;
    undefined4 local_1a4;
    longlong **local_1a0;
    float local_198;
    float fStack404;
    float fStack400;
    float fStack396;
    longlong *local_188;
    longlong *local_180;
    undefined local_178 [8];
    longlong local_170;
    undefined local_168 [16];
    undefined4 local_118;
    undefined4 uStack276;
    undefined4 uStack272;
    undefined4 uStack268;
    undefined auVar30 [16];

    local_res10 = DAT_140c636a8;
    uVar11 = (**(code **)(*DAT_140c65670 + 0x248))();
    local_res18 = uVar11;
    local_1e8 = (undefined *)FUN_14018b280(0x50);
    local_1e0 = 0;
    *local_1e8 = 0;
    fVar39 = 0.0;
    *(undefined8 *)(local_1e8 + 8) = 0;
    *(undefined **)(local_1e8 + 0x10) = local_1e8;
    *(undefined **)(local_1e8 + 0x18) = local_1e8;
    plVar15 = *(longlong **)(param_1 + 0x7da0);
    if (plVar15 != (longlong *)*plVar15) {
        do {
            plVar15 = (longlong *)plVar15[1];
            if ((longlong *)plVar15[10] != (longlong *)0x0) {
                iVar7 = (**(code **)(*(longlong *)plVar15[10] + 0x30))();
                iVar9 = *(int *)(plVar15 + 2);
                iVar8 = (**(code **)(*(longlong *)plVar15[10] + 0x10))();
                if (iVar8 != 0) {
                    (**(code **)(*(longlong *)plVar15[10] + 0x78))();
                    puVar12 = (undefined4 *)
                            (**(code **)(*(longlong *)plVar15[10] + 0x88))
                            ((longlong *)plVar15[10],&local_198);
                    local_1ac = *puVar12;
                    local_1a8 = puVar12[1];
                    local_1a4 = puVar12[2];
                    lVar13 = FUN_1403fb0a0(local_1f0,local_1b0);
                    FUN_1401529e0(lVar13,&local_res8,plVar15 + 3);
                    lVar18 = CONCAT44(uStackX12,local_res8);
                    if (lVar18 != *(longlong *)(lVar13 + 8)) {
                        iVar8 = (**(code **)(**(longlong **)(lVar18 + 0x80) + 0x30))();
                        if ((uint)(iVar7 + iVar9) <= (uint)(iVar8 + *(int *)(lVar18 + 0x40)))
                            goto LAB_1403f92dd;
                        iVar9 = (**(code **)(*(longlong *)plVar15[10] + 0x38))();
                        *(int *)(plVar15 + 2) = local_res10 - iVar9;
                    }
                    uVar14 = FUN_1403fb300(lVar13,plVar15 + 3);
                    FUN_140474ec0(uVar14,plVar15 + 2);
                }
            }
            LAB_1403f92dd:
            uVar11 = local_res18;
        } while (plVar15 != **(longlong ***)(param_1 + 0x7da0));
    }
    if (local_1e0 != 0) {
        (**(code **)(*DAT_140c65680 + 0x88))();
        iVar9 = *(int *)(uVar11 + 8);
        fVar38 = 1.0;
        fVar37 = 1.0;
        local_res18._0_4_ = *(uint *)(uVar11 + 0xc);
        local_1f8 = *(undefined **)(local_1e8 + 0x10);
        local_res18 = local_res18 & 0xffffffff00000000 | (ulonglong)(uint)local_res18;
        local_res20 = iVar9;
        if (local_1f8 != local_1e8) {
            fVar32 = 0.5;
            do {
                puVar24 = local_1f8;
                local_1c8 = (longlong **)0x0;
                local_1c0 = (longlong **)0x0;
                local_1b8 = (longlong **)0x0;
                fVar36 = fVar39;
                if (local_1e0 != 0) {
                    FUN_1403fb510(local_1d0);
                    fVar36 = fVar39;
                }
                lVar18 = *(longlong *)(*(longlong *)(puVar24 + 0x38) + 0x10);
                if (lVar18 != *(longlong *)(puVar24 + 0x38)) {
                    do {
                        pplVar22 = local_1c0;
                        if (local_1c0 == local_1b8) {
                            FUN_1403fdf10(local_1d0);
                        }
                        else {
                            if (local_1c0 != (longlong **)0x0) {
                                FUN_140474e10(local_1c0);
                            }
                            local_1c0 = pplVar22 + 0xe;
                        }
                        lVar13 = *(longlong *)(lVar18 + 0x18);
                        if (lVar13 == 0) {
                            lVar13 = *(longlong *)(lVar18 + 8);
                            if (lVar18 == *(longlong *)(lVar13 + 0x18)) {
                                do {
                                    lVar18 = lVar13;
                                    lVar13 = *(longlong *)(lVar18 + 8);
                                } while (lVar18 == *(longlong *)(lVar13 + 0x18));
                            }
                            if (*(longlong *)(lVar18 + 0x18) != lVar13) {
                                lVar18 = lVar13;
                            }
                        }
                        else {
                            for (lVar5 = *(longlong *)(lVar13 + 0x10); lVar18 = lVar13, lVar5 != 0;
                                 lVar5 = *(longlong *)(lVar5 + 0x10)) {
                                lVar13 = lVar5;
                            }
                        }
                    } while (lVar18 != *(longlong *)(puVar24 + 0x38));
                }
                pplVar22 = local_1c0;
                pplVar23 = local_1c8;
                if (local_1c8 != local_1c0) {
                    lVar18 = ((longlong)local_1c0 - (longlong)local_1c8) / 0x70;
                    for (lVar13 = lVar18; lVar13 != 1; lVar13 = lVar13 >> 1) {
                    }
                    FUN_1403ff250(local_1c8,local_1c0);
                    if (lVar18 < 0x11) {
                        FUN_1403ff6d0(pplVar23,pplVar22,&LAB_140400de0);
                    }
                    else {
                        FUN_1403ff6d0(pplVar23,pplVar23 + 0xe0,&LAB_140400de0);
                        FUN_1403ffe90(pplVar23 + 0xe0);
                    }
                }
                pplVar2 = local_1c8;
                fVar39 = fVar36;
                if (pplVar23 != pplVar22) {
                    pplVar22 = pplVar22 + -6;
                    fVar29 = (float)iVar9 * fVar32;
                    auVar30 = ZEXT416((uint)fVar29) & (undefined  [16])0xffffffffffffffff;
                    fVar32 = (float)(uint)local_res18 * fVar32;
                    fVar26 = (float)(uint)local_res18 * 0.25;
                    auVar44 = ZEXT416((uint)(float)((int)((uint)local_res18 +
                                                          ((int)(uint)local_res18 >> 0x1f & 3U)) >> 2));
                    fVar40 = (float)SUB164(ZEXT1016((unkuint10)0 << 0x40) >> 0x40,0) * 0.003921569;
                    uVar41 = 0;
                    uVar42 = 0;
                    uVar43 = 0;
                    fVar45 = fVar36;
                    fVar46 = fVar36;
                    fVar47 = fVar29;
                    fVar48 = fVar36;
                    fVar49 = fVar36;
                    do {
                        fVar31 = SUB164(auVar30 >> 0x20,0);
                        local_1a0 = pplVar22;
                        (**(code **)(**pplVar22 + 0x30))();
                        plVar15 = (longlong *)(**(code **)(**pplVar22 + 0x60))();
                        (**(code **)(**pplVar22 + 0x70))();
                        fVar33 = 1.0;
                        fVar35 = 1.0;
                        fVar34 = extraout_XMM0_Da;
                        pfVar16 = (float *)(**(code **)(**pplVar22 + 0x58))();
                        local_198 = *pfVar16 * fVar33;
                        fStack404 = pfVar16[1] * fVar38;
                        fStack400 = pfVar16[2] * fVar35;
                        fStack396 = pfVar16[3] * fVar34;
                        (**(code **)(**pplVar22 + 0x78))();
                        local_res8 = fVar37 * extraout_XMM0_Da_00;
                        puVar17 = (undefined8 *)(**(code **)(**pplVar22 + 0x18))(*pplVar22,local_1b0);
                        fVar37 = (float)(int)*puVar17;
                        fVar38 = (float)*(int *)((longlong)puVar17 + 4);
                        fVar33 = 0.0;
                        fVar35 = 0.0;
                        (**(code **)(**pplVar22 + 0x80))(0);
                        _local_208 = CONCAT412(fVar46,CONCAT48(fVar45,CONCAT44(fVar26,fVar29)));
                        uVar25 = SUB164(extraout_XMM0,0);
                        _local_218 = extraout_XMM0 & (undefined  [16])0x0;
                        uVar10 = (**(code **)(*DAT_140c65680 + 0x108))
                                (DAT_140c65680,plVar15,pplVar22[-6],0xffffffffffffffff,local_218,
                                 0x500,&local_198,1);
                        fVar37 = (fVar47 - (local_208 - local_218) * 0.5) + fVar37 + 0.0;
                        fVar38 = fVar36 + (fVar32 - (auStack516 - auStack532) * 0.5) + fVar38;
                        fVar31 = fVar31 + (fVar48 - fVar39) + fVar33;
                        fVar33 = fVar39 + (fVar49 - fVar39) + fVar35;
                        auVar30 = CONCAT412(fVar33,CONCAT48(fVar31,CONCAT44(fVar38,fVar37)));
                        local_218 = local_218 + fVar37;
                        auStack532 = auStack532 + fVar38;
                        lVar18 = CONCAT44(auStack532,local_218);
                        auVar27 = CONCAT412(uStack528._4_4_ + fVar33,CONCAT48((float)uStack528 + fVar31,lVar18))
                                ;
                        local_208 = local_208 + fVar37;
                        _local_208 = CONCAT412(uStack512._4_4_ + fVar33,
                                               CONCAT48((float)uStack512 + fVar31,
                                                        CONCAT44(auStack516 + fVar38,local_208)));
                        iVar9 = (int)local_218;
                        auVar28 = auVar27;
                        if ((iVar9 != -0x80000000) && ((float)iVar9 != local_218)) {
                            uVar10 = movmskps(uVar10,CONCAT88(SUB168(CONCAT412(auStack532,
                                                                               CONCAT48(auStack532,lVar18)) >>
                                                                                                            0x40,0),
                                                              (ulonglong)(uint)local_218 | lVar18 << 0x20));
                            uVar10 = uVar10 & 1;
                            auVar28 = ZEXT416((uint)(float)(iVar9 - uVar10));
                        }
                        _local_218 = CONCAT124(SUB1612(auVar27 >> 0x20,0),SUB164(auVar28,0));
                        iVar9 = (int)local_208;
                        if ((iVar9 != -0x80000000) && ((float)iVar9 != local_208)) {
                            uVar10 = movmskps(uVar10,ZEXT816(CONCAT44(local_208,local_208)));
                            local_208 = (float)(iVar9 + (uVar10 & 1 ^ 1));
                        }
                        lVar18 = (**(code **)(*DAT_140c65670 + 0x248))();
                        iVar9 = *(int *)(lVar18 + 0xc);
                        lVar18 = FUN_14014e670(*(longlong *)(DAT_140c65898 + 0x7340) + 0xa58,L"ActionBarsLeft");
                        iVar7 = *(int *)(lVar18 + 0x24);
                        lVar18 = FUN_14014e670(*(longlong *)(DAT_140c65898 + 0x7340) + 0xa58,L"ActionBarsRight")
                                ;
                        iVar8 = *(int *)(lVar18 + 0x24);
                        lVar13 = FUN_14014e670(*(longlong *)(DAT_140c65898 + 0x7340) + 0xa58,L"CenterTextBottom"
                        );
                        lVar18 = DAT_140c65898;
                        iVar21 = *(int *)(lVar13 + 0x24);
                        if ((((float)iVar8 <= local_218) || (local_218 <= (float)iVar7)) &&
                            (((float)iVar8 <= local_208 || (local_208 <= (float)iVar7)))) {
                            iVar21 = iVar9;
                        }
                        fVar37 = (float)iVar21;
                        local_168 = ZEXT416((uint)fVar37);
                        if (fVar37 < auStack516) {
                            fVar36 = fVar37 - auStack516;
                            local_168 = ZEXT416((uint)(auStack532 + fVar36)) & (undefined  [16])0xffffffffffffffff
                                    ;
                            _local_218 = CONCAT88(uStack528,CONCAT44(auStack532 + fVar36,local_218));
                            _local_208 = CONCAT88(uStack512,CONCAT44(auStack516 + fVar36,local_208));
                        }
                        plVar4 = pplVar22[-6];
                        lVar13 = 0;
                        local_168 = local_168 & (undefined  [16])0x0;
                        local_188 = (longlong *)0x0;
                        local_170 = 0;
                        local_180 = plVar15;
                        if (*(int *)(pplVar22 + 2) == 0) {
                            sVar3 = *(short *)plVar4;
                            while (sVar3 != 0) {
                                lVar13 = lVar13 + 1;
                                sVar3 = *(short *)((longlong)plVar4 + lVar13 * 2);
                            }
                            FUN_14001c1b0(local_178,plVar4,(undefined2 *)((longlong)plVar4 + lVar13 * 2));
                            plVar15 = local_180;
                            fVar37 = local_198;
                            fVar38 = fStack404;
                            fVar33 = fStack400;
                            fVar35 = fStack396;
                            if (local_180 != (longlong *)0x0) {
                                (**(code **)*local_180)(local_180);
                            }
                            lVar18 = *(longlong *)(lVar18 + 0x7c78);
                        }
                        else {
                            sVar3 = *(short *)plVar4;
                            while (sVar3 != 0) {
                                lVar13 = lVar13 + 1;
                                sVar3 = *(short *)((longlong)plVar4 + lVar13 * 2);
                            }
                            FUN_14001c1b0(local_178,plVar4,(undefined2 *)((longlong)plVar4 + lVar13 * 2));
                            plVar15 = local_180;
                            fVar37 = local_198;
                            fVar38 = fStack404;
                            fVar33 = fStack400;
                            fVar35 = fStack396;
                            if (local_180 != (longlong *)0x0) {
                                (**(code **)*local_180)(local_180);
                            }
                            lVar18 = *(longlong *)(lVar18 + 0x7c88);
                        }
                        plVar19 = (longlong *)FUN_14018b280(0xb0,0);
                        plVar4 = local_188;
                        pplVar22 = (longlong **)(plVar19 + 2);
                        if (pplVar22 != (longlong **)0x0) {
                            *pplVar22 = local_188;
                            plVar19[3] = (longlong)plVar15;
                            plVar19[5] = 0;
                            plVar19[6] = 0;
                            plVar19[7] = 0;
                            FUN_14001c1b0(plVar19 + 4,local_170,local_168._0_8_);
                            plVar19[8] = 0;
                            *(float *)(plVar19 + 9) = fVar39;
                            *(float *)((longlong)plVar19 + 0x4c) = local_res8;
                            *(undefined4 *)(plVar19 + 10) = uVar25;
                            *(undefined4 *)((longlong)plVar19 + 0x54) = 1;
                            *(undefined (*) [16])(plVar19 + 0xc) =
                                    CONCAT412(uStack528._4_4_,
                                              CONCAT48((float)uStack528,CONCAT44(auStack532,local_218)));
                            *(undefined (*) [16])(plVar19 + 0xe) =
                                    CONCAT412(uStack512._4_4_,
                                              CONCAT48((float)uStack512,CONCAT44(auStack516,local_208)));
                            *(undefined4 *)(plVar19 + 0x10) = local_118;
                            *(undefined4 *)((longlong)plVar19 + 0x84) = uStack276;
                            *(undefined4 *)(plVar19 + 0x11) = uStack272;
                            *(undefined4 *)((longlong)plVar19 + 0x8c) = uStack268;
                            *(undefined (*) [16])(plVar19 + 0x12) =
                                    CONCAT412(fVar35,CONCAT48(fVar33,CONCAT44(fVar38,fVar37)));
                            *(undefined (*) [16])(plVar19 + 0x14) =
                                    CONCAT412(uVar43,CONCAT48(uVar42,CONCAT44(uVar41,fVar40)));
                            if (*pplVar22 != (longlong *)0x0) {
                                (**(code **)**pplVar22)();
                            }
                            if ((undefined8 *)plVar19[3] != (undefined8 *)0x0) {
                                (***(code ***)(undefined8 *)plVar19[3])();
                            }
                        }
                        *plVar19 = lVar18;
                        plVar19[1] = *(longlong *)(lVar18 + 8);
                        **(longlong ***)(lVar18 + 8) = plVar19;
                        *(longlong **)(lVar18 + 8) = plVar19;
                        if (plVar15 != (longlong *)0x0) {
                            (**(code **)(*plVar15 + 8))(plVar15);
                        }
                        if (plVar4 != (longlong *)0x0) {
                            (**(code **)(*plVar4 + 8))(plVar4);
                        }
                        if (local_170 != 0) {
                            FUN_14018b900(local_170,0);
                        }
                        pplVar6 = local_1c0;
                        pplVar23 = local_1c8;
                        puVar24 = local_1f8;
                        iVar9 = local_res20;
                        fVar36 = fVar36 - (auStack516 - auStack532);
                        fVar37 = local_res8;
                        if (SUB164(auVar44,0) < fVar36) break;
                        fVar38 = 1.0;
                        pplVar22 = local_1a0 + -0xe;
                        pplVar1 = local_1a0 + -8;
                        local_1a0 = pplVar22;
                    } while (pplVar1 != pplVar2);
                    fVar32 = 0.5;
                    fVar38 = 1.0;
                    if (local_1c8 != local_1c0) {
                        pplVar22 = local_1c8 + 8;
                        do {
                            if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
                                FUN_1400ea3e0(*(longlong *)(DAT_140c65898 + 0x7340),"MessageFinished",&DAT_1409eb834
                                );
                            }
                            if (pplVar22[-1] != (longlong *)0x0) {
                                (**(code **)(*pplVar22[-1] + 8))();
                                pplVar22[-1] = (longlong *)0x0;
                            }
                            if (*pplVar22 != (longlong *)0x0) {
                                (**(code **)(**pplVar22 + 8))();
                                *pplVar22 = (longlong *)0x0;
                            }
                            if (pplVar22[-6] != (longlong *)0x0) {
                                FUN_14018b900(pplVar22[-6],0);
                            }
                            pplVar2 = pplVar22 + 6;
                            pplVar22 = pplVar22 + 0xe;
                        } while (pplVar2 != pplVar6);
                    }
                }
                if (pplVar23 != (longlong **)0x0) {
                    FUN_14018b900(pplVar23,0);
                }
                local_1f8 = *(undefined **)(puVar24 + 0x18);
                if (local_1f8 == (undefined *)0x0) {
                    puVar20 = *(undefined **)(puVar24 + 8);
                    if (puVar24 == *(undefined **)(puVar20 + 0x18)) {
                        do {
                            puVar24 = puVar20;
                            puVar20 = *(undefined **)(puVar24 + 8);
                        } while (puVar24 == *(undefined **)(puVar20 + 0x18));
                    }
                    local_1f8 = puVar24;
                    if (*(undefined **)(puVar24 + 0x18) != puVar20) {
                        local_1f8 = puVar20;
                    }
                }
                else {
                    for (puVar24 = *(undefined **)(local_1f8 + 0x10); puVar24 != (undefined *)0x0;
                         puVar24 = *(undefined **)(puVar24 + 0x10)) {
                        local_1f8 = puVar24;
                    }
                }
            } while (local_1f8 != local_1e8);
        }
        if (local_1e0 != 0) {
            FUN_1403fd820(local_1f0,*(undefined8 *)(local_1e8 + 8));
            *(undefined **)(local_1e8 + 0x10) = local_1e8;
            *(undefined8 *)(local_1e8 + 8) = 0;
            *(undefined **)(local_1e8 + 0x18) = local_1e8;
            local_1e0 = 0;
        }
    }
    FUN_14018b900(local_1e8,0);
    return;
}



void FUN_1403f9c60(undefined8 param_1,longlong param_2)

{
    longlong *plVar1;
    float fVar2;
    longlong lVar3;
    int iVar4;
    longlong *plVar5;

    lVar3 = DAT_140c65898;
    if (*(longlong *)(param_2 + 0x28) == 0) {
        iVar4 = FUN_140542f80(param_2);
        plVar5 = (longlong *)(lVar3 + 0x15e0);
        if (iVar4 == 0) {
            plVar5 = (longlong *)(lVar3 + 0x15e8);
        }
        if (*(longlong *)(param_2 + 0x28) == 0) {
            *(longlong **)(param_2 + 0x28) = plVar5;
            plVar1 = (longlong *)(param_2 + 0x30);
            *plVar1 = *plVar5;
            *plVar5 = param_2;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x28) = plVar1;
            }
        }
        iVar4 = FUN_140542f80(param_2);
        if (iVar4 == 0) {
            iVar4 = FUN_140543030();
            if ((iVar4 == 0) &&
                (fVar2 = *(float *)(lVar3 + 0x15f0),
                        fVar2 < *(float *)(param_2 + 0x1a8) || fVar2 == *(float *)(param_2 + 0x1a8))) {
                iVar4 = DAT_140c44e40;
                if (*DAT_140c63750 < DAT_140c44e40) {
                    iVar4 = *DAT_140c63750;
                }
                FUN_140543240(fVar2,*(undefined4 *)(&DAT_140c44e50 + (longlong)iVar4 * 4),0x3f800000,param_2
                );
            }
        }
    }
    return;
}

