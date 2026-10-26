/*
 * FUN_0043d684 at 0043d684
 * undefined __register FUN_0043d684(int param_1, int param_2)
 * Address ranges: 0043d684-0043d6ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043d684(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  if (param_2 != iVar1) {
    if (iVar1 != 0) {
      FUN_0043d960(iVar1,param_1);
    }
    if (param_2 != 0) {
      FUN_0043d940(param_2,param_1);
    }
  }
  return;
}

