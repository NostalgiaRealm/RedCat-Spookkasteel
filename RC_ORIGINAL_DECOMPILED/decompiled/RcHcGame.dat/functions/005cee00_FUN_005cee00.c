/*
 * FUN_005cee00 at 005cee00
 * undefined FUN_005cee00(void)
 * Address ranges: 005cee00-005cf21a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005cee00(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  undefined1 local_130 [4];
  float local_12c;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  float local_c4 [27];
  undefined1 local_58 [36];
  float local_34;
  float local_30;
  float local_2c;
  undefined1 local_28 [12];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [20];
  
  FUN_005cf9a0(local_58);
  local_144 = local_2c;
  local_13c = local_30 - 30000.0;
  local_138 = local_2c;
  local_14c = local_34;
  local_140 = local_34;
  local_148 = local_30;
  FUN_005ca030(param_3,&local_14c,&local_140,2,local_130,local_14,local_1c,local_18,&local_134,0,0,0
              );
  local_12c = local_12c + 1.0;
  local_f4 = 0;
  local_f0 = 0;
  local_ec = 0;
  FUN_005b2fe0(local_28);
  FUN_005b2f20();
  FUN_005b2e60(&local_14c);
  iVar1 = FUN_005b2ec0(0x3a83126f);
  if (iVar1 != 0) {
    FUN_005b3630();
  }
  FUN_005b2e60(&local_140);
  FUN_005b2f20();
  FUN_005b2f20();
  local_d0 = 0;
  local_cc = 0;
  local_d4 = 0;
  local_c4[6] = 0.0;
  local_c4[7] = 0.0;
  local_c4[5] = 0.0;
  local_c4[0xf] = 0.0;
  local_c4[0x10] = 0.0;
  local_c4[0xe] = 0.0;
  local_c4[0x18] = 0.0;
  local_c4[0x19] = 0.0;
  local_c4[0x17] = 0.0;
  FUN_005b2fa0(*(undefined4 *)(param_1 + 0x4c));
  FUN_005b2fa0(*(undefined4 *)(param_1 + 0x4c));
  local_c4[0x1a] = 160.0;
  local_124 = (local_14c + local_34) - local_140;
  local_c4[0x11] = 160.0;
  local_c4[8] = 160.0;
  local_c8 = 0x43200000;
  local_dc = 0;
  local_d8 = 0;
  local_c4[3] = 1.0;
  local_c4[4] = 0.0;
  local_c4[0xc] = 1.0;
  local_c4[0xd] = 1.0;
  local_c4[0x15] = 0.0;
  local_11c = (local_144 + local_2c) - local_138;
  local_c4[0x16] = 1.0;
  local_fc = local_12c;
  local_108 = local_12c;
  local_114 = local_12c;
  local_120 = local_12c;
  local_118 = (local_34 - local_14c) - local_140;
  local_134 = local_2c - local_144;
  local_110 = local_134 - local_138;
  local_10c = (local_34 - local_14c) + local_140;
  local_104 = local_134 + local_138;
  local_100 = local_140 + local_14c + local_34;
  local_f8 = local_138 + local_144 + local_2c;
  pfVar2 = &local_124;
  iVar1 = 4;
  do {
    FUN_005c9410(pfVar2);
    FUN_005c9290(pfVar2);
    pfVar2 = pfVar2 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  local_e0 = local_11c;
  local_e8 = local_124;
  local_e4 = local_120;
  local_c4[2] = local_110;
  local_c4[0] = local_118;
  local_c4[1] = local_114;
  local_c4[0xb] = local_104;
  local_c4[9] = local_10c;
  local_c4[10] = local_108;
  local_c4[0x14] = local_f8;
  local_c4[0x12] = local_100;
  local_c4[0x13] = local_fc;
  FUN_005e05c0();
  FUN_005e0660();
  pfVar2 = local_c4 + 9;
  pfVar3 = local_c4;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  pfVar2 = local_c4 + 0x12;
  pfVar3 = local_c4 + 9;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  FUN_005e0660();
  return;
}

