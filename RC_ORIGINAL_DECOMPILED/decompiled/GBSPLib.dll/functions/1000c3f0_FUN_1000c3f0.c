/*
 * FUN_1000c3f0 at 1000c3f0
 * undefined FUN_1000c3f0(void)
 * Address ranges: 1000c3f0-1000c56a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1000c3f0(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [12];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_18 = *param_1;
  local_14 = param_1[1];
  local_10 = param_1[2];
  iVar1 = FUN_1000c330(param_1,local_24,&local_30);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_100143f0(local_24);
  FUN_100143f0(&local_30);
  FUN_100144b0();
  FUN_100144b0();
  iVar1 = FUN_1000c250(4);
  if (iVar1 == 0) {
    (*DAT_1014e358)(s_CreatePolyFromPlane__Not_enough_m_10038a78);
    return 0;
  }
  FUN_10014530(param_1[3]);
  FUN_10014530(0x466d6000);
  FUN_10014530(0x466d6000);
  FUN_10014560(*(undefined4 *)(iVar1 + 4));
  FUN_10014580(*(undefined4 *)(iVar1 + 4));
  FUN_10014580(*(int *)(iVar1 + 4) + 0xc);
  FUN_10014580(*(int *)(iVar1 + 4) + 0xc);
  FUN_10014580(*(int *)(iVar1 + 4) + 0x18);
  FUN_10014560(*(int *)(iVar1 + 4) + 0x18);
  FUN_10014560(*(int *)(iVar1 + 4) + 0x24);
  FUN_10014560(*(int *)(iVar1 + 4) + 0x24);
  return iVar1;
}

