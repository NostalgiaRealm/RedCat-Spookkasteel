/*
 * FUN_005d94e0 at 005d94e0
 * undefined FUN_005d94e0(void)
 * Address ranges: 005d94e0-005d9541
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005d94e0(undefined1 param_1,undefined1 param_2,undefined1 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uStack00000005;
  undefined1 uStack00000006;
  
  iVar5 = *param_4;
  uStack00000005 = param_2;
  uStack00000006 = param_3;
  iVar1 = FUN_005d9550(&param_1,iVar5);
  iVar4 = 0;
  iVar3 = 1;
  do {
    iVar5 = iVar5 + 3;
    iVar2 = FUN_005d9550(&param_1,iVar5);
    if (iVar2 < iVar1) {
      iVar4 = iVar3;
      iVar1 = iVar2;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x100);
  return iVar4;
}

