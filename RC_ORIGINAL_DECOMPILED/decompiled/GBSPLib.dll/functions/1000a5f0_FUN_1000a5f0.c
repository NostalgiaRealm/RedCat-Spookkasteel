/*
 * FUN_1000a5f0 at 1000a5f0
 * undefined FUN_1000a5f0(void)
 * Address ranges: 1000a5f0-1000a683
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000a5f0(undefined4 param_1)

{
  int iVar1;
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
  undefined4 local_4;
  
  local_28 = DAT_1014e30c;
  local_24 = DAT_1014e2f8;
  local_18 = DAT_1014e2c0;
  local_14 = DAT_1014e288;
  local_30 = 0xf;
  local_2c = 0xc;
  local_20 = 0xb;
  local_1c = 0x24;
  local_10 = 0xffff;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  iVar1 = FUN_10005660(&local_30,3,param_1);
  if (iVar1 == 0) {
    (*DAT_1014e358)(s_FinishWriting__Could_not_write_C_10038220);
    return 0;
  }
  return 1;
}

