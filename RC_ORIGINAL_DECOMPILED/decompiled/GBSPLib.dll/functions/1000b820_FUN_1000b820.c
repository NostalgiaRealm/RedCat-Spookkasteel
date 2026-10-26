/*
 * FUN_1000b820 at 1000b820
 * undefined FUN_1000b820(void)
 * Address ranges: 1000b820-1000b880
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000b820(void)

{
  int iVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_1014e2cc;
  local_8 = DAT_1014e2f4;
  iVar1 = FUN_10014700(0,&local_8,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_1000b480(iVar1);
  if (iVar1 == 0) {
    FUN_10014990();
    return 0;
  }
  FUN_10014990();
  return 1;
}

