/*
 * FUN_100065c0 at 100065c0
 * undefined FUN_100065c0(void)
 * Address ranges: 100065c0-10006637
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100065c0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 2;
  local_8 = 0x2c;
  local_4 = DAT_1014e2ec;
  FUN_10004d50(&local_c,0,param_1);
  iVar2 = 0;
  if (0 < DAT_1003fdf4) {
    puVar3 = &DAT_100dc1f8;
    do {
      iVar1 = FUN_100064f0(*puVar3,param_1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 0x39;
    } while (iVar2 < DAT_1003fdf4);
  }
  return 1;
}

