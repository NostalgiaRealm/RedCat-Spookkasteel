/*
 * FUN_005043e4 at 005043e4
 * undefined __register FUN_005043e4(int param_1)
 * Address ranges: 005043e4-00504428
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005043e4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0050423c(param_1);
  *(int *)(iVar1 + 0x21c) = param_1;
  *(undefined1 **)(iVar1 + 0x218) = &LAB_00504390;
  iVar1 = FUN_0050423c(param_1);
  *(int *)(iVar1 + 0x220) = param_1;
  iVar1 = FUN_0050423c(param_1);
  FUN_00432838(iVar1,'\0');
  return;
}

