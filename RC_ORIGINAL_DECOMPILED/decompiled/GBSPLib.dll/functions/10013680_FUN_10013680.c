/*
 * FUN_10013680 at 10013680
 * undefined FUN_10013680(void)
 * Address ranges: 10013680-10013732
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10013680(undefined4 param_1)

{
  int iVar1;
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
  undefined4 local_4;
  
  local_38 = DAT_1014e290;
  local_28 = DAT_1014e2e4;
  local_18 = DAT_1014e2b0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_34 = DAT_1014e258;
  local_40 = 4;
  local_2c = 4;
  local_24 = DAT_1014e2d0;
  local_3c = 0x3c;
  local_30 = 5;
  local_20 = 0x15;
  local_1c = 1;
  local_14 = DAT_1014e308;
  local_10 = 0xffff;
  iVar1 = FUN_10005660(&local_40,4,param_1);
  if (iVar1 == 0) {
    (*DAT_1014e358)(s_FinishWritingVis__Could_not_writ_1003a5c0);
    return 0;
  }
  return 1;
}

