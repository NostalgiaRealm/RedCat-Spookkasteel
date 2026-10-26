/*
 * FUN_0045f790 at 0045f790
 * undefined1 __register FUN_0045f790(int param_1)
 * Address ranges: 0045f790-0045f7dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_0045f790(int param_1)

{
  undefined4 uVar1;
  undefined1 local_9;
  
  if (*(int *)(param_1 + 4) == 0) {
    local_9 = true;
  }
  else {
    local_9 = FUN_0045e70c(*(int *)(param_1 + 4));
  }
  if ((bool)local_9 != false) {
    uVar1 = FUN_0045fb34(param_1);
    if ((char)uVar1 != '\0') {
      local_9 = FUN_0045f790(*(int *)(param_1 + 0xc));
    }
  }
  return local_9;
}

