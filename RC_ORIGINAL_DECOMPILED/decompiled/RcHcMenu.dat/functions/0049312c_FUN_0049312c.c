/*
 * FUN_0049312c at 0049312c
 * undefined4 __register FUN_0049312c(int * param_1, byte * param_2)
 * Address ranges: 0049312c-00493177
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0049312c(int *param_1,byte *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined3 uVar3;
  
  if (*param_2 < 2) {
LAB_0049314f:
    if (*param_2 == 1) {
      iVar2 = FUN_00492dd8(param_1,param_2);
      if ((*(byte *)(iVar2 + 0x44) & 1) != 0) goto LAB_0049316c;
    }
    uVar1 = 0;
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_00492f80(param_1,param_2);
    if ((char)iVar2 != '\0') goto LAB_0049314f;
LAB_0049316c:
    uVar3 = (undefined3)((uint)iVar2 >> 8);
    uVar1 = 1;
  }
  return CONCAT31(uVar3,uVar1);
}

