/*
 * FUN_100063b0 at 100063b0
 * undefined FUN_100063b0(void)
 * Address ranges: 100063b0-100064ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100063b0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_5c = 1;
  local_58 = 0x50;
  local_54 = DAT_1003fdf4;
  FUN_10004d50(&local_5c,0,param_1);
  iVar3 = 0;
  if (0 < DAT_1003fdf4) {
    puVar2 = &DAT_100dc200;
    do {
      local_50 = puVar2[0x2b];
      local_30 = *puVar2;
      local_2c = puVar2[1];
      local_48 = puVar2[0x25];
      local_28 = puVar2[2];
      local_44 = puVar2[0x26];
      local_40 = puVar2[0x27];
      local_3c = puVar2[0x28];
      local_4c = puVar2[0x2c];
      local_38 = puVar2[0x29];
      local_1c = puVar2[0x2f];
      local_34 = puVar2[0x2a];
      local_24 = puVar2[0x2d];
      local_20 = puVar2[0x2e];
      local_18 = puVar2[0x30];
      local_14 = puVar2[0x31];
      local_c = puVar2[0x35];
      local_8 = puVar2[0x36];
      local_10 = puVar2[0x32];
      iVar1 = FUN_10014a20(0x50);
      if (iVar1 != 1) {
        (*DAT_1014e358)(s_SaveGFXModelData__There_was_an_e_10037224);
        return 0;
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 0x39;
    } while (iVar3 < DAT_1003fdf4);
  }
  return 1;
}

