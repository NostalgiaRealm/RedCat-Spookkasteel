/*
 * FUN_004d6094 at 004d6094
 * undefined4 __register FUN_004d6094(int param_1, int param_2)
 * Address ranges: 004d6094-004d60ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004d6094(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined3 uVar2;
  
  if (((param_2 == 0) || (*(int *)(param_2 + 4) != param_1)) ||
     (*(int *)(param_2 + 0xc) != *(int *)(param_1 + 0x14))) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = (undefined3)((uint)*(int *)(param_2 + 0xc) >> 8);
    uVar1 = 1;
  }
  return CONCAT31(uVar2,uVar1);
}

