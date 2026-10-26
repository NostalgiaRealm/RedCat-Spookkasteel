/*
 * FUN_0048d438 at 0048d438
 * undefined __register FUN_0048d438(int param_1, byte * param_2)
 * Address ranges: 0048d438-0048d47d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048d438(int param_1,byte *param_2)

{
  int iVar1;
  int extraout_EDX;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_1;
  if (*(int *)(param_1 + -4) == 0) {
    iVar1 = thunk_FUN_00402874(0);
    iVar2 = extraout_EDX;
  }
  if ((byte)(*(char *)(iVar2 + iVar1) - 0x30U) < 10) {
    FUN_0048d53c(param_1,param_2);
  }
  else {
    FUN_0048dabc(param_1,param_2);
  }
  return;
}

