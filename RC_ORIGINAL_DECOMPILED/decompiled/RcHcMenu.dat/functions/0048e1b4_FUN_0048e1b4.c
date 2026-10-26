/*
 * FUN_0048e1b4 at 0048e1b4
 * undefined4 __register FUN_0048e1b4(int param_1, int * param_2)
 * Address ranges: 0048e1b4-0048e1ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0048e1b4(int param_1,int *param_2)

{
  undefined1 uVar1;
  undefined3 uVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    param_1 = FUN_0040320c(param_2,*(int *)(param_1 + 0x18));
    if ((char)param_1 == '\0') {
      uVar1 = 0;
      uVar2 = 0;
      goto LAB_0048e1e1;
    }
  }
  uVar2 = (undefined3)((uint)param_1 >> 8);
  uVar1 = 1;
LAB_0048e1e1:
  return CONCAT31(uVar2,uVar1);
}

