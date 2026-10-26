/*
 * FUN_10005660 at 10005660
 * undefined FUN_10005660(void)
 * Address ranges: 10005660-100056c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10005660(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = 0;
  if (0 < param_2) {
    puVar2 = (undefined4 *)(param_1 + 8);
    do {
      local_c = puVar2[-2];
      local_8 = puVar2[-1];
      local_4 = *puVar2;
      iVar1 = FUN_10004d50(&local_c,puVar2[1],param_3);
      if (iVar1 == 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 4;
    } while (iVar3 < param_2);
  }
  return 1;
}

