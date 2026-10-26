/*
 * FUN_10020140 at 10020140
 * undefined FUN_10020140(void)
 * Address ranges: 10020140-100201a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10020140(undefined1 param_1,undefined1 param_2,undefined1 param_3,int *param_4)

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
  iVar1 = FUN_100201b0(&param_1,iVar5);
  iVar4 = 0;
  iVar3 = 1;
  do {
    iVar5 = iVar5 + 3;
    iVar2 = FUN_100201b0(&param_1,iVar5);
    if (iVar2 < iVar1) {
      iVar4 = iVar3;
      iVar1 = iVar2;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x100);
  return iVar4;
}

