/*
 * FUN_10006a90 at 10006a90
 * undefined FUN_10006a90(void)
 * Address ranges: 10006a90-10006b07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10006a90(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0xb;
  local_8 = 0x24;
  local_4 = DAT_1014e2c0;
  FUN_10004d50(&local_c,0,param_1);
  iVar2 = 0;
  if (0 < DAT_1003fdf4) {
    puVar3 = &DAT_100dc1f8;
    do {
      iVar1 = FUN_10006990(*puVar3,param_1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 0x39;
    } while (iVar2 < DAT_1003fdf4);
  }
  return 1;
}

