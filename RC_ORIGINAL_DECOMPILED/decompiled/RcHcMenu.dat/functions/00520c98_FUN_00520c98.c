/*
 * FUN_00520c98 at 00520c98
 * undefined4 __register FUN_00520c98(int param_1)
 * Address ranges: 00520c98-00520ccb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00520c98(int param_1)

{
  undefined1 uVar1;
  undefined3 uVar2;
  
  if ((*(int *)(param_1 + 0x27c) == 0) ||
     (param_1 = *(int *)(param_1 + 0x27c), *(char *)(param_1 + 0x47) != '\0')) {
    uVar2 = (undefined3)((uint)param_1 >> 8);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    uVar2 = 0;
  }
  return CONCAT31(uVar2,uVar1);
}

