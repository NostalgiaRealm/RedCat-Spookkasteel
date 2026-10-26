/*
 * FUN_0043e48c at 0043e48c
 * undefined __register FUN_0043e48c(int param_1, HIMAGELIST param_2)
 * Address ranges: 0043e48c-0043e4c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043e48c(int param_1,HIMAGELIST param_2)

{
  int local_c;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x28);
  local_c = *(int *)(param_1 + 0x24);
  ImageList_GetIconSize(param_2,&local_8,&local_c);
  *(int *)(param_1 + 0x28) = local_8;
  *(int *)(param_1 + 0x24) = local_c;
  FUN_0043e3c8(param_1);
  return;
}

