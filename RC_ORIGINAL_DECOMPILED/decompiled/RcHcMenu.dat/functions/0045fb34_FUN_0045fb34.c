/*
 * FUN_0045fb34 at 0045fb34
 * undefined4 __register FUN_0045fb34(int param_1)
 * Address ranges: 0045fb34-0045fb60
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0045fb34(int param_1)

{
  undefined1 uVar1;
  undefined3 uVar2;
  
  if ((*(int *)(param_1 + 0xc) == 0) || (*(int *)(param_1 + 0xc) == param_1)) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = (undefined3)((uint)*(int *)(param_1 + 0xc) >> 8);
    uVar1 = 1;
  }
  return CONCAT31(uVar2,uVar1);
}

