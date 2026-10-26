/*
 * FUN_10006d90 at 10006d90
 * undefined FUN_10006d90(void)
 * Address ranges: 10006d90-10006e1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10006d90(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_1014e2ec;
  if (*param_2 == -1) {
    if ((*(byte *)(param_2 + 2) & 1) != 0) {
      DAT_1014e360 = DAT_1014e360 + 1;
    }
    param_2[0x1f] = 0;
    param_2[0x1e] = -1;
    param_2[0x13] = DAT_1014e290;
    DAT_1014e290 = DAT_1014e290 + 1;
    DAT_1014e29c = DAT_1014e29c + param_2[0xe];
    return -DAT_1014e290;
  }
  FUN_10006ce0(param_2);
  DAT_1014e2ec = DAT_1014e2ec + 1;
  iVar2 = FUN_10006d90(param_2[0x1a],param_2[4]);
  param_2[0x1a] = iVar2;
  iVar2 = FUN_10006d90(param_2[0x1b],param_2[5]);
  param_2[0x1b] = iVar2;
  return iVar1;
}

