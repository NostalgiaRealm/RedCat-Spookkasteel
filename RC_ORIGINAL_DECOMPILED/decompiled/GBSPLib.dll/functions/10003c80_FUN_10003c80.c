/*
 * FUN_10003c80 at 10003c80
 * undefined FUN_10003c80(void)
 * Address ranges: 10003c80-10003cbd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10003c80(int param_1,int param_2)

{
  int iVar1;
  
  while( true ) {
    do {
      iVar1 = param_2;
      param_2 = *(int *)(iVar1 + 0x44);
    } while (*(int *)(iVar1 + 0x44) != 0);
    if (*(int *)(iVar1 + 0x3c) == 0) break;
    FUN_10003c80(param_1,*(int *)(iVar1 + 0x3c));
    param_2 = *(int *)(iVar1 + 0x40);
  }
  *(int *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x38) * 4) = iVar1;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  return;
}

