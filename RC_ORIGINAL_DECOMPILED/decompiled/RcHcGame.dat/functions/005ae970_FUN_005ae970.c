/*
 * FUN_005ae970 at 005ae970
 * undefined FUN_005ae970(void)
 * Address ranges: 005ae970-005ae9cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005ae970(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = FUN_005ae840();
  if (*(int *)(iVar2 + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2;
  }
  puVar4 = (undefined4 *)FUN_005afa50(iVar3 + -1);
  uVar1 = *puVar4;
  if (*(int *)(iVar2 + 0x10) != 0) {
    if (*(int *)(iVar2 + 4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2;
    }
    FUN_005af210(uVar1,0,iVar2);
  }
  FUN_005afb60(iVar3 + -1);
  return uVar1;
}

