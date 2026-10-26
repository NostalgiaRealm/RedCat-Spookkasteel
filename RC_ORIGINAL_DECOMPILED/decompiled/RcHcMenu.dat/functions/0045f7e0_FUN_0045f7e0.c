/*
 * FUN_0045f7e0 at 0045f7e0
 * undefined1 __register FUN_0045f7e0(int param_1)
 * Address ranges: 0045f7e0-0045f82c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_0045f7e0(int param_1)

{
  undefined4 uVar1;
  undefined1 local_9;
  
  if (*(int *)(param_1 + 8) == 0) {
    local_9 = true;
  }
  else {
    local_9 = FUN_0045e70c(*(int *)(param_1 + 8));
  }
  if ((bool)local_9 != false) {
    uVar1 = FUN_0045fb34(param_1);
    if ((char)uVar1 != '\0') {
      local_9 = FUN_0045f7e0(*(int *)(param_1 + 0xc));
    }
  }
  return local_9;
}

