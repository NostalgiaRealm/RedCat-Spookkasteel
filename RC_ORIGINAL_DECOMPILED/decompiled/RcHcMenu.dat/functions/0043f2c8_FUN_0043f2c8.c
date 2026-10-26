/*
 * FUN_0043f2c8 at 0043f2c8
 * undefined4 __register FUN_0043f2c8(int * param_1, int * param_2)
 * Address ranges: 0043f2c8-0043f304
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0043f2c8(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_004147cc(param_1);
  iVar2 = FUN_004147cc(param_2);
  if (iVar1 == iVar2) {
    uVar3 = FUN_004147cc(param_1);
    uVar4 = FUN_00409738((int *)param_1[1],(int *)param_2[1],uVar3);
    if ((char)uVar4 != '\0') {
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  }
  return 0;
}

