/*
 * FUN_00529294 at 00529294
 * undefined4 __register FUN_00529294(int param_1)
 * Address ranges: 00529294-005292c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00529294(int param_1)

{
  undefined1 uVar1;
  undefined3 uVar2;
  
  if ((*(int *)(param_1 + 0x290) == 0) || (*(char *)(*(int *)(param_1 + 0x290) + 0x18) == '\0')) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = (undefined3)((uint)*(int *)(param_1 + 0x290) >> 8);
    uVar1 = 1;
  }
  return CONCAT31(uVar2,uVar1);
}

